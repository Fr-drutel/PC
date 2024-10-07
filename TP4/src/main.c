#include <stdio.h> 
#include "operator.h"

int main(void)
{
    int num1 = 7;
    int num2 = 2;
    char op = '~';
    int result = -1;

    switch (op){
        case '+' : 
            result = somme(num1, num2);
            break;
        case '-' : 
            result = difference(num1, num2);
            break;
        case '*' : 
            result = produit(num1, num2);
            break;
        case '/' : 
            result = divise(num1, num2);
            break;
        case '%' : 
            result = modulo(num1, num2);
            break;
        case '&' : 
            result = et(num1, num2);
            break;
        case '|' : 
            result = ou(num1, num2);
            break;
        case '~' : 
            result = negation(num1);
            break;
    }

    printf("resultat %c : %i \n", op, result);
}
