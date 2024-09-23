/* Fichier: bits.c
* Objectif : vérifier si les 4ème et 20ème bits de gauche d'une variable entière 
`d` sont à 1 en représentation binaire
* Auteurs: François-Régis Drutel et Paul Dumont
*/

#include <stdio.h> 

int main(void)
{
int d = 1048568;
int masque = 524296;  

int result = d & masque;
if(result == masque){
    printf("1\n");
}
else{
    printf("0\n");
}
}