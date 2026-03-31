/*Escreva um programa que leia o nome e a quantidade de votos recebidos por cada um dos
três candidatos a prefeito de uma cidade e calcule o percentual de votos recebidos por cada
candidato. Para resolver esse programa, considere que não houve votos brancos e nem
nulos.*/
#include <stdio.h>
int main(){
    int totalDeVotosCandidatoUm, totalDeVotosCandidatoDois, totalDeVotosCandidatoTres;
    float total;
    char CandidatoUm[10],CandidatoDois[10],CandidatoTres[10];
    printf("Candidato Um:\n Nome:\n");
    fgets(CandidatoUm,9,stdin);
    printf("Total de votos Candidato Um:\n");
    scanf("%d",&totalDeVotosCandidatoUm);
    getchar();
    printf("Candidato Dois:\n Nome:\n");
    fgets(CandidatoDois,9,stdin);
    printf("Total de votos Candidato Dois:\n");
    scanf("%d",&totalDeVotosCandidatoDois);
    getchar();
    printf("Candidato Três:\n Nome:\n");
    fgets(CandidatoTres,9,stdin);
    printf("Total de votos Candidato Três:\n");
    scanf("%d",&totalDeVotosCandidatoTres);

    total = totalDeVotosCandidatoUm + totalDeVotosCandidatoDois + totalDeVotosCandidatoTres;

    printf("Porcentagem Candidato %s: %.2f%%\n",CandidatoUm,(totalDeVotosCandidatoUm / total * 100));
    printf("Porcentagem Candidato %s: %.2f%%\n",CandidatoDois,(totalDeVotosCandidatoDois / total * 100));
    printf("Porcentagem Candidato %s: %.2f%%\n",CandidatoTres,(totalDeVotosCandidatoTres / total * 100));
    return 0;
}