#include <stdio.h>

int main()
{
    int base, aux, tam;
    printf("Insira o tamanho da base do triângulo:\n");
    scanf("%d", &base);
    printf("\n");

    tam = (base / 2) + 1;
    aux = 0;

    for (int i = 0; i < tam; i++)
    {
        for (int j = 1; j <= base; j++)
        {
            if (j < (tam - aux) || j > (tam + aux))
            {
                printf(" ");
            }
            if (j >= (tam - aux) && j <= (tam + aux))
            {
                printf("*");
            }
        }
        aux++;
        printf("\n");
    }

    return 0;
}