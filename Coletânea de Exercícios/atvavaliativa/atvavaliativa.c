#include <stdio.h>
#include <stdlib.h>

int *allocVet(int n)
{
    int *vet = (int *)malloc(n * sizeof(int));
    if (vet != NULL)
        return vet;
    else
    {
        printf("Memória insuficiente!\n");
        exit(1);
    }
}

void readVet(int n, int *vet)
{
    for (int i = 0; i < n; i++)
    {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &vet[i]);
    }
}

int eh_multiplo(int a, int b, int *resp)
{
    if (a % b == 0)
        *resp = 1;
    if (a % b != 0)
        *resp = 0;
}

void printVet(int x, int n, int *vet, int *resp)
{
    for (int i = 0; i < n; i++)
    {
        eh_multiplo(vet[i], x, resp);
        if (*resp == 1)
            printf("\n%d é múltipo de %d", vet[i], x);
        if (*resp == 0)
            printf("\n%d não é múltipo de %d", vet[i], x);
    }
}

int main()
{
    int x, n;
    int *vet = NULL;
    int *resp = (int *)malloc(sizeof(int));

    printf("Digite um numero inteiro para o valor de X: ");
    scanf("%d", &x);

    printf("Digite a quantidade de números que serão lidos:");
    scanf("%d", &n);

    vet = allocVet(n);
    readVet(n, vet);
    printVet(x, n, vet, resp);

    free(vet);
    free(resp);
    return 0;
}