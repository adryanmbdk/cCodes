#include <stdio.h>
#define tam 101

// Ler nome, sexo e idade. Se sexo for feminino e idade menor que 25. 
// Imprimir o nome da pessoa e a palavra ACEITA. 
// Caso contrario imprimir NAO ACEITA.

int main(){
    char nome[tam], sexo[tam];
    int idade;

    printf("Digite seu nome: ");
    fgets(nome, tam, stdin);
    nome[strlen(nome) - 1] = '\0'; // REMOVE O CARACTERE DE QUEBRA DE LINHA DA STRING

    printf("Digite seu sexo (F ou M): ");
    while(sexo[0] != 'M' && sexo[0] != 'F' && sexo[0] != 'm' && sexo[0] != 'f'){
        fgets(sexo, tam, stdin);
    }
    sexo[strlen(sexo) - 1] = '\0'; //REMOVE O CARACTERE DE QUEBRA DE LINHA DA STRING
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if ((sexo[0] == 'f' || sexo[0] == 'F') && idade < 25){
        printf("%s ACEITA", nome);
    }else{
        printf("NÃO ACEITA");
    }
    
}