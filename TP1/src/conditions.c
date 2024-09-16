/* Fichier: bonjour.c
* Objectif : ...
* Auteurs: François-Régis Drutel et Paul Dumont
*/

#include <stdio.h> 

int main(void)
{
    int somme = 0;
    for(int i = 1 ; i < 1001 ; i++){

        if (i % 11 == 0){
            continue;
        }

        if (i % 5 == 0 || i % 7 == 0){
            somme += i;
        }

        if (somme >= 5000){
            break;
        }

    }
    printf("%i \n",somme);
}