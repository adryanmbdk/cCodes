#include <stdio.h>

typedef struct celula
{
    int codigo;
    struct celula *prox;
} TCelula;

typedef struct Pilha
{
    TCelula *fundo;
    TCelula *topo;
    int tamanho;
} TPilha;

void FPVazia(TPilha *Pilha)
{
    Pilha->topo = (TCelula *)malloc(sizeof(TCelula));
    Pilha->fundo = Pilha->topo;
    Pilha->topo->prox = NULL;
    Pilha->tamanho = 0;
}

int PilhaVazia(TPilha Pilha)
{
    return (Pilha.topo == Pilha.fundo);
}

void Empilha(int codigo, TPilha *Pilha)
{
    TCelula *aux;
    aux = (TCelula *)malloc(sizeof(TCelula));
    Pilha->topo->codigo = codigo;
    aux->prox = Pilha->topo;
    Pilha->topo = aux;
    Pilha->tamanho++;
}

void Desempilha(TPilha *Pilha)
{
    TCelula *aux;
    if (PilhaVazia(*Pilha))
    {
        printf("Pilha vazia.\n");
        return;
    }
    aux = Pilha->topo;
    Pilha->topo = aux->prox;
    free(aux);
    Pilha->tamanho--;
}

void Imprimir(TPilha *Pilha)
{
    TCelula *aux;
    aux = Pilha->topo->prox;
    printf("\n==============================================");
    while (aux != NULL)
    {
        printf("\n%d", aux->codigo);
        aux = aux->prox;
    }
    printf("\n==============================================\n");
}

int main()
{
    TPilha pilha;
    FPVazia(&pilha);

    Empilha(10, &pilha);
    Empilha(20, &pilha);
    Empilha(40, &pilha);
    Empilha(30, &pilha);
    Desempilha(&pilha);
    Desempilha(&pilha);
    Empilha(30, &pilha);

    Imprimir(&pilha);

    return 0;
}