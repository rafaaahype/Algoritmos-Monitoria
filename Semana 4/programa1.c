/*
Escreva um programa que leia três números distintos e identifique o número que não é nem
o menor e nem o maior número.
*/
#include <stdio.h>

int main(){
    int num1, num2, num3, maior;
    scanf("%d%d%d",&num1,&num2,&num3);
    if ((num1 <= num2 && num1 >= num3) || (num1 >= num2 && num1 <= num3)) maior = num1;
    if ((num2 <= num1 && num2 >= num3) || (num2 >= num1 && num2 <= num3)) maior = num2;
    if ((num3 <= num1 && num3 >= num2) || (num3 >= num1 && num3 <= num2)) maior = num3;

    printf("Segundo maior: %d",maior);
    return 0;
}