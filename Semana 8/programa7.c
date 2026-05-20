#include <stdio.h>

#include <math.h>
/*Escreva um programa que leia o valor de uma precisão desejada pelo usuário e calcule o
valor de Pi com esta precisão. A aproximação é calculada através da equação Pi = 4 - 4/3 +
4/5 - 4/7 + 4/9 - 4/11 + ..., e assim sucessivamente. O processamento deve ser encerrado
quando a variação entre os dois últimos valores calculados for inferior à precisão desejada
pelo usuário (Por exemplo 0.0001).*/
int main(){
    float precisao,valorAntigo;
    scanf("%f",&precisao);
    float pi = 4;
    float valorAtual = pi;
    int divisor = 3;
    int somarOuSubtrair = 1;
    do {
        valorAntigo = valorAtual;
        if (somarOuSubtrair == 1){
            valorAtual -= pi / divisor; 
            somarOuSubtrair *= -1;
        }
        else {
            valorAtual += pi / divisor;
            somarOuSubtrair *= -1;
        }
        divisor += 2;
        
    } while (fabs(valorAntigo - valorAtual) >= precisao);
    printf("Valor: %f\n",valorAtual);
    return 0;
}
