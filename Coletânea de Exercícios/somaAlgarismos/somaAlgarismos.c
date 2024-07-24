#include <stdio.h>

int main(){
    int num;
    int aux = 0, length = 0, auxTen = 10, soma = 0;

    printf("Insira um número\n");
    scanf("%d", &num);

    // Descobrir quantos algarismos tem o número
    while(aux == 0){
        if (num / auxTen == 0){
            length++;
            aux = 1;
        }else{
            length++;
            auxTen *= 10;
        }
    }
    
    // Separar os algarismos
    int numSplit[length];
    aux = num;
    auxTen /= 10;

    for (int i = 0; i < length; i++){
        numSplit[i] =  aux / auxTen;
        aux = aux - (auxTen * numSplit[i]);
        auxTen /= 10;
        soma = soma + numSplit[i];
    }

    printf("Número de algarismos: %d \nSoma dos algarismos: %d", length, soma);

    return 0;
}