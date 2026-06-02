/*
Escreva um programa que leia uma matriz quadrada de ordem 4 de números reais e
determine a quantidade de linhas nulas dessa matriz.
*/

#include <stdio.h>
#define ORDEM 4

int main(void){
	double matriz[ORDEM][ORDEM];
	printf("Digite uma matriz:\n");
	for(int linha=0; linha<ORDEM; linha++){
		for(int coluna=0; coluna<ORDEM; coluna++){
			printf("%dx%d: ",linha,coluna);
			scanf("%lf",&matriz[linha][coluna]);
		}
	}

	int linhasNulas = 0;
	for(int coluna=0; coluna<ORDEM; coluna++){
		int achou = 0;
		for(int linha=0; linha<ORDEM; linha++){
			if(matriz[linha][coluna]!=0) achou=1; 
		}
		if(achou==0) linhasNulas++;
	}

	printf("A quantidade de linhas nulas nessa matriz eh %d",linhasNulas);
	return 0;
}
