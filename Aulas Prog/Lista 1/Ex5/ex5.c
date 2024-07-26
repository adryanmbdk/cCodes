// Em épocas de pouco dinheiro os comerciantes procuram aumentar suas vendas oferecendo
// desconto. Faça um algoritmo que possa entrar com o valor de um produto e exiba o novo valor tendo em
// vista que o desconto foi de 9%.

#include <stdio.h>

int main()
{
    float valorProduto;

    printf("Insira o valor do produto:\n");
    scanf("%f", &valorProduto);
    printf("O novo valor do produto é %.2f", valorProduto - valorProduto * .09);
}