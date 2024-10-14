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

int lire_dossier_eteratif(char* nom_repertoire) {
    printf("%s",nom_repertoire);
    DIR *dirp = opendir(nom_repertoire);
    struct dirent * ent;
    if (ent == NULL) {
            break;
        }
    if (strcmp(ent->d_name, ".") == 0 || strcmp(ent->d_name, "..") == 0) {
            continue;
        }

        // a continuer 


}