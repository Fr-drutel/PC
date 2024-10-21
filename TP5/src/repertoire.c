#include <sys/types.h>
#include <dirent.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h> 
#include <string.h>

int lire_dossier(char *nom_repertoire){

    DIR *dirp = opendir(nom_repertoire);
    if (dirp == NULL) {
        perror("opendir");
        return(EXIT_FAILURE);
    }  

    struct dirent *ent;
    while(1) {
        ent = readdir(dirp);
        if (ent == NULL) {
            break;
        }
        printf("%s\n", ent->d_name);
    }
    closedir(dirp);
    return(0);
}

int lire_dossier_recursif(char* nom_repertoire) {
    printf("%s",nom_repertoire);
    DIR *dirp = opendir(nom_repertoire);
    struct dirent * ent;
    while(1) {
        ent = readdir(dirp);
        if (ent == NULL) {
            break;
        }
        if (strcmp(ent->d_name, ".") == 0 || strcmp(ent->d_name, "..") == 0) {
            continue;
        }
        char chemin[1024];
        sprintf(chemin, "%s/%s", nom_repertoire, ent->d_name);
        
        printf("%s\n", ent->d_name);
        if (ent->d_type == DT_DIR) {
            lire_dossier_recursif(chemin);
        }
        
    }
    closedir(dirp);
}
int lire_dossier_iteratif(char* nom_repertoire) {
    // Création d'une pile (tableau dynamique) pour stocker les répertoires
    char** pile = (char**)malloc(100 * sizeof(char*));
    int taille_pile = 0;

    // Pousser le répertoire de départ sur la pile
    pile[taille_pile] = strdup(nom_repertoire);
    taille_pile++;

    while (taille_pile > 0) {
        // Pop de la pile
        char* rep_courant = pile[taille_pile - 1];
        taille_pile--;

        printf("%s\n", rep_courant);
        DIR *dirp = opendir(rep_courant);
        if (dirp == NULL) {
            perror("Erreur d'ouverture de dossier");
            free(rep_courant);
            continue;
        }

        struct dirent *ent;
        while ((ent = readdir(dirp)) != NULL) {
            if (strcmp(ent->d_name, ".") == 0 || strcmp(ent->d_name, "..") == 0) {
                continue;
            }

            char chemin[1024];
            sprintf(chemin, "%s/%s", rep_courant, ent->d_name);
            printf("%s\n", chemin);

            if (ent->d_type == DT_DIR) {
                // Pousser le sous-dossier sur la pile
                pile[taille_pile] = strdup(chemin);
                taille_pile++;
            }
        }

        closedir(dirp);
        free(rep_courant);
    }

    // Libération de la mémoire
    free(pile);
    return 0;
}
