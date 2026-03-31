/* 1. Escreva um programa que leia o valor total que um cliente consumiu em um restaurante e
determine o valor final da sua conta, considerando que o restaurante cobra uma taxa de
serviço de 10 % e uma taxa de couvert artístico de R$ 10,00.*/

#include <stdio.h>

#define porcentagem 1.1
#define couvert 10

int main(){
    float valorTotal;
    scanf("%f",&valorTotal);
    valorTotal = (valorTotal * porcentagem) + couvert;
    printf("Valor total: R$%.2f\n",valorTotal);
    return 0;
}