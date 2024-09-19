/* Fichier: bonjour.c
* Objectif : afficher Bonjour le Monde! à l'écran 
* Auteurs: François-Régis Drutel et Paul Dumont
*/

#include <stdio.h> 

int main(void)
{

    int num1 = 7;
    int num2 = 2;
    char op = '%';

    switch (op) {
        case '+' : printf("+ : %i \n", num1 + num2);   
            break;
        case '-' : printf("- : %i \n", num1 - num2);   
            break;
        case '*' : printf("* : %i \n", num1 * num2);   
            break;
        case '/' : printf("/ : %f \n", (float) num1 / num2);   
            break;
        case '%' : printf("%% : %i \n", num1 % num2);   
            break;
        case '&' : printf("& : %i \n", num1 & num2);   
            break;
        case '|' : printf("| : %i \n", num1 | num2);   
            break;
        case '~' : printf("~ : %i \n", ~num1);   
            break;
    }

}