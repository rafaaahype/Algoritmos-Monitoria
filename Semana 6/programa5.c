#include <stdio.h>

/*Escreva um programa que imprima todos os palíndromos que existem no intervalo [1000,
9999].*/

int main(){
    int i;
    int d1, d2, d3, d4;

    for (i = 1000; i <= 9999; i++) {
        d1 = i / 1000;
        d2 = (i / 100) % 10;
        d3 = (i / 10) % 10;
        d4 = i % 10;

        if (d1 == d4 && d2 == d3) {
            printf("%d ", i);
        }
    }
    printf("\n");
    
    return 0;
}