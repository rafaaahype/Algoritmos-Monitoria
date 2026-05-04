/*
Escreva um programa que leia um número inteiro N e imprima a figura abaixo, onde N é o
número de elementos impressos na primeira linha. No exemplo abaixo, foi considerado que
N=5.
*****
****
***
**
*
*/

#include <stdio.h>

int main(void){
	printf("Digite um numero inteiro n: ");
	int numero; scanf("%d",&numero);
	for(int coluna=1; coluna<=numero; coluna++){
		for(int linha=numero; linha>=coluna; linha--) printf("*");
		putchar('\n');
	}
	return 0;
}
