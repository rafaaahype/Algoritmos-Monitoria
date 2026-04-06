#include <stdio.h>

int main(){
	printf("Digite três numeros distintos: ");
	int a, b, c; scanf("%d %d %d",&a,&b,&c);
	int maior = a;
	if(b>maior) maior=b;
	if(c>maior) maior=c;
	printf("O maior numero informado eh %d\n",maior);
	return 0;
}
