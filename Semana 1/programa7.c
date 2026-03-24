#include <stdio.h>

#define precom2 300

int main (){
    float comprimento, largura;
    scanf("%f%f",&comprimento,&largura);
    float valorDeMercado = (comprimento * largura) * precom2;
    printf("Comprimento:%.2fm2\n Largura:%.2fm2\nValor de Mercado: R$%.2f\n",comprimento,largura,valorDeMercado);
    return 0;
}