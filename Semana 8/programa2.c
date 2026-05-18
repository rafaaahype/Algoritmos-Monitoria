/*
Escreva um programa que leia uma palavra e calcule a quantidade de letras dessa palavra.
Para resolver esse programa, você não pode usar a função strlen.
*/

#include <stdio.h>
int main(void){
	printf("Digite uma palavra: ");
	char palavra[100]; scanf("%s",palavra);
	int numLetras;
	for(numLetras=0;palavra[numLetras]!='\0';numLetras++){
		//repare que o for loop faz todo o trabalho sozinho kk	
	}
	printf("A quantidade de letras na palavra: %d",numLetras);
	return 0;
}
