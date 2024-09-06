#include <stdio.h>
#define tam 101

int primeiraOcorrencia(char str[], char c)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == c)
        {
            return i;
        }
    }
    printf("Não foi encontrando esse caractere nessa frase.");
    return -1;
}

int main()
{
    char str[tam], c;
    int first;
    printf("Insira uma frase: ");
    scanf("%[^\n]s", str);
    printf("Insira um caractere: ");
    scanf("\n%c", &c);

    first = primeiraOcorrencia(str, c);
    if (first != -1)
        printf("Primeira ocorrência na posição %d", first);

    return 0;
}