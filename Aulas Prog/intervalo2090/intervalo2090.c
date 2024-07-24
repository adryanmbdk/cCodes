#include <stdio.h>

int main()
{
    int num;
    printf("Insira um número\n");
    scanf("%d", &num);
    if (num >= 20 && num <= 90)
    {
        printf("O número %d está dentro do intervalo.\n", num);
    }
    else
    {
        printf("O número %d não está dentro do intervalo.\n", num);
    }
}