/* Fichier: Fibonacci.c
* Objectif : générer et afficher les n termes de la suite de Fibonacci
* Auteurs: François-Régis Drutel et Paul Dumont
*/

#include <stdio.h> 

int main(void)
{
    int n = 7; 

int tab[n];       
tab[0] = 0;            
tab[1] = 1;         

for(int i = 2; i < n; i++) {
    tab[i] = tab[i-1] + tab[i-2];  // Remplit le tableau avec la suite de Fibonacci
}

for(int i = 0; i < n; i++) {
    printf("%i\n", tab[i]);  // Affiche chaque élément du tableau
}



}
