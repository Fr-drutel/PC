/* Fichier: sizeof.c
* Objectif : déterminer la taille en octets de différents types de données.
* Auteurs: François-Régis Drutel et Paul Dumont
*/

#include <stdio.h> 

int main(void)
{
printf("La taille de int est : %lu octets\n", sizeof (int)); 
printf("La taille de int* est : %lu octets\n", sizeof (int*)); 
printf("La taille de int** est : %lu octets\n", sizeof (int**)); 

printf("La taille de char* est : %lu octets\n", sizeof (char*)); 
printf("La taille de char** est : %lu octets\n", sizeof (char**)); 
printf("La taille de char*** est : %lu octets\n", sizeof (char***)); 

printf("La taille de float* est : %lu octets\n", sizeof (float*)); 
printf("La taille de float** est : %lu octets\n", sizeof (float**)); 
printf("La taille de float*** est : %lu octets\n", sizeof (float***)); 
}