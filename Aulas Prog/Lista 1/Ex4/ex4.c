// Para vários tributos a base de calculo é o salário mínimo. Fazer um algoritmo que leia o valor do
// salário mínimo e o valor do salário de uma pessoa. Calcular e exibir quantos salários mínimos essa pessoa
// ganha. Obs: o salário mínimo atualmente é R$622,00

#include <stdio.h>

int main()
{
    float salMin, sal;

    printf("Insira o valor do salário mínimo: \n");
    scanf("%f", &salMin);
    printf("Insira o seu salário: \n");
    scanf("%f", &sal);

    printf("Atualmente você ganha %.0f salários mínimos", sal / salMin);
}
