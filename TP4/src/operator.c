/* Fichier: operator.c
* Objectif : effectuer diverses opérations mathématiques et logiques 
* en utilisant un programme structuré en fichiers d'en-tête et de code source distincts
* Auteurs: François-Régis Drutel et Paul Dumont
*/

#include <stdio.h> 

int somme(int num1, int num2) {
    return num1 + num2;
}

int difference(int num1, int num2) {
    return num1 - num2;
}

int produit(int num1, int num2) {
    return num1 * num2;
}

int divise(int num1, int num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        printf("Erreur !! division par zéro.\n");
        return 0;
    }
}

int modulo(int num1, int num2) {
    if (num2 != 0) {
        return num1 % num2; // Retourne le reste si le diviseur est non nul
    } else {
        printf("Erreur !! modulo par zéro.\n");
        return 0;
    }
}

int et(int num1, int num2) {
    return num1 & num2;
}

int ou(int num1, int num2) {
    return num1 | num2;
}

int negation(int num1) {
    return -num1;
}




