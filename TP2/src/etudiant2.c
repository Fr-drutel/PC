/* Fichier: bonjour.c
* Objectif : afficher Bonjour le Monde! à l'écran 
* Auteurs: François-Régis Drutel et Paul Dumont
*/

#include <stdio.h> 
#include <string.h>

int main(void)
{

struct etudiant{
    char nom[30];
    char prenom[30];
    char adresse[30];
    struct note{
        float notes_en_C[30];
        float notes_en_S[30];
    } note;
};
struct etudiant etudiant[5];

strcpy(etudiant[0].nom, "Paul");
strcpy(etudiant[0].prenom, "Dumont");
strcpy(etudiant[0].adresse, "Meximieux");
etudiant[0].note.notes_en_C, 20.0;
etudiant[0].note.notes_en_S, 18.8;

strcpy(etudiant[0].nom, "Raphaël");
strcpy(etudiant[0].prenom, "Berger");
strcpy(etudiant[0].adresse, "Grasse");
etudiant[0].note.notes_en_C, 19.7;
etudiant[0].note.notes_en_S, 19.4;

strcpy(etudiant[0].nom, "Olivier");
strcpy(etudiant[0].prenom, "Mermet");
strcpy(etudiant[0].adresse, "Lyon");
etudiant[0].note.notes_en_C, 17.4;
etudiant[0].note.notes_en_S, 19.6;

strcpy(etudiant[0].nom, "Romain");
strcpy(etudiant[0].prenom, "Thibault");
strcpy(etudiant[0].adresse, "Villeurbanne");
etudiant[0].note.notes_en_C, 16.2;
etudiant[0].note.notes_en_S, 17.1;

strcpy(etudiant[0].nom, "Adonis");
strcpy(etudiant[0].prenom, "Robin");
strcpy(etudiant[0].adresse, "Villeurbanne");
etudiant[0].note.notes_en_C, 18.6;
etudiant[0].note.notes_en_S, 20.0;

}


