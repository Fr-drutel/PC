#include <stdio.h> 
#include "fichier.h"
#include "operator.h"



int main(void)
{
    int ex = '2';
    switch(ex){
        case '1':

            int num1, num2;
            char op;

            printf("Entrez un entier pour num1 : ");
            scanf("%d", &num1);

            printf("Entrez un entier pour num2 : ");
            scanf("%d", &num2);

            printf("Entrez une opération (par exemple +, -, *, /, %%, &, |, ~) : ");
            scanf(" %c", &op);

            int result = -1;

            switch (op){
                case '+' : 
                    result = somme(num1, num2);
                    break;
                case '-' : 
                    result = difference(num1, num2);
                    break;
                case '*' : 
                    result = produit(num1, num2);
                    break;
                case '/' : 
                    result = divise(num1, num2);
                    break;
                case '%' : 
                    result = modulo(num1, num2);
                    break;
                case '&' : 
                    result = et(num1, num2);
                    break;
                case '|' : 
                    result = ou(num1, num2);
                    break;
                case '~' : 
                    result = negation(num1);
                    break;
            }

            printf("resultat %c : %i \n", op, result);
            break;


        case '2':   

            
            char message[] = "message pour fr";
            char* nom_de_fichier = "text2.txt";
            ecrire_dans_fichier(nom_de_fichier, message);
            lire_fichier(nom_de_fichier);
            break;

        case '3':   
            struct etudiant {
                char nom[30];
                char prenom[30];
                char adresse[30];
                struct note {
                    float notes_en_C;
                    float notes_en_S;
                } note;  
            };

            int nb_etudiant = 2;
            struct etudiant etudiant[nb_etudiant];
            char* nom_de_fichier3 = "etudiant.txt";

            for(int i = 0; i < nb_etudiant;i++){

                printf("nom de l'etudiant %i :", i);
                scanf("%s", etudiant[i].nom);
                ecrire_dans_fichier(nom_de_fichier3, etudiant[i].nom);

                printf("prenom de l'etudiant %i :", i);
                scanf("%s", etudiant[i].prenom);
                ecrire_dans_fichier(nom_de_fichier3, etudiant[i].prenom);

                printf("adresse de l'etudiant %i :", i);
                scanf("%s", etudiant[i].adresse);
                ecrire_dans_fichier(nom_de_fichier3, etudiant[i].adresse);

                printf("notes_en_C de l'etudiant %i :", i);
                scanf("%f", &etudiant[i].note.notes_en_C);
                char noteC[6];
                sprintf(noteC, "%f0.2",etudiant[i].note.notes_en_C);
                ecrire_dans_fichier(nom_de_fichier3, noteC);

                printf("notes_en_S de l'etudiant %i :", i);
                scanf("%f", &etudiant[i].note.notes_en_S);
                char noteS[6];
                sprintf(noteS, "%f0.2",etudiant[i].note.notes_en_S);
                ecrire_dans_fichier(nom_de_fichier3, noteS);
            }
            
            lire_fichier(nom_de_fichier3);
            break;
    }
}