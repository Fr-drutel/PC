/* Fichier: binaire.c
* Objectif : afficher une variable de type `int` en format binaire 
* Auteurs: François-Régis Drutel et Paul Dumont
*/

#include <stdio.h> 

int main(void)
{    
    int nb_en_binaire[32];
    int index = 0;
    int nombre = 1024;

    if (nombre == 0){
        printf("En binaire : 0\n");
        return 0;
        }
    

    for(; nombre > 0; nombre /= 2){

        int reste = nombre % 2;       
                                
        if (reste == 1){
            nb_en_binaire[index] = 1;
            index++;
            nombre--;
        }
            
        else{
            nb_en_binaire[index] = 0;
            index++;
        }

    }

    printf("En binaire : ");
    for (int curseur = index - 1; curseur >= 0; curseur--) {
        printf("%i ", nb_en_binaire[curseur]);
    }
    
    printf("\n");

}