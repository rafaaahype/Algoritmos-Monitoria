#include <stdio.h>
#include <math.h>
int main(){
	printf("Digite as coordenadas do ponto P: ");
	float xP, yP; scanf("%f,%f",&xP,&yP);
	printf("Digite as coordenadas do ponto Q: ");
	float xQ, yQ; scanf("%f,%f",&xQ,&yQ);
	float distancia = sqrt(pow(xP-xQ,2)+pow(yP-yQ,2));
	printf("A distancia entre os dois pontos eh %.2f",distancia);
	return 0;
}
