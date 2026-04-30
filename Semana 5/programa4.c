/*
Escreva um programa que leia o termo inicial e a razão de uma progressão aritmética e um
número inteiro positivo N e imprima os N primeiros termos da progressão.
*/

#include <stdio.h>

int main(){
	printf("Digite o termo inicial de uma PA: ");
	int termoInicial; scanf("%d",&termoInicial);
	printf("Digite a razão de uma PA: ");
	int razao; scanf("%d",&razao);
	printf("Digite um numero natural: ");
	int numero; scanf("%d",&numero);
	int termoAtual = termoInicial;
	for(int i=1; i<=numero; termoAtual+=razao, i++) printf("%d ",termoAtual);
	return 0;
}
