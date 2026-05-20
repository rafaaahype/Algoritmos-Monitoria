/*Escreva um programa que leia vários números inteiros e calcule a média dos números
pares e a média dos números ímpares. O processamento deverá ser encerrado quando for
lido o valor 0, que não deverá ser processado.*/
#include <stdio.h>

int main(){
    int valor;
    int quantidadePares = 0;
    float somaPares = 0;
    int quantidadeImpares = 0;
    float somarImpares = 0;
    do {
        scanf("%d",&valor);
        if (valor != 0){
            if (valor % 2 == 0){
                quantidadePares++;
                somaPares += valor;
            }
            else {
                quantidadeImpares++;
                somarImpares += valor;
            }
        }
    }
    while (valor != 0);
    printf("Media pares: %.2f\n", somaPares / quantidadePares);
    printf("Media impares: %.2f\n", somarImpares / quantidadeImpares);
    return 0;
}