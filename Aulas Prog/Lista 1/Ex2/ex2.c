// Escrever um programa para ler dois números inteiros e exibir a soma, a diferença, o produto e
// o quociente. A saída deve mostrar os operandos, o operador e o resultado de cada operação.

#include <stdio.h>;

int main()
{
    int num1, num2;

    printf("Digite o número 1:");
    scanf("%d", &num1);
    printf("Digite o número 2:");
    scanf("%d", &num2);

    printf("%d + %d = %d\n", num1, num2, num1 + num2);
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
    printf("%d * %d = %d\n", num1, num2, num1 * num2);
    printf("%d / %d = %d\n", num1, num2, num1 / num2);
}