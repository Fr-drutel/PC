/* Fichier: puissance.c
* Objectif : afficher la valeur de *a* élevé à la puissance *b*
* Auteurs: François-Régis Drutel et Paul Dumont
*/

#include <stdio.h> 

int main(void)
{
    int a = 2;
    int b = 3;
    int result = a;

    // Boucle while qui multiplie 'result' par 'a' jusqu'à ce que 'b' soit plus grand que 1
    while (b > 1) {
        result = result * a;  
        b--;  
    }

    // Affiche la valeur finale 
    printf("%i\n", result);

}