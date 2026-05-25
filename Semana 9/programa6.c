/*
Escreva um programa que leia duas matrizes quadradas de ordem 3 de números reais e
calcule a soma dessas duas matrizes.
*/
#include <stdio.h>
#define ORDEM 3

int main(void){
	double matrizA[ORDEM][ORDEM];
	printf("Digite os valores de uma matriz:\n");
	for(int linha=0; linha<ORDEM; linha++){
		for(int coluna=0; coluna<ORDEM; coluna++){
			printf("%dx%d:",linha+1,coluna+1);
			scanf("%lf",&matrizA[linha][coluna]);
		}
	}
	
	printf("Digite os valores de uma segunda matriz:\n");
	double matrizB[ORDEM][ORDEM];
	for(int linha=0; linha<ORDEM; linha++){
		for(int coluna=0; coluna<ORDEM; coluna++){
			printf("%dx%d:",linha+1,coluna+1);
			scanf("%lf",&matrizB[linha][coluna]);
		}
	}

	//soma e resultado ao mesmo tempo
	for(int linha=0; linha<ORDEM; linha++){
		for(int coluna=0; coluna<ORDEM; coluna++){
			printf("%.2f ",matrizA[linha][coluna]+matrizB[linha][coluna]);
		}
		putchar('\n');
	}
	return 0;
}
