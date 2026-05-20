/*Escreva um programa que leia três números inteiros positivos e calcule o mínimo múltiplo
comum dos números informados.*/
#include <stdio.h>

int main(){
    int numeroUm, numeroDois, numeroTres, divisor = 2, mmc = 1;
    scanf("%d%d%d",&numeroUm,&numeroDois,&numeroTres);
    while (numeroUm != 1 || numeroDois != 1 || numeroTres != 1){
        if (numeroUm % divisor == 0 || numeroDois % divisor == 0 || numeroTres % divisor == 0){
            int dividiu = 0;
            if (numeroUm % divisor == 0){
                numeroUm /= divisor;
                dividiu = 1;
            }
            if (numeroDois % divisor == 0){
                numeroDois /= divisor;
                dividiu = 1;
            }
            if (numeroTres % divisor == 0){
                numeroTres /= divisor;
                dividiu = 1;
            }
            if (dividiu){
                mmc *= divisor;
            }
        } else {
            divisor++;
        }
    }
    printf("%d",mmc);
    return 0;
}
