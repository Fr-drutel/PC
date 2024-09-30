/* Fichier: tri.c
* Objectif : créer un tableau de 100 entiers, 
* puis trier ces entiers par ordre croissant.
* Auteurs: François-Régis Drutel et Paul Dumont
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
srand(time(0));
int tab_int[100];
int *ptr = &tab_int[0];

printf("tableau non trié :\n");
for(int i = 0; i <100;i++){
    *ptr = rand() % 100 + 1;
    printf("%i ",*ptr);
    ptr++;
}

    for(int i = 100; i > 1 ;i--){
        for (int j = 0; j < i - 1; j++)
        {
            if (tab_int[j+1] < tab_int[j]){
                int temp = tab_int[j];
                tab_int[j] = tab_int[j+1];
                tab_int[j+1] = temp;
            }
        } 
    }

    printf("\n\nTableau trié :\n");
    for(int i = 0; i < 100; i++){
        printf("%d ", tab_int[i]);
    }
    printf("\n");

}