#include <sys/types.h>
#include <dirent.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h> 

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

int lire_dossier_recursif(char *nom_repertoire){    
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

        lire_dossier_recursif(ent->d_name);

    closedir(dirp);
    return(0);
}
