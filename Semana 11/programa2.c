/*
Escreva um programa que leia uma matriz quadrada de ordem 100 de números
inteiros e verifique se ela é simétrica. Uma matriz é considerada simétrica se Ai,j=Aj,i
para todos os seus elementos.
*/

#include <stdio.h>
#define ORDEM 3

int main(void){
	printf("Digite uma matriz:\n");
	int matriz[ORDEM][ORDEM];
	for(int linha=0; linha<ORDEM; linha++){
		for(int coluna=0; coluna<ORDEM; coluna++){
			scanf("%d",&matriz[linha][coluna]);
		}
	}

	int ehSimetrica = 1;
	for(int linha=0; linha<ORDEM && ehSimetrica!=0; linha++){
		for(int coluna=0; coluna<ORDEM && ehSimetrica!=0; coluna++){
			if(matriz[linha][coluna]!=matriz[coluna][linha]){
				ehSimetrica = 0;
			}
		}
	}

	if(ehSimetrica) printf("A matriz eh simetrica\n");
	else printf("A matriz nao eh simetrica\n");

	return 0;
}
