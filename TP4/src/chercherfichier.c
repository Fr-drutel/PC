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
int compter_occurrences(char *ligne, char *phrase) {
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
    int index = 0;


    printf("Entrez le nom du fichier : ");
    scanf("%s", nom_fichier);  

    fd = open (nom_fichier, O_RDONLY);
    if (fd == -1) {
        perror("Erreur lors de l'ouverture du fichier");
        return 1;
    }


    printf("Entrez la phrase que vous souhaitez rechercher : ");
    getchar(); // Pour enlever le "\n" laissé par scanf

    fgets(phrase, sizeof(phrase), stdin);
    phrase[strcspn(phrase, "\n")] = '\0'; // Pour enlever le "\n" laissé par fgets


    printf("\nRésultats de la recherche :\n");
    while ((size = read(fd, &contenu, 1)) > 0) {
        if (contenu == '\n') {
            ligne[index] = '\0';  // Terminer la ligne
            int occurrences = compter_occurrences(ligne, phrase);
            
            if (occurrences > 0) {
                printf("Ligne %d, %d fois\n", numero_ligne + 1, occurrences);
            }
            
            numero_ligne++;
            index = 0;  // Réinitialiser pour la prochaine ligne
        } else {
            ligne[index++] = contenu;
        }
    }

    close(fd);
    printf("\n");
}
