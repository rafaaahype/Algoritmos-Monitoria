/*
A matemática prova que números inteiros podem ser representados de maneira única como
um produto de potências de números primos distintos. Este produto é chamado de
decomposição em fatores primos do número e os expoentes são chamados de
multiplicidade do primo respectivo. Por exemplo, 360 = 23
x32
x5 e 21 = 3X7. Com base nessas
informações, escreva um programa em pascal que obtenha a decomposição em fatores
primos de um número inteiro positivo informado pelo usuário.
*/ 

#include <stdio.h>
int main(){
    int numero, fator=2, multiplicidade;
    printf("Digite um numero natural para ser fatorado: ");
    scanf("%d", &numero);
    while(numero>1){
        multiplicidade=0;
        while(numero%fator==0){
            numero/=fator;
            multiplicidade++;
        }
        if(multiplicidade>0) printf("%d ^ %d\n", fator, multiplicidade);
        fator++; 
    }
    return 0;
}
