/* Fichier: conditions.c
* Objectif : Parcourir les nombres de 1 à 1000 et calculer la somme des nombres
* divisibles par 5 ou 7, en excluant ceux divisibles par 11. On arrête le
* calcul si la somme dépasse 5000.
* Auteurs: François-Régis Drutel et Paul Dumont
*/

#include <stdio.h> 

int main(void) {
    int somme = 0;  
    for(int i = 1 ; i < 1001 ; i++){  
        if (i % 11 == 0){  // Si i est divisible par 11, sauter à l'itération suivante
            continue;
        }
        if (i % 5 == 0 || i % 7 == 0){  // Si i est divisible par 5 ou 7, ajouter i à la somme
            somme += i;
        }
        if (somme >= 5000){  // Si la somme dépasse ou atteint 5000, sortir de la boucle
            break;
        }
    }
    printf("%i \n", somme);  
}
