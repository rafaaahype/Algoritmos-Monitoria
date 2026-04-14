/*
Carlos chegou ao aeroporto para fazer o check-in do seu vôo. Ao entrar na fila de
passageiros, ele percebeu que a empresa aérea tinha 5 guichês para fazer o check-in dos
passageiros, e que estes guichês eram numerados de 1 a 5. Considerando que os guichês
iam começar a realização dos check-ins no exato momento em que Carlos entrou na fila, e
que cada check-in é realizado em exatamente 15 minutos, escreva um programa que leia
um número inteiro positivo que corresponde à posição de Carlos na fila e determine o
número do guichê no qual ele será atendido e o tempo que ele vai ter que esperar para ser
atendido.
*/

#include <stdio.h>
#define GUICHES 5
#define TEMPOCHECKIN 15
int main(void) {
    printf("Digite a sua posicao: ");
    int posicao; scanf("%d",&posicao);
    int guiche = ((posicao-1)%GUICHES)+1;
    int rodadasAnteriores = (posicao-1)/GUICHES;
    int espera = rodadasAnteriores*TEMPOCHECKIN;

    printf("Guiche: %d\n",guiche);
    printf("Espera: %d minutos\n", espera);

    return 0;
}
