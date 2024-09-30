#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct content{
    char type[10];
    union{
        char *cptr;
        int *iptr;
        float *fptr;

    } ptr;
} content;


void affiche(struct content)
    if (strcmp())
    {
        /* code */
    }
    



int main()
{
    char c = 'a';
    int i = 10;
    float f = 2.34;

    char *cptr = &c;
    int *iptr = &i;
    float *fptr = &f;
        
    printf("sizeof(c): %zu\n", sizeof(c));
    printf("sizeof(i): %zu\n", sizeof(i));
    printf("sizeof(f): %zu\n", sizeof(f));

    printf("sizeof(cptr): %zu\n", sizeof(cptr));
    printf("sizeof(iptr): %zu\n", sizeof(iptr));
    printf("sizeof(fptr): %zu\n", sizeof(fptr));

    // 8 octets (adresses en 64 bits) car 8x8 = 64 bits



    printf("sizeof(content): %zu\n", sizeof(content));

    strncpy(content.type,"float", sizeof(content.type));
    content.ptr.fptr = &f;



    printf("f: %f\n", *content.ptr.fptr);

    printf("c: %c\n", *content.ptr.cptr);


}