/* Fichier: etudiant.c
* Objectif : gérer les informations de cinq étudiant.e.s en utilisant des tableaux
* Auteurs: François-Régis Drutel et Paul Dumont
*/

#include <stdio.h> 

int main(void)
{

// Tableau de noms d'étudiants
char nom[5][25] = {"Paul Dumont", "Raphaël Berger", "Olivier Mermet", "Romain Thibault", "Adonis Robin"};

// Tableau d'adresses des étudiants
char adresse[5][25] = {"Meximieux", "Grasse", "Lyon", "Villeurbanne", "Villeurbanne"};

// Tableau des notes en Programmation C
float note_prog_c[5] = {20.0, 19.7, 17.4, 16.2, 18.6};

// Tableau des notes en Systèmes d'exploitation
float note_sys_exploit[5] = {18.8, 19.4, 19.6, 17.1, 20.0};

// Boucle d'affichage
for(int i = 0; i < 5; i++) {
    printf("Etudiant : %s\n", nom[i]);
    printf("Adresse : %s\n", adresse[i]);
    printf("Note en Programmation : %.1f\n", note_prog_c[i]);
    printf("Note en système : %.1f\n", note_sys_exploit[i]);
    printf("\n");
}


}


