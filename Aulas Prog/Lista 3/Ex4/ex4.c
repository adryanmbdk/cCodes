// Escrever um programa que leia um número inteiro n e calcule a tabuada de n.

#include <stdio.h>

int main()
{
    int n;

    printf("Digite o valor de n: \n\n");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d \n", n, i, n * i);
    }
}