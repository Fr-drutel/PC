/* Fichier: bonjour.c
* Objectif : afficher Bonjour le Monde! à l'écran 
* Auteurs: François-Régis Drutel et Paul Dumont
*/

#include <stdio.h> 

int main(void)
{
    int nombre = 7;
    
    
    // faire modulo puis division du chiffre -1 puis avec les reste 
    // des modulo on a le code binaire a l'enveres 
    for(;;){

    int reste = nombre % 2; 

    if (reste == 1){
        nombre--;
    }

    // stocker le reste

    nombre /= 2;

    }

}