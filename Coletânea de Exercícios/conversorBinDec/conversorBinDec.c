#include <stdio.h>
#include <math.h>

//CONVERSOR DE BINARIO E DECIMAL

int main(){
    int menu = -1, aux, conv = 0;
    int num;

    while (menu != 1 && menu != 2 && menu != 0){
        printf("Insira 1 para converter Decimal para Binário.\n");
        printf("Insira 2 para converter Binário para Decimal.\n");
        printf("Insira 0 para encerrar.\n");
        scanf("%d", &menu);
    }

    if(menu == 0){
        return 0;
    }else{
        printf("\nInsira o número que será convertido:\n");
        scanf("%d", &num);
            if(menu == 1){
                aux = 1;
                while (num != 0){
                    conv += (num%2 * aux);
                    aux *= 10;
                    num /= 2;
                }
                printf("\nBinário: %d", conv);
            }

            if(menu == 2){
                aux = 0;
                while(num != 0){
                    conv += ((num % 10) * pow(2, aux));
                    num /= 10;
                    aux++;
                }
                printf("\nDecimal: %d", conv);
            }
    }

    return 0;
}