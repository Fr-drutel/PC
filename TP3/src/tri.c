/* Fichier: tri.c
* Objectif : créer un tableau de 100 entiers, 
* puis trier ces entiers par ordre croissant.
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

printf("tableau non trié :\n");
for(int i = 0; i <101;i++){
    *ptr = rand() % 100 + 1;
    printf("%i ",*ptr);
    ptr++;
}

int min = 101;
printf("tableau trié par ordre croissant :\n");
    for (int i = 1; i < 100; i++) {
        int key = tab_int[i];
        int j = i - 1;

        while (j >= 0 && tab_int[j] > key) {
            tab_int[j + 1] = tab_int[j];
            j--;
        }
        tab_int[j + 1] = key;
    }

printf("\n\nTableau trié par ordre croissant :\n");
for (int i = 0; i < 100; i++) {
    printf("%i ", tab_int[i]);
}
}