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

strcpy(etudiant[0].nom, "Pierre");
strcpy(etudiant[0].prenom, "Dupont");
strcpy(etudiant[0].adresse, "Boulevard du 11 novembre 1918");
etudiant[0].note.notes_en_C, 17,3;
etudiant[0].note.notes_en_S, 12,9;

strcpy(etudiant[1].nom, "dezd");
strcpy(etudiant[1].prenom, "Dupont");
strcpy(etudiant[1].adresse, "Boulevard du 11 novembre 1918");
etudiant[1].note.notes_en_C, 17,3;
etudiant[1].note.notes_en_S, 12,9;

strcpy(etudiant[2].nom, "zefef");
strcpy(etudiant[2].prenom, "Dupont");
strcpy(etudiant[2].adresse, "Boulevard du 11 novembre 1918");
etudiant[2].note.notes_en_C, 17,3;
etudiant[2].note.notes_en_S, 12,9;

strcpy(etudiant[3].nom, "Pierre");
strcpy(etudiant[3].prenom, "Dupont");
strcpy(etudiant[3].adresse, "Boulevard du 11 novembre 1918");
etudiant[3].note.notes_en_C, 17,3;
etudiant[3].note.notes_en_S, 12,9;

strcpy(etudiant[4].nom, "fzefzefezf");
strcpy(etudiant[4].prenom, "Dupont");
strcpy(etudiant[4].adresse, "Boulevard du 11 novembre 1918");
etudiant[4].note.notes_en_C, 17,3;
etudiant[4].note.notes_en_S, 12,9;

for(int i = 0; i < 5; i++){
    printf("mon nom : %s\n",etudiant[i].nom);
    printf("%s\n",etudiant[i].prenom);
    printf("%s\n",etudiant[i].adresse);
    printf("%s\n",etudiant[i].nom);
}










}


