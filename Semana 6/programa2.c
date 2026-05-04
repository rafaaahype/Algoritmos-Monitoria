/*
Escreva um programa que leia dois números inteiros M e N e calcule o valor de MN. 
A potenciação deve ser calculada utilizando-se um comando de repetição, sem a utilização da 
função pow.
*/ 

#include <stdio.h>

int main(void){
	printf("Digite dois números: ");
	int m, n; scanf("%d %d",&m,&n);
	int resultado=m;
	for (int i=1; i<n; i++)
		resultado*=resultado;
	printf("%d^%d = %d\n",m,n,resultado);
	return 0;
}
