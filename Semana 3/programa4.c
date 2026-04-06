#include <stdio.h>

int main(){
	printf("Digite um ano: ");
	int ano; scanf("%d",&ano);
	if(ano%400==0||(ano%4==0 && ano%100!=0)) printf("O ano eh bissexto\n");
	else printf("O ano não eh bissexto\n");
	return 0;
}
