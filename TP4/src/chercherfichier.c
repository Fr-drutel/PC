/* Fichier: chercherfichier.c
* Objectif : rechercher une phrase dans un fichier donné
* Auteurs: François-Régis Drutel et Paul Dumont
*/

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

// Fonction pour compter le nombre d'occurrences d'une sous-chaîne dans une chaîne
int compter_occurences(char *ligne, char *phrase) {
    int compte = 0;
    char *temp = ligne;

    while ((temp = strstr(temp, phrase)) != NULL) {
        compte++;
        temp += strlen(phrase);
    }
    return compte;
}

int main() {
    char nom_fichier[100];
    char phrase[100];
    char ligne[1024];
    char contenu;
    int numero_ligne = 0;
    int fd, size;
    
    printf("Entrez le nom du fichier : ");
    scanf("%s", nom_fichier);
    
    fd = open (nom_fichier, O_RDONLY);

    printf("Entrez la phrase que vous souhaitez rechercher : ");
    getchar(); // Pour virer le "\n" laissé par scanf
    
    while (1) {
        size = read(fd, &contenu, 1);

        numero_ligne++;
        int occurences = compter_occurences(ligne, phrase);
        
        if (occurences > 0) {
            printf("Ligne %d, %d fois\n", numero_ligne, occurences);
        }
    }

    close(fd);
    printf("\n");
}
