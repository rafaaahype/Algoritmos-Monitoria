/*
Escreva um programa que leia um número inteiro e imprima o enésimo termo da série de
Fibonacci. O cálculo desse termo deve ser feito por meio de um subprograma.
*/
#include <stdio.h>

int enesimoFibonacci(int numero){
	int a=1, b=1, c=0;
	if(numero==1 || numero==2) return 1;
	int aux = numero-2;
	while(aux){
		c = a+b;
		a=b;
		b=c;
		aux--;
	}
	return c;
}

int main(void){
	printf("Digite um numero: ");
	int num; scanf("%d",&num);
	int res = enesimoFibonacci(num);
	printf("\nO termo num %d da sequencia eh %d\n",num,res);
	return 0;
}
