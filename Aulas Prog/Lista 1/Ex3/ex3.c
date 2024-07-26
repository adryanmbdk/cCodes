// A maioria dos restaurantes cobra 10% sobre o valor do consumo do cliente para o garçom,
// embora por lei não possa obrigar o cliente a pagar. Fazer um algoritmo que leia o valor gasto com as
// despesas realizadas em um restaurante e imprima o valor da gorjeta e o valor total a ser pago (despesa mais
// gorjeta).

#include <stdio.h>

int main()
{
    float despesa;

    printf("Insira a despesa total:\n");
    scanf("%f", &despesa);
    printf("\nValor da gorjeta: %.2f", despesa * 0.1);
    printf("\nValor total: %.2f", despesa * 1.1);
}