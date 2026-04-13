/*
Escreva um programa que leia um caractere correspondente ao estado civil de uma pessoa
e imprima o estado civil informado por extenso. As opções para o estado civil são: S
(solteiro), C (casado), D (divorciado) e V (viúvo).
*/

#include <stdio.h>

int main(){
	printf("S-Solteiro, C-Casado, D-Divorciado, V-Viúvo\n");
	printf("Digite o caractere correspondente ao seu estado civil: ");
	char c; scanf("%c",&c);
	switch(c){
		case 's': case 'S': printf("Você é solteiro(a)\n"); break;
		case 'c': case 'C': printf("Você é casado(a)\n"); break;
		case 'd': case 'D': printf("Você é divorciado(a)\n"); break; 
		case 'v': case 'V': printf("Você é viúvo(a)\n"); break;
		default: printf("Você digitou um caractere que não corresponde a nenhuma das opções.\n");
	}
	return 0;
}
