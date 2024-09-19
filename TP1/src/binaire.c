/* Fichier: binaire.c
* Objectif : afficher une variable de type `int` en format binaire 
* Auteurs: François-Régis Drutel et Paul Dumont
*/

#include <stdio.h> 

int main(void)
{    
    int nb_en_binaire[10];
    

    for(int nombre = 6; nombre > 3;){

        int reste = nombre % 2; 
        
        for(int curseur = 0; curseur < 10; curseur++)
                                
            if (reste == 1){
                nb_en_binaire[curseur] = 1;
                nombre--;
        }
            
            else{
                nb_en_binaire[curseur] = 0;
        }

        nombre /= 2;

    }


    

    printf("Les éléments du tableau sont : ");
    for (int curseur = 0; curseur < 10; curseur++) {
        printf("%i ", nb_en_binaire[curseur]);
    }
    
    printf("\n");

}