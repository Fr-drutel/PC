/* Fichier: grand_petit.c
* Objectif : créer un tableau de 100 entiers et calculer à la fois le 
* numéro le plus grand et le numéro le plus petit dans ce tableau.
* Auteurs: François-Régis Drutel et Paul Dumont
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int tab_int[100]; 
    int *ptr = &tab_int[0]; // Initialisation du pointeur
    srand(time(0)); 

    printf("[");
    for(int i = 0; i < 100; i++){

        *ptr = rand() % 1000 + 1; // entier random stocké dans l'adresse pointée 

        if (i == 99){
            printf("%i", *ptr); 
        } else {
            printf("%i, ", *ptr); 
        }

        ptr++; 
    }
    printf("]");

    int max = 0; 
    int min = 1000; 

    ptr = tab_int; // Réinitialisation du pointeur 

    // Parcours du tableau pour trouver le maximum et le minimum
    for(int i = 0; i < 100; i++){
        if(*ptr > max){
            max = *ptr; // Si la valeur pointée est supérieure à max, on l'assigne à max
        }

        if(*ptr < min){
            min = *ptr; // Si la valeur pointée est inférieure à min, on l'assigne à min
        }   
        ptr++; 
    }

    printf("\nLe numéro le plus grand est : %i ", max);
    printf("\nLe numéro le plus petit est : %i \n", min);
}
