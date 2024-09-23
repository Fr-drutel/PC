/* Fichier: etudiant.c
* Objectif : gérer les informations de cinq étudiant.e.s en utilisant des tableaux
* Auteurs: François-Régis Drutel et Paul Dumont
*/

#include <stdio.h> 

int main(void)
{
    char nom[5][25] = {"Paul Dumont","Raphaël Berger","Olivier Mermet","Romain Thibault","Adonis Robin"};
    char adresse[5][25] = {"Meximieux","Grasse","Lyon","Villeurbanne","Villeurbanne"};
    float note_prog_c[5] = {20.0,19,17,16,18};
    float note_sys_exploit[5] = {18,19,19,17,20};
    
    for(int i = 0; i < 5; i++){
        printf("Etudiant : %s\n", nom[i]);
        printf("Adresse : %s\n", adresse[i]);
        printf("Note en Programmation :%.1f\n", note_prog_c[i]);
        printf("Note en système : %.1f\n", note_sys_exploit[i]);
        printf("\n");
    }
       

}


