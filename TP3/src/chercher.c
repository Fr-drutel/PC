/* Fichier: chercher.c
* Objectif : créer un tableau de 100 entiers, 
* puis rechercher un entier spécifique dans ce tableau.
* Auteurs: François-Régis Drutel et Paul Dumont
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int tab_int[100];
    int *ptr = &tab_int[0];
    srand(time(0)); 

    printf("Tableau :\n");
    for(int i = 0; i < 100; i++){
        *ptr = rand() % 201 - 100; // random entier entre -100 et 100
        printf("%i ", *ptr);
        ptr++;
    }
    
    ptr = tab_int; // Réinitialisation du pointeur

    int num_user;
    printf("\nun entier ? \n");
    scanf("%i", &num_user); // Demande à l'utilisateur d'entrer un entier

    int present = 0;
    for(int i = 0; i < 100; i++){
        if(num_user == *ptr){ 
            printf("l'entier %i est présent \n", num_user);
            present = 1;
            break; // Sort de la boucle si l'entier saisi est présent dans le tableau
        }
        ptr++;
    }

    if(present == 0){
        printf("l'entier %i n'est pas présent \n", num_user); 
    }
}