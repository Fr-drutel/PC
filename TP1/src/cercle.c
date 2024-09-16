/* Fichier: cercle.c
* Calcule à la fois l'aire et le périmètre d'un cercle
* Auteur: François-Régis Drutel et Paul Dumont
*/


#include <stdio.h> 
#include <math.h> 

int main(void) 
{
    float rayon = 4;
    float aire  = 3.14159 * rayon * rayon; 
    float peri = 2 * M_PI * rayon ;
    
    printf("aire : %f \n", aire);
    printf("peri : %f \n", peri);
}
