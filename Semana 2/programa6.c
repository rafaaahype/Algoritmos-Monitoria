/*
Escreva um programa que leia o tamanho de um arquivo em MB e a taxa de transmissão da
rede em KB/s e calcule o tempo aproximado necessário para a transmissão do arquivo. A
resposta deve ser dada através de uma mensagem na forma X horas, Y minutos e Z
segundos. Para resolver essa questão, considere que o tamanho do arquivo e a taxa de
transmissão são números inteiros e que 1 MB = 1024 KB. O tamanho do arquivo e a taxa de
download devem ser lidos como números inteiros.
*/

#include <stdio.h>
#define KB 1024
int main(){
	printf("Digite o tamanho de um arquivo MB: ");
	int mb; scanf("%d",&mb);
	printf("Digite a taxa de transmissão da rede em KB/s: ");
	int kbs; scanf("%d",&kbs);
	int kilobytes = mb*1024, tempo = kilobytes/kbs;
	printf("%d horas, %d minutos, %d segundo",(tempo/60)/60, (tempo/60)%60, tempo%60);
	return 0;
}
