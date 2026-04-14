/*
Escreva um programa que leia o valor de um ano e verifique se ele é ou não bissexto. Um
ano é bissexto se ele for divisível por quatrocentos ou se se ele for divisível por 4 mas não
for divisível por 100.
*/

#include <stdio.h>

int main(){
	printf("Digite um ano: ");
	int ano; scanf("%d",&ano);
	if(ano%400==0||(ano%4==0 && ano%100!=0)) printf("O ano eh bissexto\n");
	else printf("O ano não eh bissexto\n");
	return 0;
}
