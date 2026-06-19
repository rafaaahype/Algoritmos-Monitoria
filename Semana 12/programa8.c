/*
Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e calcule
a soma de todos os seus números. O cálculo dessa soma deve ser feito por meio de um
subprograma.
*/

#include <stdio.h>
#define ORDEM 5

int somaMatriz(int matriz[][ORDEM]){
	int soma = 0;
	for(int linha=0; linha<ORDEM; linha++){
		for(int coluna=0; coluna<ORDEM; coluna++){
			soma+=matriz[linha][coluna];
		}
	}
	return soma;
}

int main(void){
	printf("Digite uma matriz: ");
	int matriz[ORDEM][ORDEM];
	for(int linha=0; linha<ORDEM; linha++){
		for(int coluna=0; coluna<ORDEM; coluna++){
			scanf("%d",&matriz[linha][coluna]);
		}
	}
	int res = somaMatriz(matriz);
	printf("A soma de todos os elementos da matriz eh %d\n",res);
	return 0;
}
