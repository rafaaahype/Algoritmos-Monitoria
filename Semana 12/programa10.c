/*
Escreva um programa que leia uma matriz quadrada de ordem 4 de números reais e
determine o menor número de cada linha da matriz. A matriz deve ter um subprograma que
receba como parâmetros a matriz e um número inteiro i (0 e 3) e retorne o menor número
da linha i.
*/

#include <stdio.h>
#define ORDEM 4

float menorValor(float vetor[ORDEM]){
	float menor_valor = vetor[0];
	for(int i=1; i<ORDEM; i++)
		if(vetor[i]<menor_valor) menor_valor = vetor[i];
	return menor_valor;
}

float menorDaLinha(float matriz[][ORDEM], int i){
	float menor_valor = menorValor(matriz[i]);
	return menor_valor;
}

int main(void){
	float matriz[ORDEM][ORDEM];
	printf("Digite uma matriz:\n");
	for(int linha=0; linha<ORDEM; linha++)
		for(int coluna=0; coluna<ORDEM; coluna++)
			scanf("%f",&matriz[linha][coluna]);

	for(int i=0; i<ORDEM; i++)
		printf("O menor valor da linha %d eh %.2f\n",i,menorDaLinha(matriz, i));
	return 0;
}
