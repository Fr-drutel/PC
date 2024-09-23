
/* Fichier: bonjour.c
* Objectif : afficher Bonjour le Monde! à l'écran 
* Auteurs: François-Régis Drutel et Paul Dumont
*/

#include <stdio.h> 

int main(void)
{ 

    int n = 5;

    for(int i = 0 ;i < 5;i++){
        for(int j = 0;j < (n -i -1);j++){
           printf(" ");
        }

        for(int j = 0;j < (i + 1);j++){
           printf("%i",j + 1);
        }

        for(int j = i;j > 0;j--){
           printf("%i",j);
        }

        for(int j = 0;j < (n -i -1);j++){
           printf(" ");
        }   

        printf("\n");
    } 
}