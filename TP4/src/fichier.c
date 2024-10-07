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

int lire_fichier(char* 'nom_de_fichier');
    char content[1000];
    int fd, count, size;
    fd = open ("./file.c", O_RDONLY);
    size = read(fd, content, 1000);
    for (count = 0; count < size; count ++) {
    printf("%c", content[count]);
    }
    close(fd);
    return 0;
    












int ecrire_dans_fichier(char* 'nom_de_fichier',char* 'message');
