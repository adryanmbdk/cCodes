#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Produto
{
    int codigo;
    char nome[50];
    int quantidade;
    float preco;
};

struct Produto *allocProdutos(int n)
{
    struct Produto *produtos = (struct Produto *)malloc(n * sizeof(struct Produto));
    if (produtos == NULL)
    {
        printf("Não há memória suficiente.\n");
        exit(1);
    }
    return produtos;
}

void lerProdutos(int n, struct Produto *produtos)
{
    for (int i = 0; i < n; i++)
    {
        printf("Insira as informações do produto %d\n", i + 1);
        printf("Código: ");
        scanf("%d", &produtos[i].codigo);
        do
        {
            printf("Nome: ");
            scanf(" %[^\n]s", produtos[i].nome);

        } while (strlen(produtos[i].nome) >= 50);
        printf("Quantidade: ");
        scanf("%d", &produtos[i].quantidade);
        printf("Preço: ");
        scanf("%f", &produtos[i].preco);
        printf("\n");
    }
}

void imprimirProdutos(int n, struct Produto *produtos)
{
    for (int i = 0; i < n; i++)
    {
        printf("\n----------------------------------------------------------------");
        printf("\nCódigo: %d", produtos[i].codigo);
        printf("\nNome: %s", produtos[i].nome);
        printf("\nQuantidade: %d", produtos[i].quantidade);
        printf("\nPreço: %.2f", produtos[i].preco);
    }
}

void imprimirMaior(int n, struct Produto *produtos)
{
    float maiorPreco = 0;
    int indicePreco = 0, indiceQuant = 0, maiorQuant = 0;
    for (int i = 1; i < n; i++)
    {
        if (produtos[i].preco > maiorPreco)
        {
            maiorPreco = produtos[i].preco;
            indicePreco = i;
        }
        if (produtos[i].quantidade > maiorQuant)
        {
            maiorQuant = produtos[i].quantidade;
            indiceQuant = i;
        }
    }
    printf("\n\nO produto mais caro é o %s com valor de %.2f.\n", produtos[indicePreco].nome, maiorPreco);
    printf("\nO produto com maior quantidade no estoque é o %s com %d produtos.\n", produtos[indiceQuant].nome, maiorQuant);
}

int main()
{
    int n;
    struct Produto *produtos = NULL;

    printf("Insira o número de produtos a serem cadastrados: ");
    scanf("%d", &n);

    produtos = allocProdutos(n);
    lerProdutos(n, produtos);
    imprimirProdutos(n, produtos);

    imprimirMaior(n, produtos);

    free(produtos);
    return 0;
}