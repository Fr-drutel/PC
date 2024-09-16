/* Fichier: sizeof_types.c
* affiche la taille en octets des différents types de base
* auteur: François-Régis Drutel et Paul Dumont
*/
#include <stdio.h> 

int main(void)
{
    
    printf("sizeof(char): %lu\n", sizeof (char));
    printf("sizeof(short): %lu\n", sizeof (short));
    printf("sizeof(int): %lu\n", sizeof (int));
    printf("sizeof(long int): %lu\n", sizeof (long int));
    // pas compris pourquoi taille 8 et 8
    printf("sizeof(long long int): %lu\n", sizeof (long long int));
    printf("sizeof(float): %lu\n", sizeof (float));
    printf("sizeof(double): %lu\n", sizeof (double));
    printf("sizeof(long double): %lu\n", sizeof (long double));

}