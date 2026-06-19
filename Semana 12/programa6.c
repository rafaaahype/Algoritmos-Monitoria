/*
Escreva um programa que leia um vetor de 10 números inteiros e identifique a soma de
todos os seus números, a média aritmética, o maior valor, o menor valor, a posição do maior
valor e a posição do menor valor. Cada uma dessas informações deve ser calculada por meio
de um subprograma.
*/

#include <stdio.h>

int soma(int vetor[10]){
	int res=0;
	for(int i=0; i<10; i++) res+=vetor[i];
	return res;
}

int mediaAritmetica(int vetor[10]){
	return soma(vetor)/10;
}

int maiorValor(int vetor[10]){
	int maior_valor = vetor[0];
	for(int i=1; i<10; i++)
		if(vetor[i]>maior_valor) maior_valor = vetor[i];
	return maior_valor;
}

int menorValor(int vetor[10]){
	int menor_valor = vetor[0];
	for(int i=1; i<10; i++)
		if(vetor[i]<menor_valor) menor_valor = vetor[i];
	return menor_valor;
}

int posMaiorValor(int vetor[10]){
	int posicao_maior = 0;
	for(int i=1; i<10; i++)
		if(vetor[i]>vetor[posicao_maior]) posicao_maior = i;
	return posicao_maior;
}

int posMenorValor(int vetor[10]){
	int posicao_menor = 0;
	for(int i=1; i<10; i++)
		if(vetor[i]<vetor[posicao_menor]) posicao_menor = i;
	return posicao_menor;
}

int main(void){
	int vetor[10]; for(int i=0; i<10; i++) scanf("%d",&vetor[i]);
	int somaVetor = soma(vetor);
	int mediaAritmeticaVetor = mediaAritmetica(vetor);
	int maiorValorVetor = maiorValor(vetor);
	int menorValorVetor = menorValor(vetor);
	int posMaiorValorVetor = posMaiorValor(vetor);
	int posMenorValorVetor = posMenorValor(vetor);
	printf("Soma: %d\n",somaVetor);
	printf("Média Aritmética: %d\n",mediaAritmeticaVetor);
	printf("Maior Valor: %d\n",maiorValorVetor);
	printf("Menor Valor: %d\n",menorValorVetor);
	printf("Posicao Maior Valor: %d\n",posMaiorValorVetor);
	printf("Posicao Menor Valor: %d\n",posMenorValorVetor);
	return 0;
}
