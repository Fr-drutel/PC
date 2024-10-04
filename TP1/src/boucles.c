/* Fichier: boucles.c
* Objectif : utiliser des boucles `for` ou 'while' pour afficher un triangle rectangle
* Auteurs: François-Régis Drutel et Paul Dumont
*/

#include <stdio.h> 

int main(void)
{
int compteur = 5; 

// ----------------  code avec FOR 

for (int ligne = 0; ligne < compteur - 1; ligne++) { // Boucle externe pour les lignes
    for (int col = 0; col < compteur; col++) { // Boucle interne pour les colonnes
        if (ligne == col) { // Si nous sommes sur la diagonale principale
            printf("*\n"); // Affiche '*' suivi d'un saut de ligne
        } else if (col == 0) { // Si nous sommes sur la première colonne
            printf("*"); // Affiche '*'
        } else if (col < ligne) { // Si nous sommes avant la diagonale
            printf("#"); // Affiche '#'
        }
    }
}

for (int fin = 0; fin < compteur; fin++) { // Boucle pour afficher la ligne de '*'
    printf("*"); 
}
printf("\n"); 


// ----------------  code avec WHILE

int ligne = 0;     

while (ligne < compteur - 1) {  // Boucle pour chaque ligne du motif sauf la dernière
    int col = 0;                

    while (col < compteur) {    // Boucle pour chaque colonne du motif
        if (ligne == col) {     // Si la colonne est égale à la ligne
            printf("*\n");      // Affiche '*' avec un saut de ligne
        } else if (col == 0) {  // Sinon, si c'est la première colonne
            printf("*");        // Affiche '*'
        } else if (col < ligne) {  // Sinon, si la colonne est inférieure à la ligne
            printf("#");        // Affiche '#'
        }
        col++;                  
    }

    ligne++;  
}

for (int fin = 0; fin < compteur; fin++) {  
    printf("*");  
}
printf("\n");  

}