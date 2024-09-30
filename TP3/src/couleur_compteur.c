/* Fichier: couleur_compteur.c
* Objectif : stocker 100 couleurs dans un tableau et 
* afficher les couleurs distinctes avec leur nombre d'occurrences dans le tableau
* Auteurs: François-Régis Drutel et Paul Dumont
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
struct couleur{
    int rouge;
    int vert;
    int bleu;
    int alpha;
};

struct couleur couleurs[100];
Srand(time(0)); 

for(int i = 0; i<100; i++){
    couleurs[i].rouge = rand() % 256;
    couleurs[i].vert = rand() % 256;
    couleurs[i].bleu = rand() % 256;
    couleurs[i].alpha = rand() % 256;
}

// // Compter les couleurs distinctes
//     struct couleur couleurs_distinctes[TOTAL_COULEURS];
//     int occurrences[TOTAL_COULEURS] = {0}; // Compteur d'occurrences
//     int distinct_count = 0; // Compteur de couleurs distinctes

//     for (int i = 0; i < TOTAL_COULEURS; i++) {
//         struct couleur couleur_actuelle = couleurs[i];
        
//         // Vérifier si la couleur actuelle est déjà présente dans le tableau des couleurs distinctes
//         int deja_present = 0;
//         for (int j = 0; j < distinct_count; j++) {
//             if (couleurs_distinctes[j].rouge == couleur_actuelle.rouge &&
//                 couleurs_distinctes[j].vert == couleur_actuelle.vert &&
//                 couleurs_distinctes[j].bleu == couleur_actuelle.bleu) {
//                 occurrences[j]++; // Incrémenter le compteur pour cette couleur
//                 deja_present = 1;  // Indiquer que la couleur est déjà présente
//                 break; // Sortir de la boucle
//             }
//         }


}