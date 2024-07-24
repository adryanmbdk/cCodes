#include <stdio.h>
#define tam 101

//Receber um nome e imprimir as letras na posição impar e as letras na posição par.
int main(){
    char nome[tam];
    int i = 0;

    printf("Insira seu nome:\n");
    fgets(nome, tam, stdin);
    
    printf("\nLetras na posição ímpar\n");
    while (nome[i] != '\0'){
        if (i % 2 == 0){
            printf("%c", nome[i]);
            i++;
        }else{
            i++;
        }
    }
    i = 0;
    printf("\nLetras na posição par\n");
        while (nome[i] != '\0'){
        if (i % 2 != 0){
            printf("%c", nome[i]);
            i++;
        }else{
            i++;
        }
    }

    return 0;
}