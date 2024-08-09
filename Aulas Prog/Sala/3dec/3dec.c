#include <stdio.h>

int main()
{
    int a, b, c;
    int aux;

    printf("Digite o primeiro número: ");
    scanf("%d", &a);
    printf("Digite o segundo número: ");
    scanf("%d", &b);
    printf("Digite o terceiro número: ");
    scanf("%d", &c);

    if (a < b)
    {
        // Troca a e b.
        aux = a;
        a = b;
        b = aux;
    }
    if (b < c)
    {
        // Troca b e c
        aux = b;
        b = c;
        c = aux;
    }

    if (a < b)
    {
        // Troca a e b
        aux = a;
        a = b;
        b = aux;
    }

    printf("Os números em ordem decrescente são: %d, %d, %d\n", a, b, c);
    return 0;
}