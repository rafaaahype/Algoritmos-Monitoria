/*
Escreva um programa que leia um vetor de vinte caracteres e verifique se o vetor é ou não
um palíndromo.
*/
#include <stdio.h>
#include <string.h>

int main(void){
	printf("Digite uma palavra de ate 20 caracteres:\n");
	char palavra[20]; scanf("%s",palavra);
	int tamanhoPalavra = strlen(palavra);
	int ehPalindromo = 1;
	
	for(int i=0; i<tamanhoPalavra/2 && ehPalindromo==1; i++)
		if(palavra[i]!=palavra[tamanhoPalavra-1-i])
			ehPalindromo=0;
	
	if(ehPalindromo) printf("A palavra eh um palindromo\n");
	else printf("A palavra nao eh um palindromo\n");
	return 0;
}
