#include <stdio.h>
#define GUICHES 5
#define TEMPOCHECKIN 15
int main(void) {
    printf("Digite a sua posicao: ");
    int posicao; scanf("%d",&posicao);
    int guiche = ((posicao-1)%GUICHES)+1;
    int rodadasAnteriores = (posicao-1)/GUICHES;
    int espera = rodadasAnteriores*TEMPOCHECKIN;

    printf("Guiche: %d\n",guiche);
    printf("Espera: %d minutos\n", espera);

    return 0;
}
