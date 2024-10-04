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

    // Vérifie si le nombre est égal à zéro et affiche directement "En binaire : 0" s'il l'est
    if (nombre == 0) {
        printf("En binaire : 0\n");
        return 0;
    }

    // Convertit le nombre en binaire en utilisant la méthode de division par 2
    for (; nombre > 0; nombre /= 2) {
        int reste = nombre % 2;
        
        // Si le reste de la division par 2 est 1, ajoute 1 à nb_en_binaire et décrémente nombre
        if (reste == 1) {
            nb_en_binaire[index] = 1;
            index++;
            nombre--;  // Décrémente nombre pour s'assurer que chaque bit est traité correctement
        } else {
            // Sinon, ajoute 0 à nb_en_binaire
            nb_en_binaire[index] = 0;
            index++;
        }
    }

    // Affiche le résultat binaire stocké dans nb_en_binaire en ordre inverse
    printf("En binaire : ");
    for (int curseur = index - 1; curseur >= 0; curseur--) {
        printf("%i ", nb_en_binaire[curseur]);
    }
    printf("\n");

}
