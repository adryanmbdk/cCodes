#include <stdio.h>

void lerVetor(int vetor[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("\nInsira o valor da posição %d ", i);
        scanf("%d", &vetor[i]);
    }
}

void exibirVetor(int vetor[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("\n%d", vetor[i]);
    }
}

int main()
{
    int vetor[5];
    for (int i = 0; i < 5; i++)
    {
        printf("\nInsira o valor da posição %d ", i);
        scanf("%d", &vetor[i]);
    }

    exibirVetor(vetor);
    lerVetor(vetor);
    exibirVetor(vetor);

    return 0;
}