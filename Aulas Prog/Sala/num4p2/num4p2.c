#include <stdio.h>

int funcaoMatematica(int vet[], int tam)
{
    int dec = 1, cre = 1;
    for (int i = 0; i < tam; i++)
    {
        if (dec != 0)
        {
            for (int j = i; j < tam; j++)
            {
                if (vet[i] < vet[j])
                {
                    dec = 0;
                }
            }
        }
    }

    if (dec == 1)
    {
        return 1;
    }

    for (int i = 0; i < tam; i++)
    {
        if (cre != 0)
        {
            for (int j = i; j < tam; j++)
            {
                if (vet[i] > vet[j])
                {
                    cre = 0;
                }
            }
        }
    }

    if (cre == 1)
    {
        return -1;
    }
    return 0;
}

int main()
{
    int tam = 5, result;
    int vet[] = {1,1,1,1,1};

    result = funcaoMatematica(vet, tam);

    printf("%d", result);

    return 0;
}
