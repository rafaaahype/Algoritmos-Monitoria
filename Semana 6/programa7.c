#include <stdio.h>

/*Escreva um programa que leia um número inteiro N e imprima a figura abaixo, onde N é o
número de elementos impressos na primeira linha. No exemplo abaixo, foi considerado que
N=5.

*****
****
***
**
*
*/

int main(){
    int n;
    scanf("%d", &n);

    int i, j;
    for (i = n; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}