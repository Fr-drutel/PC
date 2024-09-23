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
        float notes_en_C;
        float notes_en_S;
    } note;
};
struct etudiant etudiant[5];

strcpy(etudiant[0].nom, "Paul");
strcpy(etudiant[0].prenom, "Dumont");
strcpy(etudiant[0].adresse, "Meximieux");
etudiant[0].note.notes_en_C = 20.0;
etudiant[0].note.notes_en_S = 18.8;

strcpy(etudiant[1].nom, "Raphaël");
strcpy(etudiant[1].prenom, "Berger");
strcpy(etudiant[1].adresse, "Grasse");
etudiant[1].note.notes_en_C = 19.7;
etudiant[1].note.notes_en_S = 19.4;

strcpy(etudiant[2].nom, "Olivier");
strcpy(etudiant[2].prenom, "Mermet");
strcpy(etudiant[2].adresse, "Lyon");
etudiant[2].note.notes_en_C = 17.4;
etudiant[2].note.notes_en_S = 19.6;

strcpy(etudiant[3].nom, "Romain");
strcpy(etudiant[3].prenom, "Thibault");
strcpy(etudiant[3].adresse, "Villeurbanne");
etudiant[3].note.notes_en_C = 16.2;
etudiant[3].note.notes_en_S = 17.1;

strcpy(etudiant[4].nom, "Adonis");
strcpy(etudiant[4].prenom, "Robin");
strcpy(etudiant[4].adresse, "Villeurbanne");
etudiant[4].note.notes_en_C = 18.6;
etudiant[4].note.notes_en_S = 20.0;

for(int i = 0; i < 5; i++){
    printf("mon nom est : %s\n",etudiant[i].nom);
    printf("mon prenom est : %s\n",etudiant[i].prenom);
    printf("mon adresse est : %s\n",etudiant[i].adresse);
    printf("ma note de C %.1f\n",etudiant[i].note.notes_en_C);
    printf("ma note de S %.1f\n",etudiant[i].note.notes_en_S);
    printf("\n");
}

}


