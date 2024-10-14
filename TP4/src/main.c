#include <stdio.h> 
#include "fichier.h"
#include "operator.h"
#include <string.h>



int main(void)
{
    int ex = '2';
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

            int action = 0;
            char nom_fichier[] = "text2.txt";
            char message[] = "message pour ";

            ecrire_dans_fichier(nom_fichier, message);
            lire_fichier(nom_fichier);

            // printf("Que souhaitez-vous faire ?\n");
            // printf("1. Lire un fichier\n");
            // printf("2. Écrire dans un fichier\n");
            // printf("Votre choix :");
            // scanf("%i", &action);

            // if(action == 1){
            //     printf("Entrez le nom du fichier à lire :");
            //     scanf("%s", nom_fichier);
            //     printf("Contenu du fichier fichier.txt : \n ");
            //     lire_fichier(nom_fichier);
            // }


            // if(action == 2){
            //     printf("Entrez le nom du fichier dans lequel vous souhaitez écrire :");
            //     scanf("%s", nom_fichier);
            //     printf("Entrez le message à écrire :");
            //     scanf("%s", message);
            //     ecrire_dans_fichier(nom_fichier, message);
            //     printf("Le message a été écrit dans le fichier %s.txt.", nom_fichier);
            // }


            break;

        case '3':   
            break;
    }
}