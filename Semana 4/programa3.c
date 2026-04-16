/*
    Escreva um programa que leia as coordenadas x e y de um ponto e verifique se esse ponto
    pertence à reta y = 2x +1.
*/
#include <stdio.h>
int main (){
    float x,y;
    scanf("%f%f",&x,&y);
    if (y == (2 * x + 1)){
        printf("Pertence");
    }
    else {
        printf("Nao pertence");
    }
    return 0;
}