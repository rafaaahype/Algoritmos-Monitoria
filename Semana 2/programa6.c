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
