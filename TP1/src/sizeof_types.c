/* Fichier: sizeof_types.c
* Objectif : afficher la taille en octets des différents types de base
* Auteurs: François-Régis Drutel et Paul Dumont
*/
#include <stdio.h> 

int main(void)
{
    // pour char 
    printf("sizeof(char): %lu\n", sizeof (char));
    printf("sizeof(signed char): %lu\n", sizeof (signed char));
    printf("sizeof(unsigned char): %lu\n", sizeof (unsigned char));

    // pour short 
    printf("sizeof(short): %lu\n", sizeof (short));
    printf("sizeof(signed short): %lu\n", sizeof (signed short));

    // pour int 
    printf("sizeof(int): %lu\n", sizeof (int));
    printf("sizeof(signed int): %lu\n", sizeof (signed int));

    // pour long int 
    printf("sizeof(long int): %lu\n", sizeof (long int));
    printf("sizeof(signed long int): %lu\n", sizeof (signed long int));

    // pour long long int 
    printf("sizeof(long long int): %lu\n", sizeof (long long int));
    printf("sizeof(float): %lu\n", sizeof (float));
    printf("sizeof(double): %lu\n", sizeof (double));
    printf("sizeof(long double): %lu\n", sizeof (long double));

}