#include <stdio.h>

int main()
{
    int num, n50, n10, n1, rest;

    printf("Escreva o valor da conta: \n");
    scanf("%d", &num);

    n50 = num / 50;
    rest = num % 50;
    n10 = rest / 10;
    rest = rest % 10;
    n1 = rest % 10;

    printf("Notas de 50: %d\n", n50);
    printf("Notas de 10: %d\n", n10);
    printf("Notas de 1: %d\n", n1);
}