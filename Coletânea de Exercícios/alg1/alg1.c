#include <stdio.h>
#include <ctype.h>
#define tam 101

//Receber um nome e imprimir as 4 primeiras letras do nome.
int main (){    
    char nome[tam];
    int i = 0,j = 0;

    printf("Qual seu nome?\n");
    fgets(nome, tam, stdin);
    printf("Primeiras 4 letras\n");
    while (nome[i] != '\0' && j < 4){
        if (nome[i] == ' ' || isdigit(nome[i])){
            i++;
        }
        else{
            printf("%c", nome[i]);
            i++;
            j++;
        }
    }

    return 0;
}