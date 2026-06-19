/*
Escreva um programa que leia a base e o expoente de uma potenciação e calcule a
potenciação. O cálculo da potenciação deve ser feito por meio de um subprograma e você
não pode usar a função pow.
*/

#include <stdio.h>

int potenciacao(int base, int expoente){
	int res=base;
	for(int i=1; i<expoente; i++){
		res*=base;
	}
	return res;
}

int main(void){
	printf("Digite uma base e um expotense: ");
	int base, expoente; scanf("%d %d",&base,&expoente);
	int res = potenciacao(base, expoente);
	printf("\nO resultado eh %d\n",res);
	return 0;
}
