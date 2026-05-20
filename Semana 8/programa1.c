#include <stdio.h>
/*
Escreva um programa que leia um número inteiro positivo N e informe todos os múltiplos
de N que existem no intervalo entre 1 e 100.
*/

int main(){
    int n;
    scanf("%d",&n);
    for (int i = 1; i <= 100; i++){
        if (i % n == 0){
            printf("%3d\n", i);
        }
    }
    return 0;
}