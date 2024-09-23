/* Fichier: puissance.c
* Objectif : afficher la valeur de *a* élevé à la puissance *b*
* Auteurs: François-Régis Drutel et Paul Dumont
*/

#include <stdio.h> 

int main(void)
{
    int a = 10;
    int b = 5;


    int result = a;
    while(b > 1){
        result = result * a;
        b--;
    }
    printf("%i\n", result);
}