/*
    Escreva um programa que leia um verbo regular no infinitivo (da 1a, 2a ou 3a conjugação) e
    imprima a sua conjugação no presente do modo indicativo.
*/
#include <stdio.h>
#include <string.h>

int main() {
    char verbo[50];
    char radical[50];
    int tamanho;

    fgets(verbo, 50, stdin);

    verbo[strcspn(verbo, "\n")] = '\0';

    tamanho = strlen(verbo);

    if (tamanho < 2) {
        printf("Verbo inválido.\n");
        return 1;
    }

    char terminacao[3];
    terminacao[0] = verbo[tamanho - 2];
    terminacao[1] = verbo[tamanho - 1];
    terminacao[2] = '\0';

    strncpy(radical, verbo, tamanho - 2);
    radical[tamanho - 2] = '\0';

    if (strcmp(terminacao, "ar") == 0) {
        printf("Eu %so\n", radical);
        printf("Tu %sas\n", radical);
        printf("Ele/Ela %sa\n", radical);
        printf("Nós %samos\n", radical);
        printf("Vós %sais\n", radical);
        printf("Eles/Elas %sam\n", radical);
    } 
    else if (strcmp(terminacao, "er") == 0) {
        printf("Eu %so\n", radical);
        printf("Tu %ses\n", radical);
        printf("Ele/Ela %se\n", radical);
        printf("Nós %semos\n", radical);
        printf("Vós %seis\n", radical);
        printf("Eles/Elas %sem\n", radical);
    } 
    else if (strcmp(terminacao, "ir") == 0) {
        printf("Eu %so\n", radical);
        printf("Tu %ses\n", radical);
        printf("Ele/Ela %se\n", radical);
        printf("Nós %simos\n", radical);
        printf("Vós %sis\n", radical);
        printf("Eles/Elas %sem\n", radical);
    } 
    else {
        printf("Erro: O verbo digitado não termina em 'ar', 'er' ou 'ir'.\n");
    }

    return 0;
}