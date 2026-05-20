#include <stdio.h>

/*Escreva um programa que leia dois números inteiros M e N e imprima todos os pares (x, y)
possíveis de forma que x e y pertençam ao intervalo [M, N] e y seja sempre maior ou igual
a x. Por exemplo, se M = 2 e N = 5, o programa deve imprimir os seguintes pares (2,2), (2,3),
(2,4), (2,5), (3,3), (3,4), (3,5), (4,4), (4,5).*/

int main(){
    int m, n;
    printf("Digite os valores de M e N: ");
    scanf("%d %d", &m, &n);

    int x, y;
    printf("Os pares sao:\n");
    for (x = m; x <= n; x++) {
        for (y = x; y <= n; y++) {
            printf("(%d,%d) ", x, y);
        }
        printf("\n"); 
    
    return 0;
}