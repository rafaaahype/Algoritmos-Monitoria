#include <stdio.h>

/*Escreva um programa que leia o peso e a altura de um grupo de 10 pessoas e calcule o
percentual de pessoas abaixo do peso, o percentual de pessoas acima do peso e o
percentual de pessoas que estão dentro da faixa de peso adequada.*/

int main(){
    float peso, altura, imc;
    int i;
    int abaixo = 0;
    int normal = 0;
    int acima = 0;

    for (i = 0; i < 10; i++) {
        printf("Digite o peso (kg) e a altura (m) da pessoa %d: ", i + 1);
        scanf("%f %f", &peso, &altura);

        if (altura > 0) {
            imc = peso / (altura * altura);
            if (imc < 18.5) {
                abaixo++;
            } else if (imc >= 25) {
                acima++;
            } else {
                normal++;
            }
        } else {
            printf("Altura invalida. Tente novamente.\n");
            i--; 
        }
    }

    printf("\nResultados:\n");
    printf("Pessoas abaixo do peso: %.1f%%\n", (abaixo / 10.0) * 100);
    printf("Pessoas com peso adequado: %.1f%%\n", (normal / 10.0) * 100);
    printf("Pessoas acima do peso: %.1f%%\n", (acima / 10.0) * 100);

    return 0;
}