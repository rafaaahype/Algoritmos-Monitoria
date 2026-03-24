#include <stdio.h>

#define polegada 2.54

int main(){
    float polegadas;
    scanf("%f",&polegadas);
    float centimetros = polegadas * polegada;
    printf("%.2f",centimetros);
    return 0;
}