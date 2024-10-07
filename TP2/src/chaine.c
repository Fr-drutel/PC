/* Fichier: chaine.c
* Objectif : effectuer trois opérations de base sur des chaînes de caractères
* Auteurs: François-Régis Drutel et Paul Dumont
*/

#include <stdio.h>

int main(void) {

    // Q1
    char chaine_caracteres_1[] = "Hello";
    int i = 0;

    // Calculer la longueur de la première chaîne
    while (chaine_caracteres_1[i] != '\0') {
        i++;
    }
    printf("Nombre de caractères de la chaîne 1 : %i\n", i); 

    // Q2
    char chaine_caracteres_2[i + 1]; // +1 pour le caractère nul
    int i2 = 0;

    // Copier la première chaîne dans la deuxième
    while (chaine_caracteres_1[i2] != '\0') {
        chaine_caracteres_2[i2] = chaine_caracteres_1[i2];
        i2++;
    }
    chaine_caracteres_2[i2] = '\0'; 
    printf("Texte copié 'dans chaine_caracteres_2' : %s\n", chaine_caracteres_2); 

    // Q3
    char chaine_caracteres_4[] = "World!";
    int longueur_chaine_4 = 0;

    // Calculer la longueur de la chaîne 4
    while (chaine_caracteres_4[longueur_chaine_4] != '\0') {
        longueur_chaine_4++;
    }

    // mémoire pour la chaîne concaténée
    char chaine_caracteres_5[i + longueur_chaine_4 + 2]; // +2 pour le caractère espace et le caractère nul
    int i3 = 0;

    // Copier la première chaîne dans la chaîne 5
    while (chaine_caracteres_1[i3] != '\0') {
        chaine_caracteres_5[i3] = chaine_caracteres_1[i3];
        i3++;
    }

    //  espace avant la deuxième chaîne
    chaine_caracteres_5[i3++] = ' ';

    // Concaténation de la deuxième chaîne
    int i4 = 0;
    while (chaine_caracteres_4[i4] != '\0') {
        chaine_caracteres_5[i3] = chaine_caracteres_4[i4];
        i3++;
        i4++;
    }
    chaine_caracteres_5[i3] = '\0'; 

    printf("Chaîne concaténée : %s\n", chaine_caracteres_5); 

    return 0;
}
