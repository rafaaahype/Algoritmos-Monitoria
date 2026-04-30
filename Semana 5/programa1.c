#include <stdio.h>

int main() {
        int quantidadeDeImpares; //quantos impares vai imprimir
        scanf("%d",&quantidadeDeImpares);
        for (int contador = 0 , impar = 1 ; contador < quantidadeDeImpares ; contador++ , impar+=2 ){
                printf("%d\n",impar);
        }

        return 0;
}