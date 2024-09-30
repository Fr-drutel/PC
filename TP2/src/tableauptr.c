/* Fichier: bonjour.c
* Objectif : afficher Bonjour le Monde! à l'écran 
* Auteurs: François-Régis Drutel et Paul Dumont
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main(void)
{
    srand(time(NULL));

    int taille = 10;

    int tab_int[10];
    float tab_float[10];

    int *ptr1 = &tab_int[0];

    printf("\ntableau int : \n");

    for(int i = 0 ; i < taille ; i ++){
        *ptr1 = rand() % 101;
        printf("tab_int[%i] : %i\n",i,*ptr1);
        ptr1++;
    }

    float *ptr2 = &tab_float[0];

    printf("\ntableau float : \n");

    for(int i = 0 ; i < taille ; i ++){
        *ptr2 = ((rand() % 1000) / 100.0);
        printf("tab_float[%i] : %.2f\n",i,*ptr2);
        ptr2++;
    }

    ptr1 = tab_int;

    printf("\ntableau modifié int : \n");

    for(int i = 0 ; i < taille ; i ++){
        if(i % 2 == 0){
            *ptr1 = *ptr1 * 3;
        }
        printf("tab_int[%i] : %i\n",i,*ptr1);
        ptr1++;
    }

    ptr2 = tab_float;

    printf("\ntableau modifié float : \n");

    for(int i = 0 ; i < taille ; i ++){
        if(i % 2 == 0){
            *ptr2 = *ptr2 * 3;
        }
        printf("tab_int[%i] : %f\n",i,*ptr2);
        ptr2++;
    }



}