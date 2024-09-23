/* Fichier: chaine.c
* Objectif : effectuer trois opérations de base sur des chaînes de caractères
* Auteurs: François-Régis Drutel et Paul Dumont
*/

#include <stdio.h> 

int main(void)
{



    // Q1 
    char chaine_caractères_1[] = "Hello";

    char c = ' ';
    int i = 0;
    for(;c != '\0';){
        c = chaine_caractères_1[i];
        i++;
    }
    printf("Nombre de caractères de la chaine 1 : %i\n",i-1);

    // Q2
    char chaine_caractères_2[] = "";
    
    printf("text copier 'dans chaine_caractères_3' : ");
    int i2 = 0;
    char c2 = ' ';
    for(;c2 != '\0';){
        c2 = chaine_caractères_1[i2];
        chaine_caractères_2[i2] = c2;
        i2++;
        printf("%c",chaine_caractères_2[i2]);
    }
    printf("\n");

    // Q3
    char chaine_caractères_3[] = "Hello";
    char chaine_caractères_4[] = "World!";
    char chaine_caractères_5[] = "";
    
    int longueur_chaine_1 = i-1;

    char c3 = ' ';
    int i3 = 0;
    for(;c3 != '\0';){
        c3 = chaine_caractères_3[i3];
        chaine_caractères_5[i3] = c3;
        printf("%c",chaine_caractères_5[i3]);
        i3++;
    }

    char c4 = ' ';
    int i4 = longueur_chaine_1 + 1;
    int i5 = 0;
    for(;c4 != '\0';){
        c4 = chaine_caractères_4[i5];
        chaine_caractères_5[i4] = c4;
        i4++;
        i5++;
        printf("%c",chaine_caractères_5[i4]);
    }

    printf("\n");
}
