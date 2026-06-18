#include <stdio.h>

int main(void){
	int numero; scanf("%d",&numero);
	int vetor[200] = {};
	int auxiliar = numero;
	int i=0;
	while(auxiliar>0){
		vetor[i] = auxiliar%2;
		auxiliar = auxiliar/2;
		i++;
	}
	for(int k=i-1; k>=0; k--){
		printf("%d",vetor[k]);
	}
	return 0;
}
