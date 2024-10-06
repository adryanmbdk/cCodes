#include <stdio.h>
#include <stdlib.h>

int *allocV(int n)
{
    int *v = (int *)malloc(n * sizeof(int));
    if (v != NULL)
    {
        return v;
    }
    else
    {

        printf("Nao ha memoria.\n");
        exit(1);
    }
}

void readV(int n, int *v)
{
    for (int i = 0; i < n; i++)
    {
        printf("Insira o valor %d do vetor: ", i + 1);
        scanf("%d", &v[i]);
    }
}

void printV(int n, int *v)
{
    for (int i = 0; i < n; i++)
    {
        printf("O valor do elemento na posição %d é %d\n", i + 1, v[i]);
    }
}

int main()
{
    int n;
    int *v = NULL;

    printf("Insira o tamanho do vetor:");
    scanf("%d", &n);

    allocV(n, v);
    readV(n, v);
    printV(n, v);

    free(v);

    return 0;
}