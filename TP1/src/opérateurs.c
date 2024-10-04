/* Fichier: opérateurs.c
* Objectif : utiliser deux variables `a` et `b`, testez les différents opérateurs arithmétiques et logiques
* Auteurs: François-Régis Drutel et Paul Dumont
*/

#include <stdio.h> 

int main(void)
{

    int a = 16;
    int b = 3;


    // addition 
    printf("addition : %i \n", a + b);

    // soustraction 
    printf("soustraction : %i \n", a - b);

    // multiplication 
    printf("multiplication : %i \n", a * b);

    // division 
    printf("division : %f \n", (float) a / b);
    
    // modulo 
    printf("modulo : %i \n", a % b);

    // égaux ?
    printf("égaux ? : %i \n", a == b);

    // a > b ?
    printf("a > b ? : %i \n", a > b);

}