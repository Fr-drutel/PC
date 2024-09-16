/* Fichier: sizeof_types.c
* affiche la taille en octets des différents types de base
* auteur: François-Régis Drutel et Paul Dumont
*/
#include <stdio.h> 

int main(void)
{
    
    printf("sizeof(char): %lu\n", sizeof (char));
    printf("sizeof(signed char): %lu\n", sizeof (signed char));
    printf("sizeof(unsigned char): %lu\n", sizeof (unsigned char));

    printf("sizeof(short): %lu\n", sizeof (short));
    printf("sizeof(signed short): %lu\n", sizeof (signed short));

    printf("sizeof(int): %lu\n", sizeof (int));
    printf("sizeof(signed int): %lu\n", sizeof (signed int));

    printf("sizeof(long int): %lu\n", sizeof (long int));
    printf("sizeof(signed long int): %lu\n", sizeof (signed long int));

    printf("sizeof(long long int): %lu\n", sizeof (long long int));
    printf("sizeof(float): %lu\n", sizeof (float));
    printf("sizeof(double): %lu\n", sizeof (double));
    printf("sizeof(long double): %lu\n", sizeof (long double));

}