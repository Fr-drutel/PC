/* Fichier: opérateurs.c
* Objectif : utiliser deux variables `a` et `b`
* Auteurs: François-Régis Drutel et Paul Dumont
*/

#include <stdio.h> 

int main(void)
{

    int a = 16;
    int b = 3;


    //1 
    printf("addition : %i \n", a + b);

    //2 
    printf("soustraction : %i \n", a - b);

    //3 
    printf("multiplication : %i \n", a * b);

    //4 
    printf("division : %f \n", (float) a / b);
    
    //5 
    printf("modulo : %i \n", a % b);

    //6
    printf("égaux ? : %i \n", a == b);

    //7
    printf("a > b ? : %i \n", a > b);

}