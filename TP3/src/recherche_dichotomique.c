/* Fichier: recherche_dichotomique.c
 * Objectif : créer un tableau de 100 entiers triés par ordre croissant puis 
 * utiliser l'algorithme de recherche dichotomique 
 * pour rechercher un entier spécifique dans ce tableau.
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

    for(int i = 0; i < 100; i++){
        *ptr = rand() % 201 - 100; // random entier entre -100 et 100
        ptr++;
    }

    // Tri à bulles pour trier le tableau
    for(int i = 100; i > 1; i--){
        for (int j = 0; j < i - 1; j++){
            if (tab_int[j+1] < tab_int[j]){ 
                // Échange si l'élément actuel est plus grand que le suivant
                int temp = tab_int[j];
                tab_int[j] = tab_int[j+1];
                tab_int[j+1] = temp;
            }
        }
    }

    printf("\n\nTableau trié par ordre croissant :\n");
    for (int i = 0; i < 100; i++){
        printf("%i ", tab_int[i]);
    }

    int num_user;
    printf("\n\nUn entier ? \n");
    scanf("%i", &num_user); // Demande à l'utilisateur un entier

    // Initialisations
    int taille_tableau = sizeof(tab_int) / sizeof(tab_int[0]);
    int debut = 0;
    int fin = taille_tableau - 1;
    int present = 0;

    while (debut <= fin){
        int milieu = debut + (fin - debut) / 2; // Calcul de l'indice du milieu

        if (num_user == tab_int[milieu]){
            printf("Entier présent\n");
            present = 1;
            break; // break si l'entier saisi correspond au nombre au milieu dans le tableau
        } 
        else{
            if (num_user > tab_int[milieu]){ // Recherche dans la moitié supérieure
                debut = milieu + 1; 
            } 
            else{ // Recherche dans la moitié inférieure
                fin = milieu - 1; 
            }
        }
    }

    if (present == 0) {
        printf("Entier pas présent\n");
    }
}
