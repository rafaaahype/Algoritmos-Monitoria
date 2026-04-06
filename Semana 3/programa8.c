#include <stdio.h>

int main(){
	printf("Digite o preço do litro da gasolina e do alcool: ");
	float gasolina, alcool; scanf("%f %f",&gasolina,&alcool);
	int checagemPreco = gasolina*0.7;
	if(checagemPreco<=alcool) printf("Abasteça com gasolina\n");
	else printf("Abasteça com alcool\n");
	return 0;
}
