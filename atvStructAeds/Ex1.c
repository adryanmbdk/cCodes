#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Aluno
{
    char nome[100];
    char matricula[7];
    int anoNascimento;
};

struct Aluno *allocV(int n)
{
    struct Aluno *alunos = (struct Aluno *)malloc(n * sizeof(struct Aluno));
    if (alunos != NULL)
    {
        return alunos;
    }
    else
    {

        printf("Nao ha memoria.\n");
        exit(1);
    }
}

void readAlunos(int n, struct Aluno *alunos)
{
    for (int i = 0; i < n; i++)
    {
        printf("Insira as informacoes do aluno %d \n", i + 1);
        do
        {
            printf("Insira o nome:");
            scanf(" %[^\n]s", alunos[i].nome);
        } while (strlen(alunos[i].nome) >= 100);
        printf("Insira o ano de nascimento:");
        scanf("%d", &alunos[i].anoNascimento);
        do
        {
            printf("Insira a matricula (deve ser 7 caracteres): ");
            scanf("%s", alunos[i].matricula);
        } while (strlen(alunos[i].matricula) != 7);
        printf("\n");
    }
}

void printAlunos(int n, struct Aluno *alunos)
{
    for (int i = 0; i < n; i++)
    {
        printf("\n----------------------------------------------------------------");
        printf("\nMatricula: %s", alunos[i].matricula);
        printf("\nNome: %s", alunos[i].nome);
        printf("\nAno de Nascimento: %d", alunos[i].anoNascimento);
    }
}

int main()
{
    int n;
    struct Aluno *alunos = NULL;

    printf("Insira o numero de alunos a serem armazenados:");
    scanf("%d", &n);

    alunos = allocV(n);
    readAlunos(n, alunos);
    printAlunos(n, alunos);

    free(alunos);
    return 0;
}