/*
 *Escreva um programa que leia um número inteiro N e imprima todos os seus divisores exatos.
*/

#include <stdio.h>

int main(){
	printf("Digite um numero inteiro: ");
	int numero; scanf("%d",&numero);
	int limite = numero<0?-1:1;
	for(int divisores = 1; divisores<=numero*limite; divisores++)
		if(numero%divisores==0) {
			printf("%d\n",divisores);
			if(limite==-1) printf("%d\n",-divisores);
		}
	return 0;
}
