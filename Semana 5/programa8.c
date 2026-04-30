/*
Escreva um programa que leia um texto e imprima o seu valor correspondente em caixa
alta. Por exemplo, se o texto informado foi “Eu amo programar”, o programa deve imprimir
o texto “EU AMO PROGRAMAR”. Para resolver a questão, você não pode usar a função
toupper oferecida pela linguagem C.
*/ 

#include <stdio.h>

int main(){
	printf("Digite um texto de até 100 caracteres: ");
	char texto[101]; fgets(texto, sizeof(texto), stdin); 
	for(int i=0; texto[i]!='\0'; i++){
		if(texto[i]>='a'&&texto[i]<='z') printf("%c",texto[i]-('a'-'A'));
		else printf("%c",texto[i]);
	}
	return 0;
}

