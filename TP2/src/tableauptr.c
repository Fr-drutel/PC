/* Fichier: tableauptr.c
* Objectif : un tableau d'entiers (int) et un tableau de nombres à virgule flottante (float) , multiplier par 3 la valeur à chaque position dont l'indice est divisible par 2
* Auteurs: François-Régis Drutel et Paul Dumont
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main(void)
{

srand(time(NULL)); // Initialise le générateur avec une graine
int taille = 10;
int tab_int[10];
float tab_float[10]; 

int *ptr1 = &tab_int[0];
printf("\ntableau int : \n");
for(int i = 0 ; i < taille ; i ++){
    *ptr1 = rand() % 101; // Assignation d'une valeur aléatoire entre 0 et 100 à chaque élément du tableau d'entiers
    printf("tab_int[%i] : %i\n",i,*ptr1); 
    ptr1++; // Déplace le pointeur vers l'élément suivant du tableau
}

float *ptr2 = &tab_float[0]; 
printf("\ntableau float : \n");
for(int i = 0 ; i < taille ; i ++){
    *ptr2 = ((rand() % 1000) / 100.0); // Assignation d'une valeur aléatoire entre 0.00 et 9.99 à chaque élément du tableau de flottants
    printf("tab_float[%i] : %.2f\n",i,*ptr2); 
    ptr2++; // Déplace le pointeur vers l'élément suivant du tableau
}

ptr1 = tab_int; // Réinitialise le pointeur sur le début du tableau d'entiers
printf("\ntableau modifié int : \n");
for(int i = 0 ; i < taille ; i ++){
    if(i % 2 == 0){
        *ptr1 = *ptr1 * 3; // Multiplie par 3 les éléments d'index pair dans le tableau d'entiers
    }
    printf("tab_int[%i] : %i\n",i,*ptr1); 
    ptr1++; // Déplace le pointeur vers l'élément suivant du tableau
}

ptr2 = tab_float; // Réinitialise le pointeur sur le début du tableau de flottants
printf("\ntableau modifié float : \n");
for(int i = 0 ; i < taille ; i ++){
    if(i % 2 == 0){
        *ptr2 = *ptr2 * 3; // Multiplie par 3 les éléments d'index pair dans le tableau de flottants
    }
    printf("tab_float[%i] : %.2f\n",i,*ptr2); 
    ptr2++; // Déplace le pointeur vers l'élément suivant du tableau
}


}