/* Fichier: factorielle.c
* Objectif : calculer la factorielle d'un entier naturel donné.
* Auteurs: François-Régis Drutel et Paul Dumont
*/

#include <stdio.h>

// Définition de la fonction factorielle
int factorielle(int num) {
  if (num == 0) {
    return 1;
  } else {
    int valeur = num * factorielle(num - 1);
    return (valeur);
  }
}

int main() {
  int n = 4;
  int result = factorielle(n);
  printf("La factorielle de %d est : %d\n", n, result);
  return 0;
}
