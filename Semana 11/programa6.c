/*
Escreva um programa que leia dois vetores de 5 números inteiros ordenados em
ordem decrescente e gere um vetor de 10 vetores ordenado em ordem crescente. Por
exemplo, se o primeiro vetor for {1, 3, 5, 7, 9} e o segundo for {2, 4, 6, 10, 12}, o terceiro
vetor será {1, 2, 3, 4, 5, 6, 7, 9, 10, 12}.
*/

#include <stdio.h>
#define ORDEM 5

int main(void){
	int vetA[ORDEM], vetB[ORDEM], vetC[ORDEM*2];
	printf("Digite os valores do vetor A: ");
	for(int i=0; i<ORDEM; i++) scanf("%d",&vetA[i]);
	printf("Digite os valores do vetor B: ");
	for(int i=0; i<ORDEM; i++) scanf("%d",&vetB[i]);

	int indA=0, indB=0, indC=0; //Leia-se "Indice A" por ex...
	
	while(indC<ORDEM && indB<ORDEM)
		vetC[indC++] = vetA[indA]<vetB[indB]?vetA[indA++]:vetB[indB++];

	while(indA<ORDEM)
		vetC[indC++] = vetA[indA++];
	while(indB<ORDEM)
		vetC[indC++] = vetB[indB++]; 

	return 0;
}
