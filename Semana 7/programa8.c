/*
O Banco do Povo está realizando uma grande promoção em seus financiamentos. Ele
financia qualquer valor em até 240 prestações. O valor da primeira prestação corresponde
ao valor do empréstimo dividido pelo número de parcelas. Os valores das demais prestações
correspondem ao valor da parcela anterior acrescido de uma taxa de juros de 7%. Escreva
um programa que leia o valor a ser financiado por um cliente e o número de prestações
desejadas e calcule: o valor de cada prestação, o valor total que o cliente vai pagar pelo
empréstimo e a diferença entre o valor a ser pago e o valor financiado.
*/

#include <stdio.h>

int main(void){
	printf("Digite o valor a ser financiado e o numero de prestações (max 240):");
	float financiamento; int prestacoes; scanf("%f %d",&financiamento,&prestacoes);
	float parcela = financiamento/prestacoes, total=0;
	printf("Valor da parcela 1: %.2f\n",parcela);
	total+=parcela;
	for(int i=2; i<=prestacoes; i++){
		parcela*=1.07;
		printf("Valor da parcecla %d: %.2f\n",i,parcela);
		total+=parcela;
	}
	printf("O valor a ser pago no final será: %.2f\n",total);
	return 0;
}
