/* Fichier: bonjour.c
* Objectif : afficher Bonjour le Monde! à l'écran 
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