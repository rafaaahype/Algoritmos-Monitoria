/*
Escreva um programa que leia um valor inteiro a ser sacado pelo usuário e identifique
quantas cédulas de cada tipo devem ser usadas para que o saque seja efetuado. Você pode
supor que o caixa tem cédulas de R$ 10,00, R$ 20,00, R$ 50,00 e R$ 100,00. O valor máximo
de um saque é R$ 1000,00 e, para cada saque, deve-se priorizar o uso das cédulas maiores.
*/

#include <stdio.h>

int main(){
	printf("Digite um valor de saque de até R$1000: ");
	int saque; scanf("%d",&saque);
	if(saque>1000||saque<0){
		printf("Você digitou um valor inválido.");
		return 1; //Isso daqui encerra o programa caso caia na condição. :P
	}
	int cedulaCem=0, cedulaCinquenta=0, cedulaVinte=0, cedulaDez=0;
	if(saque>=100){
		cedulaCem+=saque/100;
		saque-=cedulaCem*100;
	}
	if(saque>=50){
		cedulaCinquenta+=saque/50;
		saque-=cedulaCinquenta*50;
	}
	if(saque>=20){
		cedulaVinte+=saque/20;
		saque-=cedulaVinte*20;
	}
	if(saque>=10){
		cedulaDez+=saque/10;
		saque-=cedulaDez*10;
	}
	printf("Cédulas de\n100: %d\n50: %d\n20: %d\n10: %d\n", cedulaCem, cedulaCinquenta, cedulaVinte, cedulaDez);
	return 0;
}
