
/* Fichier: pyramide.c
* Objectif : afficher une pyramide de nombres 
* Auteurs: François-Régis Drutel et Paul Dumont
*/

#include <stdio.h> 

int main(void)
{
   int n = 5;  //  taille du motif  
   for (int i = 0; i < n; i++) {  // Boucle pour chaque ligne du motif
      for (int j = 0; j < (n - i - 1); j++) {  // Boucle pour imprimer les espaces avant les chiffres
         printf(" ");
      }
      for (int j = 0; j < (i + 1); j++) {  // Boucle pour les chiffres croissants
         printf("%i", j + 1);
      }
      for (int j = i; j > 0; j--) {  // Boucle pour les chiffres décroissants
         printf("%i", j);
      }
      for (int j = 0; j < (n - i - 1); j++) {  // Boucle pour les espaces après les chiffres
         printf(" ");
      }
      printf("\n");  
   }
   printf("\n génération terminée \n");
}