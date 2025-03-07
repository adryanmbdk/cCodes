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

int Desempilha(TPilha *Pilha)
{
    TCelula *aux;
    if (PilhaVazia(*Pilha))
    {
        printf("Pilha vazia.\n");
        return -1;
    }
    aux = Pilha->topo;
    Pilha->topo = aux->prox;
    free(aux);
    Pilha->tamanho--;
    return Pilha->topo->codigo;
}

void Enfileirar(int codigo, TPilha *Pilha1, TPilha *Pilha2)
{
    if (PilhaVazia(*Pilha1))
    {
        while (!PilhaVazia(*Pilha2))
        {
            Empilha(Desempilha(Pilha2), Pilha1);
        }
    }
    Empilha(codigo, Pilha1);
}

int Desenfileirar(TPilha *Pilha1, TPilha *Pilha2)
{
    if (PilhaVazia(*Pilha1))
    {
        Desempilha(Pilha2); 
        return -1;
    }
    if (PilhaVazia(*Pilha2))
    {
        while (!PilhaVazia(*Pilha1))
        {
            Empilha(Desempilha(Pilha1), Pilha2);
        }
    }
    Desempilha(Pilha2); 
}

int Imprimir(TPilha *Pilha1, TPilha *Pilha2)
{
    if (PilhaVazia(*Pilha1) && PilhaVazia(*Pilha2))
    {
        printf("\nFila vazia\n");
        return -1;
    }

    if (PilhaVazia(*Pilha2))
    {
        while (!PilhaVazia(*Pilha1))
        {
            Empilha(Desempilha(Pilha1), Pilha2);
        }
    }

    TCelula *aux;
    aux = Pilha2->topo->prox;
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
    TPilha pilha1;
    TPilha pilha2;
    FPVazia(&pilha1);
    FPVazia(&pilha2);

    Enfileirar(1, &pilha1, &pilha2);
    Enfileirar(2, &pilha1, &pilha2);
    Enfileirar(3, &pilha1, &pilha2);
    Enfileirar(4, &pilha1, &pilha2);
    Desenfileirar(&pilha1, &pilha2); // remove o 1
    Desenfileirar(&pilha1, &pilha2); // remove o 2
    Enfileirar(5, &pilha1, &pilha2);
    Enfileirar(6, &pilha1, &pilha2);
    Desenfileirar(&pilha1, &pilha2); // remove o 3
    Enfileirar(7, &pilha1, &pilha2);
    Enfileirar(8, &pilha1, &pilha2);
    Enfileirar(9, &pilha1, &pilha2);
    Desenfileirar(&pilha1, &pilha2); // remove o 4
    Imprimir(&pilha1, &pilha2);

    return 0;
}