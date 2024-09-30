/* Fichier: grand_petit.c
* Objectif : créer un tableau de 100 entiers et calculer à la fois le 
* numéro le plus grand et le numéro le plus petit dans ce tableau.
* Auteurs: François-Régis Drutel et Paul Dumont
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
srand(time(0));
int tab_int[100];
int *ptr = &tab_int[0];

for(int i = 0; i <100;i++){
    *ptr = rand() % 1000 + 1;
    printf("%i ",*ptr);
    ptr++;
}

int max = 0;
int min = 1000;

ptr = tab_int;

for(int i = 0; i <100;i++){
    if(*ptr > max){
        max = *ptr;
    }

    if(*ptr < min){
        min = *ptr;        
    }   
    ptr++;
}
printf("\nLe numéro le plus grand est : %i ",max);
printf("\nLe numéro le plus petit est : %i \n",min);
}