#include <stdio.h>

int main(){
	printf("Digite a distancia percorrida: ");
	int distancia; scanf("%d",&distancia);
	printf("Digite em horas o tempo que levou para percorrer a distancia: ");
	int horas; scanf("%d",&horas);
	int ms = (distancia/horas)/3.6;
	printf("%dkm/%dh = %dm/s",distancia,horas,ms);
	return 0;
}
