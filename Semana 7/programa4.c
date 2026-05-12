#include <stdio.h>

int main(void){
	printf("Digite um numero inteiro positivo m e n: ");
	int m, n; scanf("%d %d",&m,&n);
	int a=1, b=1, c;
	while(c<=n){
		c=a+b;
		a=b;
		b=c;
		if(a>=m) printf("%d ",a);
	}
	return 0;
}
