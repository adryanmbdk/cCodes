#include <stdio.h>
#include <math.h>

int main()
{

    float imc, peso, altura, p1, p2;

    printf("Digite o seu peso:\n");
    scanf("%f", &peso);
    printf("Digite a sua altura:\n");
    scanf("%f", &altura);
    imc = peso / (altura * altura);
    printf("Seu IMC é %.2f: ", imc);
    printf("Sua classificação é de: ");
    if (imc < 18.5)
    {
        printf("Subnutrição");
    }
    if (imc >= 18.5 && imc <= 24.9)
    {
        printf("Peso Saudável");
    }
    if (imc >= 25 && imc <= 29.9)
    {
        printf("Sobrepeso");
    }
    if (imc >= 30 && imc <= 34.9)
    {
        printf("Obesidade Grau 1");
    }
    if (imc >= 35 && imc <= 39.9)
    {
        printf("Obesidade Grau 2");
    }
    if (imc >= 40)
    {
        printf("Obesidade Grau 3");
    }

    p1 = (altura * altura) * 18.5;
    p2 = (altura * altura) * 24.9;
    printf("\n\nA faixa ideal de peso para sua altura é entre %.2fkg e %.2fkg.", p1, p2);
}