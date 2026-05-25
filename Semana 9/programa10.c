/*
(OPI -2013) Um escritório de informática possui um corredor bem amplo com N salas. Em
um certo final de semana, o vigia resolveu tomar cachaça e brincar de abrir e fechar as
portas das salas para passar o tempo. Na primeira rodada, ele abriu todas as portas das
salas. Na segunda rodada, ele fechou as portas de todas as salas com números pare. Na
terceira rodada, ele visitou todas as salas cujo número era um múltiplo de 3. Se a porta da
sala estivesse aberta, ele a fechava. Se a porta da sala estivesse fechada, ele a abria. Ele
repetiu esta brincadeira até a N-ésima rodada. Com base nessas informações, escreva um
programa que leia o número de portas existentes no escritório e identifique quantas
portas ficaram abertas após o vigia desmaiar.
*/
#include <stdio.h>

int main(void){
	printf("Digite o numero de portas: ");
	int portas; scanf("%d",&portas);
	int portasStatus[portas+1];

	//Abrindo todas as portas 
	for(int i=1; i<=portas; i++){
		portasStatus[i] = 1;
	}

	//Fechando as portas pares
	for(int i=1; i<=portas; i++){
		if(i%2==0) portasStatus[i] = 0;
	}

	//Terceira rodada em diante
	for(int i=3; i<=portas; i++){
		for(int k=1; k<=portas; k++){
			if(k%i==0){
				if(portasStatus[k]) portasStatus[k]=0;
				else portasStatus[k] = 1;
			}
		}
	}

	int portasAbertas=0;
	for(int i=1; i<=portas; i++) if(portasStatus[i]==1) portasAbertas++;
	printf("Numero de Portas\tPortas Abertas\n");
	printf("%d\t",portas); printf("%d\n",portasAbertas);

	return 0;
}
