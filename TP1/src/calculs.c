/* Fichier: calculs.c
* Objectif : Utilisez `switch` pour déterminer l'opération à effectuer en fonction de la valeur de `op`
* Auteurs: François-Régis Drutel et Paul Dumont
*/

#include <stdio.h> 

int main(void)
{

    int num1 = 7;
    int num2 = 2;
    char op = '%';

switch (op) {
    case '+' : // Addition 
        printf("+ : %i \n", num1 + num2);
        break;
    case '-' : // Subtraction 
        printf("- : %i \n", num1 - num2);
        break;
    case '*' : // Multiplication 
        printf("* : %i \n", num1 * num2);
        break;
    case '/' : // Division 
        printf("/ : %f \n", (float) num1 / num2);
        break;
    case '%' : // Modulus 
        printf("%% : %i \n", num1 % num2);
        break;
    case '&' : //  AND 
        printf("& : %i \n", num1 & num2);
        break;
    case '|' : //  OR 
        printf("| : %i \n", num1 | num2);
        break;
    case '~' : //  NOT 
        printf("~ : %i \n", ~num1);
        break;
}

}