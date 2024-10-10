/* Fichier: etudiant_bd.c
* Objectif : gérer une base de données d'étudiants en enregistrant 
* leurs informations personnelles et leurs notes avec la fonction scanf
* Auteurs: François-Régis Drutel et Paul Dumont
*/

#include <stdio.h> 
#include <string.h>
#include "fichier.h" 

int main(){
    struct etudiant {
        char nom[30];
        char prenom[30];
        char adresse[30];
        struct note {
            float notes_en_C;
            float notes_en_S;
        } note;  
    };

    int nb_etudiant = 5;
    struct etudiant etudiant[nb_etudiant];
    char* nom_de_fichier3 = "etudiant.txt";

    for(int i = 0; i < nb_etudiant;i++){

        printf("nom de l'etudiant %i :", i);
        scanf("%s", etudiant[i].nom);
        ecrire_dans_fichier(nom_de_fichier3, etudiant[i].nom);

        printf("prenom de l'etudiant %i :", i);
        scanf("%s", etudiant[i].prenom);
        ecrire_dans_fichier(nom_de_fichier3, etudiant[i].prenom);

        printf("adresse de l'etudiant %i :", i);
        getchar(); 
        fgets(etudiant[i].adresse, sizeof(etudiant[i].adresse), stdin);
        etudiant[i].adresse[strcspn(etudiant[i].adresse, "\n")] = '\0';

        ecrire_dans_fichier(nom_de_fichier3, etudiant[i].adresse);

        printf("notes_en_C de l'etudiant %i :", i);
        scanf("%f", &etudiant[i].note.notes_en_C);
        char noteC[20];
        sprintf(noteC, "%.2f",etudiant[i].note.notes_en_C);
        ecrire_dans_fichier(nom_de_fichier3, noteC);

        printf("notes_en_S de l'etudiant %i :", i);
        scanf("%f", &etudiant[i].note.notes_en_S);
        char noteS[20];
        sprintf(noteS, "%.2f",etudiant[i].note.notes_en_S);
        ecrire_dans_fichier(nom_de_fichier3, noteS);

        ecrire_dans_fichier(nom_de_fichier3, "  ");
    }
    
    lire_fichier(nom_de_fichier3);
}


