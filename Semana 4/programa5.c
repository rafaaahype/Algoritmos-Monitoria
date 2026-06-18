/*
    Escreva um programa em que leia um número inteiro entre 1000 e 9999 e verifique se o
    número informado é ou não um palíndromo.
*/
#include <stdio.h>

int main(){
    int numero;
    scanf("%d",&numero);
    int milhar,centena,dezena,unidade;

    milhar = numero / 1000;
    centena = (numero % 1000) / 100;
    dezena = ((numero % 1000) % 100) / 10;
    unidade = numero % 10;

    if (milhar == unidade && centena == dezena){
        printf("Palindromo");
    }
    else {
        printf("Nao eh palindromo");
    }
    return 0;
}
