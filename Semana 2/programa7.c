/*Escreva um programa que leia a quantidade de horas trabalhadas por um funcionário de
uma empresa durante um mês e o valor de cada hora trabalhada e determine o seu
pagamento. O programa deve considerar que a carga-horária mensal do funcionário é de
160 horas e que o valor de cada hora extra corresponde ao valor da hora trabalhada
acrescido de uma taxa de 50%. Para resolver a questão, considere que a quantidade de
horas trabalhadas nunca será inferior a 160.*/

#include <stdio.h>

#define cargaHoraria 160
#define taxa 1.5
int main(){
    float valorDaHoraTrabalhada;
    int quantidadeDeHoras;
    scanf("%f%d",&valorDaHoraTrabalhada,&quantidadeDeHoras);
    float pagamento = (valorDaHoraTrabalhada * cargaHoraria) + ((quantidadeDeHoras - cargaHoraria) * (valorDaHoraTrabalhada * taxa));
    printf("Pagamento Total: R$%.2f\n",pagamento);
    return 0;
}
//170hrs, R$3/h-> (160 * 3) + ((170-160 = 10) * 4.5)
//Valor normal + valor extra
