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
