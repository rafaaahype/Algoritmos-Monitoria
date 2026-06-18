/*
Escreva um programa que leia uma matriz quadrada de ordem 4 de números inteiros
e informe o maior número de cada uma das linhas da matriz.
*/

#include <stdio.h>
#define ORDEM 4

int main(void){
	printf("Digite uma matriz:\n");
	int matriz[ORDEM][ORDEM];
	for(int linha=0; linha<ORDEM; linha++){
		for(int coluna=0; coluna<ORDEM; coluna++){
			scanf("%d",&matriz[linha][coluna]);
		}
	}

	for(int linha=0; linha<ORDEM; linha++){
		int maiorNumero=matriz[linha][0];
		for(int coluna=0; coluna<ORDEM; coluna++){
			if(maiorNumero<matriz[linha][coluna]){
				maiorNumero = matriz[linha][coluna];
			}
		}
		printf("O maior numero da linha %d eh %d\n",linha,maiorNumero);
	}
	return 0;
}
