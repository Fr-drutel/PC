/* Fichier: couleurs.c
* Objectif : représenter des couleurs au format RGBA (rouge, vert, bleu, alpha)
* Auteurs: François-Régis Drutel et Paul Dumont
*/

#include <stdio.h>

int main(void) {
    struct couleur {  // Définition  structure  "couleur"
        int rouge;    
        int vert;  
        int bleu;     
        int alpha;    
    };

    struct couleur couleur[10] = {  // Tableau de 10 structures
        {0xef, 0x78, 0x12, 0xff},  
        {0x2c, 0xc8, 0x64, 0xff},   
        {0xff, 0x00, 0x00, 0xff},  
        {0x00, 0xff, 0x00, 0xff},  
        {0x00, 0x00, 0xff, 0xff},   
        {0xff, 0xff, 0x00, 0xff},   
        {0x00, 0xff, 0xff, 0xff},   
        {0xff, 0x00, 0xff, 0xff},   
        {0x80, 0x80, 0x80, 0xff},   
        {0x00, 0x00, 0x00, 0xff}    
    };

    for(int i = 0; i < 10; i++) {
        printf("couleur %i\n", i);         // indice de la couleur
        printf("Rouge : %i\n", couleur[i].rouge);  // Affiche  rouge
        printf("Vert : %i\n", couleur[i].vert);    // Affiche  verte
        printf("Bleu : %i\n", couleur[i].bleu);    // Affiche  bleue
        printf("Alpha %i\n", couleur[i].alpha);    // Affiche  alpha
        printf("\n");  
    }
}
