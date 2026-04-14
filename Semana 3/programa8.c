/*
Alfredo tem um carro flex e sempre fica na dúvida se é melhor abastecê-lo com álcool ou
gasolina. Um dia um de seus amigos o ensinou a seguinte dica: “Pegue o valor do preço da
gasolina e multiplique por 0,7. Se o valor for menor ou igual ao valor do preço do álcool,
abasteça com gasolina. Caso contrário, abasteça com álcool.” Com base nestas informações,
escreva um programa que leia o preço do litro da gasolina e do álcool e verifique se é melhor
abastecer com álcool ou com gasolina.
*/

#include <stdio.h>

int main(){
	printf("Digite o preço do litro da gasolina e do alcool: ");
	float gasolina, alcool; scanf("%f %f",&gasolina,&alcool);
	int checagemPreco = gasolina*0.7;
	if(checagemPreco<=alcool) printf("Abasteça com gasolina\n");
	else printf("Abasteça com alcool\n");
	return 0;
}
