/* Fichier: octets.c
* Objectif : afficher les octets individuels de différentes 
* variables de types de données 
* Auteurs: François-Régis Drutel et Paul Dumont
*/

#include <stdio.h> 

int main(void) 
{
    // Initialisations
    short val_short = 0x001; 
    int val_int = 0x67530201; 
    long int val_long_int = 0x333333333333;
    float val_float = 5.5f; 
    double val_double = 0x13452457345;
    long double val_long_double = 0x14E433FABC;

    // On crée un pointeur vers les octets de val_short
    char *ptr_short = (char*)&val_short;
    printf("Octets de short :\n");
    for(int i = 0; i < (int)sizeof(val_short); i++) {
        printf("%02X ", ptr_short[i]); // On affiche les octets en hexadécimal
    }
    printf("\n \n");


    char *ptr_int = (char*)&val_int;
    printf("Octets de int :\n");
    for(int i = 0; i < (int)sizeof(val_int); i++) {
        printf("%02X ", ptr_int[i]); 
    }
    printf("\n \n");


    char *ptr_long_int = (char*)&val_long_int;
    printf("Octets de long int :\n");
    for(int i = 0; i < (int)sizeof(val_long_int); i++) {
        printf("%02X ", ptr_long_int[i]); 
    }
    printf("\n \n");


    char *ptr_float = (char*)&val_float;
    printf("Octets de float :\n");
    for(int i = 0; i < (int)sizeof(val_float); i++) {
        printf("%02X ", (unsigned char)ptr_float[i]); 
    }
    printf("\n \n");


    char *ptr_double = (char*)&val_double;
    printf("Octets de int :\n");
    for(int i = 0; i < (int)sizeof(val_double); i++) {
        printf("%02X ", ptr_double[i]); 
    }
    printf("\n \n");


    char *ptr_long_double = (char*)&val_long_double;
    printf("Octets de int :\n");
    for(int i = 0; i < (int)sizeof(val_long_double); i++) {
        printf("%02X ", ptr_long_double[i]); 
    }
    printf("\n \n");
}
