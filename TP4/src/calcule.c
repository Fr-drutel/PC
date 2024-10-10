/* Fichier: calcule.c
* Objectif : créer une calculatrice en ligne de commande permettant 
* à l'utilisateur d'exécuter des opérations arithmétiques et logiques 
* entre deux nombres à l'aide de divers opérateurs.
* Auteurs: François-Régis Drutel et Paul Dumont
*/

#include <stdio.h>
#include <stdlib.h> 
#include "operator.h" 

int main(int argc, char *argv[]) {

    if (argc != 4) {
        printf("Usage: %s <opérateur> <nombre1> <nombre2>\n", argv[0]);
        return 1;
    }

    char operator = argv[1][0]; // Prend le premier caractère de argv[1]
    int num1 = atoi(argv[2]);    // Convertit argv[2] en entier
    int num2 = atoi(argv[3]);    // Convertit argv[3] en entier
    int result;

    // Utilise un switch pour choisir l'opération
    switch (operator) {
        case '+':
            result = somme(num1, num2); // Remplace par la fonction appropriée de operator.c
            break;
        case '-':
            result = difference(num1, num2);
            break;
        case '*':
            result = produit(num1, num2);
            break;
        case '/':
            if (num2 != 0) {
                result = divise(num1, num2);
            } else {
                printf("Erreur : Division par zéro.\n");
                return 1;
            }
            break;
        case '%':
            result = modulo(num1, num2);
            break;
        case '&':
            result = et(num1, num2);
            break;
        case '|':
            result = ou(num1, num2);
            break;
        case '~':
            result = negation(num1);
            break;
        default:
            printf("Erreur : Opérateur non reconnu.\n");
            return 1;
    }

    printf("Résultat : %d\n", result);
    return 0;
}