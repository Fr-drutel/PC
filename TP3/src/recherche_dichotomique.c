/* Fichier: recherche_dichotomique.c
 * Objectif : créer un tableau de 100 entiers triés par ordre croissant puis 
 * utiliser l'algorithme de recherche dichotomique 
 * pour rechercher un entier spécifique dans ce tableau.
 * Auteurs: François-Régis Drutel et Paul Dumont
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
srand(time(0));
int tab_int[100];
int *ptr = &tab_int[0];


for (int i = 0; i < 100; i++) {
    *ptr = rand() % 100 + 1;
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


printf("\n\nTableau trié par ordre croissant :\n");
for (int i = 0; i < 100; i++) {
    printf("%i ", tab_int[i]);
}


int num_user;
printf("\n\nUn entier ? \n");
scanf("%i", &num_user);


int taille_tableau = sizeof(tab_int) / sizeof(tab_int[0]);
int debut = 0;
int fin = taille_tableau - 1;
int present = 0;


while (debut <= fin) {
    int milieu = debut + (fin - debut) / 2;

    if (num_user == tab_int[milieu]) {
        printf("Entier présent\n");
        present = 1;
        break; 
    } else {
        if (num_user > tab_int[milieu]) {
            debut = milieu + 1; 
        } else {
            fin = milieu - 1; 
        }
    }
}

if (present == 0) {
    printf("Entier pas présent\n");
}

return 0;
}
