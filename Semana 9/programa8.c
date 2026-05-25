/*
Escreva um programa que leia uma matriz quadrada de ordem três de números inteiros e
identifique a posição em que se encontra o maior número da matriz.
*/

#include <stdio.h>
#define ORDEM 3

int main(void){
	printf("Digite os valores de uma matriz:\n");
	int matriz[ORDEM][ORDEM];	
	for(int linha=0; linha<ORDEM; linha++){
		for(int coluna=0; coluna<ORDEM; coluna++){
			printf("%dx%d:",linha+1,coluna+1);
			scanf("%d",&matriz[linha][coluna]);
		}
	}

	int maiorNumero = matriz[0][0];
	for(int linha=0; linha<ORDEM; linha++){
		for(int coluna=0; coluna<ORDEM; coluna++){
			if(maiorNumero<matriz[linha][coluna])
				maiorNumero = matriz[linha][coluna];
		}
	}

	printf("O maior elemento da matriz que voce informou eh %d\n",maiorNumero);
	return 0;
}
