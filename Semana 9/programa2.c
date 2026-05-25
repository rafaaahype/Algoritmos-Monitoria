/*
Escreva um programa que leia um vetor de 10 números inteiros e, após terminar a leitura,
substitua todos os números ímpares pelo seu sucessor.
*/

#include <stdio.h>

int main(void){
	printf("Digite 10 numeros inteiros:\n");
	int vetor[10];
	
	for(int i=0; i<10; i++){
		scanf("%d",&vetor[i]);
		if(vetor[i]%2!=0) vetor[i]++;
	}

	for(int i=0; i<10; i++)
		printf("%d ",vetor[i]);
	return 0;
}
