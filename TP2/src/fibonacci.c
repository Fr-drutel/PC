/* Fichier: bonjour.c
* Objectif : afficher Bonjour le Monde! à l'écran 
* Auteurs: François-Régis Drutel et Paul Dumont
*/

#include <stdio.h> 

int main(void)
{
    int n = 7; 

    int tab[n];
    tab[0] = 0;
    tab[1] = 1;

    for(int i=2;i < n;i++){
        tab[i] = tab[i-1] + tab[i-2];
    }

    for(int i=0;i < n;i++){
        printf("%i\n",tab[i]);
    }


}
