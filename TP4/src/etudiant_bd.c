/* Fichier: bonjour.c
* Objectif : afficher Bonjour le Monde! à l'écran 
* Auteurs: François-Régis Drutel et Paul Dumont
*/

#include <stdio.h> 

int main(void)
{
struct etudiant {
    char nom[30];
    char prenom[30];
    char adresse[30];
    struct note {
        float notes_en_C;
        float notes_en_S;
    } note;  
};

int nb_etudiant = 2;
struct etudiant etudiant[nb_etudiant];

for(int i = 0; i < nb_etudiant,i++){

    printf("nom de l'etudiant %i", i);
    scanf("%s", &etudiant[i].nom);
    printf("prenom de l'etudiant %i", i);
    scanf("%s", &etudiant[i].prenom);
    printf("adresse de l'etudiant %i", i);
    scanf("%s", &etudiant[i].adresse);
    printf("notes_en_C de l'etudiant %i", i);
    scanf("%s", &etudiant[i].note.notes_en_C);
    printf("notes_en_S de l'etudiant %i", i);
    scanf("%s", &etudiant[i].note.notes_en_S);
}


for(int j=0;j<nb_etudiant<j++){
    printf("mon nom est : %s\n", etudiant[j].nom);
    printf("mon prenom est : %s\n", etudiant[j].prenom);
    printf("mon adresse est : %s\n", etudiant[j].adresse);
    printf("ma note de C %.1f\n", etudiant[j].note.notes_en_C);
    printf("ma note de S %.1f\n", etudiant[j].note.notes_en_S);
}
}


