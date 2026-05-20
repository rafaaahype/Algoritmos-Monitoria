#include <stdio.h>

/*Escreva um programa que leia um número inteiro positivo N e imprima a maior quantidade
possível de números inteiros positivos de forma que a soma de todos os números impressos
seja menor ou igual a N.*/

int main(){
    int n;
    scanf("%d", &n);
    
    int soma = 0;
    int i = 1;

    printf("Os numeros sao: ");
    while (soma + i <= n) {
        soma += i;
        printf("%d ", i);
        i++;
    }
    printf("\n");
    
    return 0;
}