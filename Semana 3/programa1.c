/*Escreva um programa que leia um número inteiro e determine o seu valor absoluto. O valor
absoluto deve ser calculado sem o uso de qualquer função oferecida pela linguagem.*/
#include <stdio.h>

int main (){
    int n;
    scanf("%d",&n);
    if (n >= 0){
        printf("Valor absoluto: %d\n",n);
    }
    else {
        printf("Valor absoluto: %d\n",n * -1);
    }
    return 0;
}


