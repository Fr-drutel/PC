/* Fichier: ptrvariables.c
* Objectif : affecter et afficher les valeurs des variables de différents types 
* de base en utilisant leurs adresses avec des pointeurs
* Auteurs: François-Régis Drutel et Paul Dumont
*/

#include <stdio.h> 

int main(void)
{
    char char_var = 'a';
    char *char_adress = &char_var; 
    printf("adresse de char : %p, valeur de char %c \n",char_adress, char_var);
    *char_adress = 'b';
    printf("adresse de char : %p, valeur de char %c \n",char_adress, char_var);

    unsigned char my_uchar_var = 234;
    // printf("my_uchar_var : %hhu \n", my_uchar_var);

    short my_short_var = -12;
    // printf("my_short_var : %hd \n", my_short_var);
    unsigned short my_ushort_var = 65535;
    // printf("my_ushort_var : %hu \n", my_ushort_var);

    int my_int_var = 12;
    // printf("my_int_var : %i \n", my_int_var);
    unsigned int my_uint_var = 3456;
    // printf("my_uint_var : %u \n", my_uint_var);

    long my_long_var = -1234553L;
    // printf("my_long_var : %ld \n", my_long_var);
    unsigned long my_ulong_var = 234556UL;
    // printf("my_ulong_var : %lu \n", my_ulong_var);

    long long my_llong_var = 1123345LL;
    // printf("my_llong_var : %lld \n", my_llong_var);
    unsigned long long my_ullong_var = 1234567ULL;
    // printf("my_ullong_var : %llu \n", my_ullong_var);

    float my_float_var = 3.14;
    // printf("my_float_var : %f \n", my_float_var);
    double my_double_var = 3.14E-12;
    // printf("my_double_var : %G \n", my_double_var);
    long double my_long_double_var = 3.14E-22;
    // printf("my_long_double_var : %LG \n", my_long_double_var);



}