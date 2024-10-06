/* Fichier: sizeof.c
* Objectif : déterminer la taille en octets de différents types de données.
* Auteurs: François-Régis Drutel et Paul Dumont
*/

#include <stdio.h> 

int main(void)
{
    // Affiche la taille d'un int
    printf("La taille de int est : %lu octets\n", sizeof (int)); 
    // Affiche la taille d'un pointeur vers un int
    printf("La taille de int* est : %lu octets\n", sizeof (int*)); 
    // Affiche la taille d'un pointeur vers un pointeur vers un int
    printf("La taille de int** est : %lu octets\n", sizeof (int**)); 

    printf("La taille de char* est : %lu octets\n", sizeof (char*)); 
    printf("La taille de char** est : %lu octets\n", sizeof (char**)); 
    // Affiche la taille d'un pointeur vers un pointeur vers un pointeur vers un char
    printf("La taille de char*** est : %lu octets\n", sizeof (char***)); 

    printf("La taille de float* est : %lu octets\n", sizeof (float*)); 
    printf("La taille de float** est : %lu octets\n", sizeof (float**)); 
    printf("La taille de float*** est : %lu octets\n", sizeof (float***)); 
}