/* Fichier: main.c
* Objectif : Fichier principal servant aux exos 1, 2 et 7
* Auteurs: François-Régis Drutel et Paul Dumont
*/

#include <stdio.h> 
#include "fichier.h"
#include "operator.h"
#include "liste.h"
#include <string.h>
#include <stdlib.h>

int main(void)
{
    int ex = '7';
    switch(ex){
        case '1':

            int num1, num2;
            char op;

            printf("Entrez un entier pour num1 : ");
            scanf("%d", &num1);

            printf("Entrez un entier pour num2 : ");
            scanf("%d", &num2);

            printf("Entrez une opération (par exemple +, -, *, /, %%, &, |, ~) : ");
            scanf(" %c", &op);

            int result = -1; // Initialisation du résultat avec une valeur par défaut : -1

            switch (op){
                case '+' : 
                    result = somme(num1, num2);
                    break;
                case '-' : 
                    result = difference(num1, num2);
                    break;
                case '*' : 
                    result = produit(num1, num2);
                    break;
                case '/' : 
                    result = divise(num1, num2);
                    break;
                case '%' : 
                    result = modulo(num1, num2);
                    break;
                case '&' : 
                    result = et(num1, num2);
                    break;
                case '|' : 
                    result = ou(num1, num2);
                    break;
                case '~' : 
                    result = negation(num1);
                    break;
            }

            printf("resultat %c : %i \n", op, result);
            break;


        case '2':  
            
            int action = 0;
            char nom_fichier[200];
            char message[300];

            printf("Que souhaitez-vous faire ?\n");
            printf("1. Lire un fichier\n");
            printf("2. Écrire dans un fichier\n");
            printf("Votre choix :");
            scanf("%i", &action); // Demande à l'utilisateur de choisir une action

            switch(action){
                case 1: 

                    printf("Entrez le nom du fichier à lire :");
                    scanf("%s", nom_fichier);
                    printf("Contenu du fichier %s : \n", nom_fichier);
                    lire_fichier(nom_fichier);
                    break;


                case 2:

                    printf("Entrez le nom du fichier dans lequel vous souhaitez écrire :");
                    scanf("%s", nom_fichier);
                    getchar(); // Nettoie le tampon pour éviter des erreurs avec fgets

                    printf("Entrez le message à écrire :");
                    fgets(message, sizeof(message), stdin);
                    
                    ecrire_dans_fichier(nom_fichier, message);
                    printf("Le message a été écrit dans le fichier %s\n", nom_fichier);
                    break;
            }


            break;

        case '7':   

            struct liste_couleurs ma_liste = {NULL, NULL};

            struct couleur couleur1 = {0xFF, 0x00, 0x00, 0xFF}; // Rouge
            struct couleur couleur2 = {0x00, 0xFF, 0x00, 0xFF}; // Vert
            struct couleur couleur3 = {0x00, 0x00, 0xFF, 0xFF}; // Bleu
            struct couleur couleur4 = {0xFF, 0xFF, 0x00, 0xFF}; // Jaune
            struct couleur couleur5 = {0xFF, 0xA5, 0x00, 0xFF}; // Orange
            struct couleur couleur6 = {0x80, 0x00, 0x80, 0xFF}; // Violet
            struct couleur couleur7 = {0x00, 0xFF, 0xFF , 0xFF}; // Cyan
            struct couleur couleur8 = {0xFF, 0x00, 0xFF, 0xFF}; // Magenta
            struct couleur couleur9 = {0xA5, 0x2A, 0x2A, 0xFF}; // Marron
            struct couleur couleur10 = {0x80, 0x80, 0x80, 0xFF}; // Gris
            
            // Insertion de chaque couleur en utilisant la fonction implémentée dans liste.c
            insertion(&couleur1, &ma_liste);
            insertion(&couleur2, &ma_liste);
            insertion(&couleur3, &ma_liste);
            insertion(&couleur4, &ma_liste);
            insertion(&couleur5, &ma_liste);
            insertion(&couleur6, &ma_liste);
            insertion(&couleur7, &ma_liste);
            insertion(&couleur8, &ma_liste);
            insertion(&couleur9, &ma_liste);
            insertion(&couleur10, &ma_liste);

            // Affiche les couleurs en utilisant la fonction implémentée dans liste.c
            printf("Liste des couleurs :\n");
            parcours(&ma_liste);

            break;
    }
}