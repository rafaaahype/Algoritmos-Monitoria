#include <stdio.h>

int main(){
	printf("Digite o termo inicial e a razao de uma PA: ");
	int termo, razao; scanf("%d%d",&termo,&razao);
	/*
	 * Essa questão ela é ideal para resolver com laços de repetição
	 * se você conhece laços de repetição sabe que um 
	 * for(int i=0; i<5; i++, termo+=razao) printf("%d : %d\n",i,termo);
	 * é o suficiente para resolver, mas como os alunos ainda não chegaram
	 * nessa parte, por ora temos isto:
	*/ 
	printf("1: %d\n",termo); termo+=razao;
	printf("2: %d\n",termo); termo+=razao;
	printf("3: %d\n",termo); termo+=razao;
	printf("4: %d\n",termo); termo+=razao;
	printf("5: %d\n",termo);
	return 0;
}
