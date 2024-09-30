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
srand(time(0));
int tab_int[100];
int *ptr = &tab_int[0];

printf("tableau :\n");
for(int i = 0; i <100;i++){
    *ptr = rand() % 100 + 1;
    printf("%i ",*ptr);
    ptr++;
}
ptr = tab_int;

int num_user;
printf("\nun entier ? \n");
scanf("%i",&num_user);

int present = 0;
for(int i = 0; i <100;i++){
    if(num_user == *ptr){
        printf("l'entier %i est présent \n",num_user);
        present = 1;
        break;
    }
    ptr++;
}

if(present == 0){
    printf("l'entier %i n'est pas présent \n",num_user);
}

}