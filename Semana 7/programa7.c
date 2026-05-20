#include <stdio.h>

/*Escreva um programa que leia um número inteiro N e um número inteiro K e identifique o
k-ésimo algarismo (da direita para a esquerda) do número N. Por exemplo, se o valor de N
for 2425 e o valor de K for igual a 3, a resposta do programa deve ser 4. Caso o valor de k
seja maior do que a quantidade de algarismos de N, a resposta do programa deve ser 0.*/

int main() {
    int n, k;
    scanf("%d%d", &n,&k);

    int i;
    for (i = 1; i < k; i++) {
        n = n / 10;
    }

    int kesimoAlgarismo = n % 10;

    printf("O %d-esimo algarismo de N e: %d\n", k, kesimoAlgarismo);

    return 0;
}