/*
Escreva um programa que leia um número inteiro N e imprima os N primeiros termos da
série de Fibonacci. Considere que a série de Fibonacci 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...
*/ 

#include <stdio.h>

int main(void){
	printf("Digite um numero inteiro n: ");
	int n; scanf("%d",&n);
	int a=1,b=1,c=1;
	for(int i=3; i<=n && n>2; i++){
		c=a+b;
		a=b;
		b=c;
	}
	printf("%d ",c);
	return 0;
}
