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


int lire_fichier(char* nom_de_fichier){
    char content;
    int fd, size;
    fd = open (nom_de_fichier, O_RDONLY);
    while (1) {
        size = read(fd, &content, 1);
        if (size < 1) {
            break;
        }
        printf("%c", content);
    }
    close(fd);
    printf("\n");
}

int ecrire_dans_fichier(char* nom_de_fichier,char* message){
    int fd, size;
    fd = open(nom_de_fichier, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
    size = write(fd, message, strlen(message));
    close(fd);
    return 0;
}
