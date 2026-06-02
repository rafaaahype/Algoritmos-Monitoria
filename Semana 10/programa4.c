/*
Escreva um programa que leia dois vetores de três números reais cada e calcule o valor
absoluto cosseno do ângulo formado pelos dois vetores. O cosseno do ângulo formado por
dois vetores u = (x1, x2, ..., xN) e v = (y1, y2, ..., yN) é calculado através da seguinte 
fórmula:

[ nao tem como eu colocar a formula aqui, entao voce vai ter que checar o pdf :( ]

*/

#include <stdio.h>
#include <math.h>
#define TAMANHO 3

int main(void){
	printf("Digite o primeiro vetor: ");
	double vetorA[TAMANHO], vetorB[TAMANHO];
	for(int i=0; i<TAMANHO; i++)
		scanf("%lf",&vetorA[i]);
	printf("Digite o segundo vetor: ");
	for(int i=0; i<TAMANHO; i++)
		scanf("%lf",&vetorB[i]);

	double AB;
	for(int i=0; i<TAMANHO; i++)
		AB+=vetorA[i]*vetorB[i];
	
	double modA, modB;
	for(int i=0; i<TAMANHO; i++)
		modA+=pow(vetorA[i], 2);
	modA = sqrt(modA);
	for(int i=0; i<TAMANHO; i++)
		modB+=pow(vetorB[i], 2);
	modB = sqrt(modB);

	double cossenoDoAngulo = AB/(modA*modB);

	printf("Cosseno do Angulo: %.2lf", cossenoDoAngulo);
	return 0;
}
