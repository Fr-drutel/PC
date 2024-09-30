#include <stdio.h>
#include <stdlib.h>

int main()
{
    int taille;

    printf("la taille de tableau: ");
    scanf("%d", &taille);
    
    long int *itableau = calloc(taille, sizeof(long int));
    float *ftableau = calloc(taille, sizeof(float));

    for(int i = 0; i < taille; i++) {
        itableau[i] = 1;
    }

    for(int i = 0; i < taille; i++) {
        ftableau[i] = i * 3.14;
    }

    for(int i = 0; i < taille; i++) {
        printf("itableau[%i], %ld\n", i, itableau[i]);
    }

    for(int i = 0; i < taille; i++) {
        printf("ftableau[%i], %f\n", i, ftableau[i]);
    }

    free(itableau);
    free(ftableau);

    return(0);

}