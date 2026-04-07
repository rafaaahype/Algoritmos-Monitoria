/*Escreva um programa que leia as coordenadas x e y de um ponto e verifique a quantidade
de quadrantes a que este ponto pertence.*/

#include <stdio.h>

int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    if (x == 0 && y == 0) printf("Quatro quadrantes\n");
    else if (x == 0 || y == 0) printf("Dois quadrantes\n");
    else printf("Um quadrante\n");
    return 0;
}