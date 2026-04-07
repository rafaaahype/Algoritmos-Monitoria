/*Escreva um programa que leia a idade de uma pessoa e verifique se ela é criança (0-12 anos),
adolescente (13-17 anos), adulta (18-59) ou idosa (acima de 60 anos).*/
#include <stdio.h>

int main(){
    int idade;
    scanf("%d",&idade);
    if (idade >= 0 && idade <= 12) printf("Criança\n");
    else if (idade <= 17) printf("Adolescente\n");
    else if (idade <= 59) printf("Adulto\n");
    else printf("Idoso");
    return 0;
}