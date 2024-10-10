#include <stdio.h> 
#include "fichier.h"
#include "operator.h"
#include <string.h>



int main(void)
{
    int ex = '3';
    switch(ex){
        case '1':

            int num1, num2;
            char op;

            printf("Entrez un entier pour num1 : ");
            scanf("%d", &num1);

            printf("Entrez un entier pour num2 : ");
            scanf("%d", &num2);

            printf("Entrez une opération (par exemple +, -, *, /, %%, &, |, ~) : ");
            scanf(" %c", &op);

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
            break;


        case '2':   

            char* nom_de_fichier = "text2.txt";

            char message[] = "message pour fr";
            ecrire_dans_fichier(nom_de_fichier, message);

            char message2[] = "message pour paul";
            ecrire_dans_fichier(nom_de_fichier, message2);

            lire_fichier(nom_de_fichier);
            break;
    }
}