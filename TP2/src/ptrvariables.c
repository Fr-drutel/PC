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
    printf("adresse de char : %p, valeur de char : %c \n", char_adress, char_var);
    *char_adress = 'b'; // modif de la variables
    printf("adresse de char : %p, valeur de char : %c \n", char_adress, char_var);

    short my_short_var = -12;
    short *my_short_var_adress = &my_short_var; 
    printf("adresse de short : %p, valeur de short : %d \n", my_short_var_adress, my_short_var);
    *my_short_var_adress = 100; // modif de la variables
    printf("adresse de short : %p, valeur de short : %d \n", my_short_var_adress, my_short_var);

    unsigned short my_ushort_var = 65535;
    unsigned short *my_ushort_var_adress = &my_ushort_var; 
    printf("adresse de unsigned short : %p, valeur de unsigned short : %hu \n", my_ushort_var_adress, my_ushort_var);
    *my_ushort_var_adress = 12345;  
    printf("adresse de unsigned short : %p, valeur de unsigned short : %hu \n", my_ushort_var_adress, my_ushort_var);

    int my_int_var = 12;
    int *my_int_var_adress = &my_int_var;
    printf("adresse de int : %p, valeur de int : %d \n", my_int_var_adress, my_int_var);
    *my_int_var_adress = 42; // modif de la variables
    printf("adresse de int : %p, valeur de int : %d \n", my_int_var_adress, my_int_var);

    unsigned int my_uint_var = 3456;
    unsigned int *my_uint_var_adress = &my_uint_var;
    printf("adresse de unsigned int : %p, valeur de unsigned int : %u \n", my_uint_var_adress, my_uint_var);
    *my_uint_var_adress = 9876; // modif de la variables  
    printf("adresse de unsigned int : %p, valeur de unsigned int : %u \n", my_uint_var_adress, my_uint_var);

    long my_long_var = -1234553L;
    long *my_long_var_adress = &my_long_var;
    printf("adresse de long : %p, valeur de long : %ld \n", my_long_var_adress, my_long_var);
    *my_long_var_adress = 7654321L;  // modif de la variables 
    printf("adresse de long : %p, valeur de long : %ld \n", my_long_var_adress, my_long_var);

    unsigned long my_ulong_var = 234556UL;
    unsigned long *my_ulong_var_adress = &my_ulong_var;
    printf("adresse de unsigned long : %p, valeur de unsigned long : %lu \n", my_ulong_var_adress, my_ulong_var);
    *my_ulong_var_adress = 9876543UL;  // modif de la variables
    printf("adresse de unsigned long : %p, valeur de unsigned long : %lu \n", my_ulong_var_adress, my_ulong_var);

    long long my_llong_var = 1123345LL;
    long long *my_llong_var_adress = &my_llong_var;
    printf("adresse de long long : %p, valeur de long long : %lld \n", my_llong_var_adress, my_llong_var);
    *my_llong_var_adress = 123456789LL; // modif de la variables
    printf("adresse de long long : %p, valeur de long long : %lld \n", my_llong_var_adress, my_llong_var);

    unsigned long long my_ullong_var = 1234567ULL;
    unsigned long long *my_ullong_var_adress = &my_ullong_var;
    printf("adresse de unsigned long long : %p, valeur de unsigned long long : %llu \n", my_ullong_var_adress, my_ullong_var);
    *my_ullong_var_adress = 987654321ULL; // modif de la variables
    printf("adresse de unsigned long long : %p, valeur de unsigned long long : %llu \n", my_ullong_var_adress, my_ullong_var);

    float my_float_var = 3.14;
    float *my_float_var_adress = &my_float_var;
    printf("adresse de float : %p, valeur de float : %f \n", my_float_var_adress, my_float_var);
    *my_float_var_adress = 6.28; // modif de la variables
    printf("adresse de float : %p, valeur de float : %f \n", my_float_var_adress, my_float_var);

    double my_double_var = 3.14E-12;
    double *my_double_var_adress = &my_double_var;
    printf("adresse de double : %p, valeur de double : %G \n", my_double_var_adress, my_double_var);
    *my_double_var_adress = 6.28E-12; // modif de la variables
    printf("adresse de double : %p, valeur de double : %G \n", my_double_var_adress, my_double_var);

    long double my_long_double_var = 3.14E-22;
    long double *my_long_double_var_adress = &my_long_double_var;
    printf("adresse de long double : %p, valeur de long double : %LG \n", my_long_double_var_adress, my_long_double_var);
    *my_long_double_var_adress = 6.28E-22; // modif de la variables
    printf("adresse de long double : %p, valeur de long double : %LG \n", my_long_double_var_adress, my_long_double_var);
}
