/* Fichier: bits.c
* Objectif : vérifier si les 4ème et 20ème bits de gauche d'une variable entière 
`d` sont à 1 en représentation binaire
* Auteurs: François-Régis Drutel et Paul Dumont
*/

#include <stdio.h> 

int main(void)
{
int d = 18568;
int masque = 0b100000000000001000 ;  //masque 

// Calcul de l'opération bit à bit ET entre d et masque
int result = d & masque;

// Vérification si le résultat est égal à masque
if(result == masque) {
    // Si oui, affiche "1"
    printf("1\n");
} else {
    // Sinon, affiche "0"
    printf("0\n");
}

}