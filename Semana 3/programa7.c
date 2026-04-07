/*Escreva um programa que leia os valores dos três ângulos internos de um triângulo e
verifique se o mesmo é um triângulo retângulo.*/

#include <stdio.h>

int main(){
    float anguloUm,anguloDois,anguloTres;
    scanf("%f%f%f",&anguloUm,&anguloDois,&anguloTres);
    if (anguloUm + anguloDois + anguloTres == 180){
        if (anguloUm == 90 || anguloDois == 90 || anguloTres == 90){
            printf("Triangulo retangulo\n");
        }
        else {
            printf("Nao eh triangulo retangulo\n");
        }
    }
    else {
        printf("Triangulo a soma dos angulos precisa ser 180\n");
    }
    return 0;
}