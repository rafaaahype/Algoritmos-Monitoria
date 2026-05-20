#include <stdio.h>
/*Escreva um programa que leia um número inteiro positivo N e informe o primeiro termo da
série de Fibonacci que é maior do que N.*/

int main(){
    int n;
    scanf("%d", &n);

    int a = 0;
    int b = 1;
    int proximo = 0;

    while (proximo <= n) {
        
        if (n == 0) {
            proximo = 1;
            break;
        }
        proximo = a + b;
        a = b;
        b = proximo;
    }

    printf("O primeiro termo da serie de Fibonacci maior que %d e: %d\n", n, proximo);
    
    return 0;
}