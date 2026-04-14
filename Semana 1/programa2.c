/*
Escreva um programa que leia o valor da base e da altura de um triângulo e calcule a sua
área.
*/
#include <stdio.h>

int main(){
	printf("Digite o valor da base e da altura :");
	int base, altura; scanf("%d%d", &base, &altura);
	int areaTriangulo = (base*altura)/2;
	printf("A area do triangulo eh %d",areaTriangulo);
	return 0;
}

