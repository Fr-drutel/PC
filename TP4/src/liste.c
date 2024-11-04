/* Fichier: liste.c
* Objectif : gérer une liste de couleurs RGB avec 'insertion', ajoutant une 
* couleur à la liste et 'parcours' pour afficher toutes les couleurs de la liste.
* Auteurs: François-Régis Drutel et Paul Dumont
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "liste.h"


void insertion(struct couleur *couleur, struct liste_couleurs *liste) {
    struct liste_couleurs *nouveau = malloc(sizeof(*nouveau));

    // Alloue et copie la structure couleur dans nouveau->couleur
    nouveau->couleur = malloc(sizeof(struct couleur));
    *(nouveau->couleur) = *couleur;

    // Insertion au début de la liste
    nouveau->suivant = liste->suivant;
    liste->suivant = nouveau;
}


void parcours(struct liste_couleurs *liste) {
    struct liste_couleurs *elem = liste->suivant;
    while (elem != NULL) {
        printf("RGBA(%02X, %02X, %02X, %02X)\n", elem->couleur->r, elem->couleur->g, elem->couleur->b, elem->couleur->a);
        elem  = elem->suivant;
    }
}
