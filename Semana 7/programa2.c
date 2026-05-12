#include <stdio.h>

int main(void){
	printf("Digite um numero inteiro positivo: ");
	int n; scanf("%d",&n);
	int a=1, b=1, c;
	while(b<=n){
		c=a+b;
		a=b;
		b=c;
		printf("%d ",a);
	}
	return 0;
}
