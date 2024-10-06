/* Fichier: couleur_compteur.c
* Objectif : stocker 100 couleurs dans un tableau et 
* afficher les couleurs distinctes avec leur nombre d'occurrences dans le tableau
* Auteurs: François-Régis Drutel et Paul Dumont
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    // Définition la struct couleur pour représenter les couleurs avec leurs composantes RGBA
    struct couleur {
        int rouge;
        int vert;
        int bleu;
        int alpha;
    };

    // Initialisations
    struct couleur couleurs[100];
    struct couleur couleurs_distinctes[100];
    int occurrences[100] = {0}; 
    int nb_distinct = 0; 
    srand(time(0));

    // On initiale avec rand() %2 et pas rand() %256 car sinon toutes les couleurs sont uniques
    for (int i = 0; i < 100; i++) {
        couleurs[i].rouge = rand() %2;
        couleurs[i].vert = rand() % 2;
        couleurs[i].bleu = rand() % 2;
        couleurs[i].alpha = rand() % 2;
    }

    // Boucle pour identifier les couleurs distinctes et compter leurs occurrences
    for (int i = 0; i < 100; i++) {
        int deja_present = 0;
        for (int j = 0; j < nb_distinct; j++) { 
            // Vérification si la couleur actuelle existe déjà dans les couleurs distinctes
            if (couleurs_distinctes[j].rouge == couleurs[i].rouge &&
                couleurs_distinctes[j].vert == couleurs[i].vert &&
                couleurs_distinctes[j].bleu == couleurs[i].bleu &&
                couleurs_distinctes[j].alpha == couleurs[i].alpha) {
                    occurrences[j]++; // si couleur déjà présente on ajoute une occurrence
                    deja_present = 1;  
                    break; //et on sort de la boucle
            }
        }

        // Sinon, on l'ajoute aux couleurs distinctes
        if (!deja_present) {
            couleurs_distinctes[nb_distinct] = couleurs[i]; 
            occurrences[nb_distinct] = 1; 
            nb_distinct++; 
        }
    }

    // Affichage 
    for (int i = 0; i < nb_distinct; i++) {
        printf("Couleur: ff 0x%02x 0x%02x 0x%02x 0x%02x : %d\n",
               couleurs_distinctes[i].rouge,
               couleurs_distinctes[i].vert,
               couleurs_distinctes[i].bleu,
               couleurs_distinctes[i].alpha,
               occurrences[i]);
    }
}
