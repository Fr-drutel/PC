/* Fichier: bonjour.c
* Objectif : afficher Bonjour le Monde! à l'écran 
* Auteurs: François-Régis Drutel et Paul Dumont
*/

#include <stdio.h> 

int main(void) {

int val_int = 0x67530201; 
short val_short = 0x001; 
float val_float = 5.5f; 


char *ptr_int = (char*)&val_int;
printf("Octets de int :\n");
for(int i = 0; i <sizeof(val_int); i++) {
    printf("%02X ", ptr_int[i]); 
}
printf("\n");


char *ptr_short = (char*)&val_short;
printf("Octets de short :\n");
for(int i = 0; i <sizeof(val_short); i++) {
    printf("%02X ", ptr_short[i]); 
}
printf("\n");


char *ptr_float = (char*)&val_float;
printf("Octets de float :\n");
for(int i = 0; i <sizeof(val_float); i++) {
    printf("%02X ", (unsigned char)ptr_float[i]); 
}
printf("\n");

}

