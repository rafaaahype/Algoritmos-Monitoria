/*
O IFPB precisa de um programa que faça a correção automática das provas do seu teste
de seleção. A prova, que é a mesma para todos os alunos, consiste de dez questões
objetivas, cuja resposta deve ser (a, b, c, d ou e). O programa deve ler o gabarito da prova
e, a seguir, o nome de um candidato e as opções que aparecem no seu cartão de respostas.
Para cada candidato, o programa deve imprimir o seu percentual de acertos. O
processamento deve ser encerrado quando for encontrado um candidato com o nome
 ́fim’, que não deve ser processado. O programa deve imprimir também a pontuação
média dos candidatos.
*/

#include <stdio.h>
#include <string.h>
#define QUESTOES 10

int main(void){
	printf("Digite o gabarito do teste:\n");
	char gabarito[QUESTOES];
	for(int i=0; i<QUESTOES; i++) 
		scanf(" %c",&gabarito[i]);
	char candidatoNome[21];
	printf("Digite o nome do candidato:\n");
	scanf(" %s",candidatoNome);
	int candidatos = 0, candidatosAcertos = 0;
	while(strcmp(candidatoNome, "fim")){
		candidatos++;
		printf("Digite as respostas do candidato:\n");
		char respostasCandidato[QUESTOES];
		for(int i=0; i<QUESTOES; i++)
			scanf(" %c",&respostasCandidato[i]);
		int acertos = 0;
		for(int i=0; i<QUESTOES; i++)
			if(respostasCandidato[i]==gabarito[i]) acertos++;
		candidatosAcertos+=acertos;
		float percentualAcertos = (100*acertos)/QUESTOES;
		printf("Percentual de Acertos do(a) %s: %.2f%%\n",candidatoNome,percentualAcertos);	
		printf("Digite o nome do candidato: ");
		scanf("%s",candidatoNome);
	}
	float media = (candidatosAcertos/candidatos)*QUESTOES;
	printf("\nPontuacao Media de acertos dos Candidatos: %.2f%%", media);
	return 0;
}
