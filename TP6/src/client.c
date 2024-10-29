/*
 * SPDX-FileCopyrightText: 2021 John Samuel
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <cjson/cJSON.h>


#include "client.h"
#include "bmp.h"

/*
 * Fonction d'envoi et de réception de messages
 * Il faut un argument : l'identifiant de la socket
 */
int envoie_recois_message(int socketfd)
{
  char message[1024];
  printf("Votre message (max 1000 caracteres): ");
  fgets(message, sizeof(message), stdin);

  // Création de l'objet JSON
  cJSON *json_message = cJSON_CreateObject();
  cJSON_AddStringToObject(json_message, "code", "message");
  cJSON_AddStringToObject(json_message, "contenu", message);

  // Conversion en texte JSON
  char *json_text = cJSON_PrintUnformatted(json_message);

  // Envoi du message JSON
  int write_status = write(socketfd, json_text, strlen(json_text));
  if (write_status < 0) {
    perror("erreur ecriture");
    exit(EXIT_FAILURE);
  }

  // Nettoyage
  free(json_text);
  cJSON_Delete(json_message);

  // Réception de la réponse du serveur
  char data[1024];
  memset(data, 0, sizeof(data));
  int read_status = read(socketfd, data, sizeof(data));
  if (read_status < 0) {
    perror("erreur lecture");
    return -1;
  }

  printf("Message recu: %s\n", data);
  return 0;
}


void analyse(char *pathname,int nb_couleur ,char *data)
{
  // compte de couleurs
  couleur_compteur *cc = analyse_bmp_image(pathname);
  int count;
  strcpy(data, "couleurs: ");
  char temp_string[10];
  sprintf(temp_string, "%d,", nb_couleur);
  if (cc->size < nb_couleur)
  {
    sprintf(temp_string, "%d,", cc->size);
  }
  strcat(data, temp_string);

  // choisir 30 couleurs
  for (count = 1; count < nb_couleur+1 && cc->size - count > 0; count++)
  {
    if (cc->compte_bit == BITS32)
    {
      sprintf(temp_string, "#%02x%02x%02x,", cc->cc.cc24[cc->size - count].c.rouge, cc->cc.cc32[cc->size - count].c.vert, cc->cc.cc32[cc->size - count].c.bleu);
    }
    if (cc->compte_bit == BITS24)
    {
      sprintf(temp_string, "#%02x%02x%02x,", cc->cc.cc32[cc->size - count].c.rouge, cc->cc.cc32[cc->size - count].c.vert, cc->cc.cc32[cc->size - count].c.bleu);
    }
    strcat(data, temp_string);
  }

  // enlever le dernier virgule
  data[strlen(data) - 1] = '\0';
}

int envoie_couleurs(int socketfd, int nb_couleur, char *pathname)
{
  char data[1024];
  analyse(pathname, nb_couleur, data);

  // Création de l'objet JSON
  cJSON *json_message = cJSON_CreateObject();
  cJSON_AddStringToObject(json_message, "code", "couleurs");
  cJSON_AddStringToObject(json_message, "data", data);

  // Conversion en texte JSON
  char *json_text = cJSON_PrintUnformatted(json_message);

  int write_status = write(socketfd, json_text, strlen(json_text));
  if (write_status < 0) {
    perror("erreur ecriture");
    exit(EXIT_FAILURE);
  }

  // Nettoyage
  free(json_text);
  cJSON_Delete(json_message);

  return 0;
}


int main(int argc, char **argv)
{
  int socketfd;

  struct sockaddr_in server_addr;

  if (argc < 2)
  {
    printf("usage: ./client chemin_bmp_image\n");
    return (EXIT_FAILURE);
  }

  /*
   * Creation d'une socket
   */
  socketfd = socket(AF_INET, SOCK_STREAM, 0);
  if (socketfd < 0)
  {
    perror("socket");
    exit(EXIT_FAILURE);
  }

  // détails du serveur (adresse et port)
  memset(&server_addr, 0, sizeof(server_addr));
  server_addr.sin_family = AF_INET;
  server_addr.sin_port = htons(PORT);
  server_addr.sin_addr.s_addr = INADDR_ANY;

  // demande de connection au serveur
  int connect_status = connect(socketfd, (struct sockaddr *)&server_addr, sizeof(server_addr));
  if (connect_status < 0)
  {
    perror("connection serveur");
    exit(EXIT_FAILURE);
  }
  if (argc != 3)
  {
    // envoyer et recevoir un message
    envoie_recois_message(socketfd);
  }
  else
  {
    // envoyer et recevoir les couleurs prédominantes
    // d'une image au format BMP (argv[1])
    // int nb_couleur = 30;
    if(atoi(argv[2])>30)
    {
      perror("TROP DE COULEUR");
      exit(EXIT_FAILURE);
    }


    envoie_couleurs(socketfd, atoi(argv[2]),  argv[1]);
  }

  close(socketfd);
}
