#include <stdio.h>

int main() {
        int inicioIntervalo;    //valor do inicio do intervalo
        int fimIntervalo;   //valor do fim do intervalo
        int soma = 0; //variavel que vou guardar a soma dos valores

        scanf("%d%d",&inicioIntervalo, &fimIntervalo);

        for (int intervalo = inicioIntervalo + 1 ; intervalo < fimIntervalo ; intervalo++){
                soma += intervalo;
        }

        printf("%d\n",soma);

        return 0;
}