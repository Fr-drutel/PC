/* Fichier: fichier.c
* Objectif : créer un programme qui gère les fichiers en utilisant 
* les fonctions lire_fichier et ecrire_dans_fichier
* Auteurs: François-Régis Drutel et Paul Dumont
*/

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "fichier.h"


void lire_fichier(char* nom_de_fichier){
    char contenu;
    int fd, size;
    fd = open (nom_de_fichier, O_RDONLY);
    while (1) {
        size = read(fd, &contenu, 1);
        if (size < 1) {
            break;
        }
        printf("%c", contenu);
    }
    close(fd);
    printf("\n");
}

void ecrire_dans_fichier(char* nom_de_fichier,char* message){
    int fd, size;
    fd = open(nom_de_fichier, O_CREAT | O_WRONLY | O_APPEND, S_IRUSR | S_IWUSR);

    char saut_ligne[strlen(message) + 2]; // 1 pour '\n' et 1 pour '\0'
    sprintf(saut_ligne, "%s\n", message); // Ajoute "\n" à la fin du message

    size = write(fd, saut_ligne, strlen(saut_ligne));
    close(fd);
}
