/* Fichier: etudiant_bd.c
* Objectif : gérer une base de données d'étudiants en enregistrant 
* leurs informations personnelles et leurs notes avec la fonction scanf
* Auteurs: François-Régis Drutel et Paul Dumont
*/

#include <stdio.h> 

int etudiant_bd_fnc(nb_etudiant){

for(int j=0;j<nb_etudiant;j++){
    printf("mon nom est : %s\n", etudiant[j].nom);
    printf("mon prenom est : %s\n", etudiant[j].prenom);
    printf("mon adresse est : %s\n", etudiant[j].adresse);
    printf("ma note de C :%.1f\n", etudiant[j].note.notes_en_C);
    printf("ma note de S :%.1f\n", etudiant[j].note.notes_en_S);
}
}


