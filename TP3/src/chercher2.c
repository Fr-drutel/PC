/* Fichier: chercher2.c
* Objectif : créer un tableau de 10 phrases (tableau de tableaux de caractères) 
* et qui recherche si une phrase donnée est présente dans le tableau.
* Auteurs: François-Régis Drutel et Paul Dumont
*/

#include <stdio.h>

int main() {

    // Initialisation de chaque phrase mot par mot tous dans un tableau différent
    char *phrase1[] = {"Bonjour,", "comment", "ça", "va", "?"};
    char *phrase2[] = {"Le", "temps", "est", "magnifique", "aujourd'hui."};
    char *phrase3[] = {"C'est", "une", "belle", "journée."};
    char *phrase4[] = {"La", "programmation", "en", "C", "est", "amusante."};
    char *phrase5[] = {"Les", "tableaux", "en", "C", "sont", "puissants."};
    char *phrase6[] = {"Les", "pointeurs", "en", "C", "peuvent", "être", "déroutants."};
    char *phrase7[] = {"Il", "fait", "beau", "dehors."};
    char *phrase8[] = {"La", "recherche", "dans", "un", "tableau", "est", "intéressante."};
    char *phrase9[] = {"Les", "structures", "de", "données", "sont", "importantes."};
    char *phrase10[] = {"Programmer", "en", "C,", "c'est", "génial."};

    // On range tout dan un tableau des phrases
    char **phrases[] = {phrase1, phrase2, phrase3, phrase4, phrase5, phrase6, phrase7, phrase8, phrase9, phrase10};
    // Initialisation contenant la longueur de chaque phrase pour comparer ensuite
    int longueurs[] = {5, 5, 4, 6, 6, 7, 4, 7, 6, 5};

    
    char *ph_recherchee[] = {"La", "programmation", "en", "C", "est", "géniale."};
    int longueur_recherchee = 6;
    int trouvee = 0;

    // Parcours des phrases dans le tableau principal
    for (int i = 0; i < 10 && !trouvee; i++) {
        // Vérifie si la longueur de la phrase courante correspond à celle de la phrase recherchée
        if (longueurs[i] == longueur_recherchee) {
            int ph_identique = 1;

        // Comparaison des mots de la phrase courante avec ceux de la phrase recherchée
            for (int j = 0; j < longueur_recherchee; j++) {
                int k = 0;

                // Comparaison caractère par caractère entre mots
                while (phrases[i][j][k] == ph_recherchee[j][k] && phrases[i][j][k] != '\0' && ph_recherchee[j][k] != '\0') {
                    k++;
                }

                // Si un mot est différent, on met ph_identique à 0
                if (phrases[i][j][k] != '\0' || ph_recherchee[j][k] != '\0') {
                    ph_identique = 0;
                    break;
                }
            }

            // Si tous les mots correspondent => ph_identique est à 1 => on a trouvé la phrase
            if (ph_identique) {
                trouvee = 1;
            }
        }
    }

    // Affichage
    if (trouvee) {
        printf("Phrase trouvée\n");
    } else {
        printf("Phrase non trouvée\n");
    }

}