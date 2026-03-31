/*Escreva um programa que leia o número total de questões existentes em uma prova e o
número de questões que um candidato acertou e determine o seu percentual de acertos e
o seu percentual de erros.*/
#include <stdio.h>
int main(){
    float totalQuestoes;
    int acertos;
    int erros;
    scanf("%f%d%d",&totalQuestoes,&acertos,&erros);
    float porcentagemAcertos = (acertos / totalQuestoes);
    float porcentagemErros = (erros / totalQuestoes);
    printf("%.0f%%\n",porcentagemAcertos*100);
    printf("%.0f%%\n",porcentagemErros*100);
    return 0;
}
