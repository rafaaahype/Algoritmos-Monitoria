/*
Escreva um programa que leia um texto e, em seguida, leia dois caracteres x e y e substitua,
no texto informado, todas as ocorrências do caractere x pelo caractere y. Por exemplo, se o
texto informado foi “banana”, o caractere x for “a” e o caractere y for “e”, o texto deve ser
alterado para “benene”.
*/

#include <stdio.h>

int main(){
	printf("Digite uma palavra: ");
	char palavra[21]; scanf("%s",palavra);
	printf("Digite duas letras x e y para fazer uma substituição: ");
	char x, y; scanf(" %c %c",&x,&y);
	for(int i=0; palavra[i]!='\0'; i++) if(palavra[i]==x) palavra[i] = y;
	printf("%s",palavra);
	return 0;
}
