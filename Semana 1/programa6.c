#include <stdio.h>
#include <math.h>

int main(){
	printf("Digite o valor do seno de um angulo: ");
	double seno; scanf("%lf",&seno);
	double cosseno = sqrt(1-pow(seno,2));
	printf("O valor absoluto do cosseno eh %.2lf",cosseno);
	return 0;
}
