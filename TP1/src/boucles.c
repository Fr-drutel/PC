/* Fichier: boucles.c
* Objectif : utiliser des boucles `for` pour afficher un triangle rectangle
* Auteurs: François-Régis Drutel et Paul Dumont
*/

#include <stdio.h> 

int main(void)
{
    int compteur = 5;
    for (int ligne = 0;ligne < compteur-1;ligne++){
        for (int col = 0;col <compteur;col++){
            if(ligne == col){
                printf("*\n");
            }
            else if(col == 0){
                printf("*");
            }
            else if(col < ligne){
                printf("#");
            }
        }
    }
    for (int fin = 0;fin < compteur;fin++){ 
        printf("*");
    }
    printf("\n");
}

int main(void)
{
    int compteur = 117;
    int ligne = 0;

    while (ligne < compteur-1){
        int col = 0;
        while (col <compteur){
            if(ligne == col){
                printf("*\n");
            }
            else if(col == 0){
                printf("*");
            }
            else if(col < ligne){
                printf("#");
            }
        col++;
        }
    ligne++;
    }
    for (int fin = 0;fin < compteur;fin++){ 
        printf("*");
    }
    printf("\n");
}