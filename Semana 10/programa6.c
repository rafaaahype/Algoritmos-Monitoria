/*
Escreva um programa que leia uma matriz quadrada de ordem 5 de números inteiros e um
inteiro N e verifique em quantas linhas e colunas diferentes o número N aparece dentro da
matriz.
*/

#include <stdio.h>
#define ORDEM 5

int main(void){
	printf("Digite os valores de uma matriz:\n");
	int matriz[ORDEM][ORDEM];
	for(int linha=0; linha<ORDEM; linha++)
		for(int coluna=0; coluna<ORDEM; coluna++){
			printf("%dx%d: ",linha,coluna);
			scanf("%d", &matriz[linha][coluna]);
		}

	printf("Digite um numero inteiro: ");
	int num; scanf("%d", &num);

	int encontrou;
	int linhasComNumero = 0;
	for(int linha = 0; linha<ORDEM; linha++){
		encontrou = 0;
		for(int coluna=0; coluna<ORDEM; coluna++){ 
			if(matriz[linha][coluna] == num){
				encontrou = 1;
			}
		}
		if(encontrou) linhasComNumero++;
	}

	encontrou = 0;
	int colunasComNumero = 0;
	for(int coluna=0; coluna<ORDEM; coluna++){
		encontrou = 0;
		for(int linha=0; linha<ORDEM; linha++){
			if(matriz[linha][coluna]==num){
				encontrou = 1;
			}
		}
		if(encontrou) colunasComNumero++;
	}

	printf("Ocorrencias em Linha: %d\tOcorrencias em Coluna: %d",linhasComNumero,colunasComNumero);
	return 0;
}

