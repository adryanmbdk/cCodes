#include <stdio.h>
#include <ctype.h>
#define tam 11

//String de trás pra frente + verificação se é palindromo

int main(){
    char str[tam];
    char invStr[tam];
    int cont = 0;
    int length = 0;

    printf("Escreva uma palavra:\n");
    fgets(str, tam, stdin);

    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    printf("\nA palavra invertida é:\n");
    for (int i = 0; i <= length; i++){
        if (i == length){
            invStr[i] = '\0';
            str[i] = '\0';
        }else{
            invStr[i] = str[length - i - 1];
            if(tolower(invStr[i]) ==  tolower(str[i])){
                cont++;
            }
        }
    }

    printf("%s\n\n", invStr);

    if (cont == length){
        printf("A palavra é um palíndromo.");
    }else{
        printf("A palavra não é um palíndromo.");
    }
    return 0;
}