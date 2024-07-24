// Escrever um programa para ler um número inteiro e exibir seu sucessor e seu antecessor

#include <stdio.h>

int main()
{
    int num;

    printf("Escreva um número inteiro: ");
    scanf("%d", &num);

    printf("Antecessor: %d\n", num - 1);
    printf("Sucessor: %d", num + 1);
}