// Faça um algoritmo para ler um número inteiro. Se o número lido for 1 ou 2, ler a medida de
// lado de um quadrado, calcular e escrever a área e perímetro do círculo inscrito nesse quadrado. Se for 3 ou 4
// ou 5, ler a medida de lado de um quadrado, calcular e escrever a área e o perímetro do círculo circunscrito
// no mesmo. Se for outro número inteiro que não este, ler a medida do lado de um triângulo eqüilátero,
// calcular e escrever a área do mesmo. Lembre-se que é preciso calcular a altura do triângulo antes aplicando-se o teorema de Pitágoras no triângulo retângulo formado.
// Dica: O círculo inscrito no quadrado é o interior ao quadrado e o circunscrito é o exterior ao quadrado.

#include <stdio.h>
#include <math.h>

int main()
{

    int option;
    float side, area, perimeter, radius;

    printf("Insira um número: ");
    scanf("%d", &option);

    if (option >= 1 && option <= 2)
    {
        printf("\nInsira a medida do lado do quadrado: ");
        scanf("%f", &side);

        radius = side / 2; // Lado do quadrado é igual ao diâmetro do círculo
        area = 3.14 * (radius * radius);
        perimeter = 3.14 * 2 * radius;

        printf("\nÁrea do círculo inscrito: %.2f", area);
        printf("\nPerímetro do círculo inscrito: %.2f", perimeter);
    }

    if (option >= 3 && option <= 5)
    {
        printf("\nInsira a medida do lado do quadrado: ");
        scanf("%f", &side);

        radius = (side * sqrt(2)) / 2; // Diagonal do quadrado é igual ao diâmetro do círculo
        area = 3.14 * (radius * radius);
        perimeter = 3.14 * 2 * radius;

        printf("\nÁrea do círculo circunscrito: %.2f", area);
        printf("\nPerímetro do círculo circunscrito: %.2f", perimeter);
    }

    if (option >= 6 || option <= 0)
    {
        printf("\nInsira a medida do lado do triângulo equilátero: ");
        scanf("%f", &side);

        area = ((side * side) * sqrt(3)) / 4;

        printf("\nÁrea do triângulo equilátero: %.2f", area);
    }

    return 0;
}