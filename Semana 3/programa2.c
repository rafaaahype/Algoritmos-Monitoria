#include <stdio.h>

int main(){
	printf("Digite o numero de gols marcados pelo time da casa: ");
	int golsCasa; scanf("%d",&golsCasa);
	printf("Digite o numero de gols marcados pelo time visitante: ");
	int golsVisitante; scanf("%d",&golsVisitante);
	if(golsCasa>golsVisitante) printf("O time da casa venceu!\n");
	else if(golsVisitante>golsCasa) printf("O time visitante venceu!\n");
	else printf("O jogo terminou em um empate.\n");
	return 0;
}
