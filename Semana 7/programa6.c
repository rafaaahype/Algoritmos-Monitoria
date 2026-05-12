/*
Escreva um programa que leia um número inteiro positivo e calcule a soma de todos os seus
algarismos.
*/

#include <stdio.h>

int main(void){
	printf("Digite um numero inteiro positivo: ");
	int n; scanf("%d",&n);
	int soma=0;
	while(n>0){
		soma+=n%10;
		n/=10;
	}
	printf("Soma dos algarismos: %d",soma);
	return 0;
}
