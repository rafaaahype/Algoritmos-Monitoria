/*
Escreva um programa que simule o funcionamento de um caixa eletrônico. O programa
deve permitir a realização de vários saques. Para cada saque o programa deve ler o valor a
ser sacado pelo usuário (que deve ser informado como um número inteiro) e identificar
quantas cédulas de cada tipo devem ser usadas para que o saque seja efetuado. Você pode
supor que o caixa tem cédulas de R$ 10,00, R$ 20,00, R$ 50,00 e R$ 100,00. O valor máximo
de um saque é R$ 1000,00 e, para cada saque, deve-se priorizar o uso das cédulas maiores.
Por exemplo, caso o usuário queira fazer um saque de R$ 100,00, o programa deve sugerir
uma única cédula de R$ 100,00 e não duas de R$ 50,00. Caso o usuário informe um valor
que não possa ser sacado (por exemplo, R$ 75,00), o programa deve informar o usuário
sobre a impossibilidade de se realizar o saque. O processo de leitura dos saques deve ser
encerrado quando o usuário informar um saque com valor 0, que não deve ser processado.
Após o fim do processo de leitura, o programa deve informar a soma de todos os saques
realizados e o total de cada cédula para a realização de todos os saques realizados.
*/ 

#include <stdio.h>

int main(void){
	int saque, totalSaques=0;
	int totalCedulaCem=0, totalCedulaCinquenta=0, totalCedulaVinte=0, totalCedulaDez=0;
	do{
		printf("Digite um valor a ser sacado: ");
		scanf("%d",&saque);
		if(saque>1000 || saque%10!=0)
			printf("Valor invalido\n");
		else {
			int saqueTemp=saque; //auxiliar temporario que representa saque
			totalSaques+=saqueTemp;
			int cedulaCem=0, cedulaCinquenta=0, cedulaVinte=0, cedulaDez=0;
			if(saqueTemp>=100){
				cedulaCem+=saqueTemp/100;
				saqueTemp-=cedulaCem*100;
			}
			if(saqueTemp>=50){
				cedulaCinquenta+=saqueTemp/50;
				saqueTemp-=cedulaCinquenta*50;
			}
			if(saqueTemp>=20){
				cedulaVinte+=saqueTemp/20;
				saqueTemp-=cedulaVinte*20;
			}
			if(saqueTemp>=10){
				cedulaDez+=saqueTemp/10;
				saqueTemp-=cedulaDez*10;
			}
			printf("Cédulas de\n100: %d\n50: %d\n20: %d\n10: %d\n",
				cedulaCem, cedulaCinquenta, cedulaVinte, cedulaDez);
			totalCedulaCem+=cedulaCem; totalCedulaCinquenta+=cedulaCinquenta;
			totalCedulaVinte+=totalCedulaVinte; totalCedulaDez+=cedulaDez;
		}
	}while(saque!=0);
	printf("Total sacado: %d\n",totalSaques);
	printf("Total de Cedulas utilizadas: \n");
	printf("Cem: %d\nCinquenta: %d\nVinte: %d\nDez: %d\n",
		totalCedulaCem,totalCedulaCinquenta,totalCedulaVinte,totalCedulaDez);
	return 0;
}
