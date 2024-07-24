#include <stdio.h>
#define tam 101

//Escrever seu nome na tela 10 vezes. Um nome por linha

int main()
{
    char nome[tam];

    printf("Insira seu nome:\n");
    fgets(nome, tam, stdin);
    printf("\n");
    for (int i = 0; i < 10; i++){
        printf("%s", nome);
    }
}