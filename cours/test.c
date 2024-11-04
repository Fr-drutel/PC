#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct element {
    unsigned int numero;
    struct element *suivant;
};

// Prototypes des fonctions
void insertion(struct element *premier, int numero);
void parcours(struct element *premier);

int main() {
    struct element premier;
    premier.suivant = NULL;

    while (1) {
        int numero;
        char strnum[50];

        printf("Entrez un nombre (ou 'FIN' pour terminer) : ");
        fgets(strnum, sizeof(strnum), stdin);

        if (strcmp(strnum, "FIN\n") == 0) {
            break;
        }

        if (sscanf(strnum, "%d", &numero) == 1) {
            insertion(&premier, numero);
        } else {
            printf("Entrée invalide, veuillez entrer un nombre.\n");
        }
    }

    printf("Liste des éléments :\n");
    parcours(&premier);

    return 0;
}

void insertion(struct element *premier, int numero) {
    struct element *nouveau malloc(sizeof(*nouveau));
    nouveau->numero = numero;
    nouveau->suivant = premier->suivant;
    premier->suivant = nouveau;
}

void parcours(struct element *premier) {
    struct element *elem = premier->suivant; // Commence à partir du premier élément réel
    while (elem != NULL) {
        printf("%d\n", elem->numero);
        elem = elem->suivant;
    }
}
