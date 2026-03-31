#include <stdio.h>
#define PrecoKWH 0.35
#define ICMS 0.17
#define TaxaIluminacao 15

int main() {
	printf("Digite a leitura anterior e a atual: ");
    	double leituraAnterior, leituraAtual;
    	scanf("%f %f", &leituraAnterior, &leituraAtual);

    	float consumo = leituraAnterior;
    	float valorConsumo = consumo * PrecoKWH;
		float icms = valorConsumo * ICMS;
    	float total = valorConsumo + icms + TaxaIluminacao;

    	printf("Consumo: %.2fKWh\n", consumo);
    	printf("Valor do consumo: %.2fR$\n", valorConsumo);
    	printf("ICMS: %.2f R$\n", icms);
    	printf("Taxa iluminacao publica: %.2fR$\n", TaxaIluminacao);
    	printf("Total a pagar: %.2fR$\n", total);
    	return 0;
}
