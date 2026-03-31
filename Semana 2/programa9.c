/*Um banco está realizando uma grande promoção em seus financiamentos. Ele financia
qualquer valor em 5 prestações. O valor da primeira prestação corresponde à 20% do valor
do empréstimo. Os valores das demais prestações correspondem ao valor da parcela
anterior acrescido de uma taxa de juros de 7%. Com base nestas informações, escreva um
programa que leia o valor a ser financiado por um cliente e calcule: o valor de cada
prestação, o valor total que o cliente vai pagar pelo empréstimo e o total de juros que o
cliente vai pagar pelo empréstimo.*/
#include <stdio.h>
#define totalParcelas 5
#define taxaDeJuros 1.07
int main(){
    float financiamento,parcela1,parcela2,parcela3,parcela4,parcela5;
    scanf("%f",&financiamento);
    parcela1 = financiamento / totalParcelas;
    parcela2 = parcela1 * taxaDeJuros;
    parcela3 = parcela2 * taxaDeJuros;
    parcela4 = parcela3 * taxaDeJuros;
    parcela5 = parcela4  * taxaDeJuros;
    float valorTotal = parcela1 + parcela2 + parcela3 + parcela4 + parcela5;
    float juros = valorTotal - financiamento;
    printf("Valor prestacao 1: %.2f\n",parcela1);
    printf("Valor prestacao 2: %.2f\n",parcela2);
    printf("Valor prestacao 3: %.2f\n",parcela3);
    printf("Valor prestacao 4: %.2f\n",parcela4);
    printf("Valor prestacao 5: %.2f\n",parcela5);
    printf("Valor total: %.2f\n",valorTotal);
    printf("Total de juros: %.2f\n",juros);
    return 0;

    
}