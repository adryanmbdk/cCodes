#include <stdio.h>

int main()
{
    float sal, media, menor, maior, cont;

    do
    {
        printf("Escreva o salário:");
        scanf("%f", &sal);

        if (sal != -999)
        {
            cont++;
            if (cont == 1)
            {
                menor = sal;
            }
            if (sal > maior)
            {
                maior = sal;
            }
            if (sal < menor && cont != 0)
            {
                menor = sal;
            }
            media += sal;
        }
    } while (sal != -999);

    printf("\nMédia: %.2f", media / cont);
    printf("\nMaior: %.2f", maior);
    printf("\nMenor: %.2f", menor);

    return 0;
}