#include <stdio.h>

int main(){
	printf("Digite um numero inteiro: ");
	int numero; scanf("%d",&numero);
	//Essa questão seria perfeita para laços de repetição, mas como os alunos ainda
	//não viram, não utilizarei.
	printf("1x%d = %d\n",numero,numero*1);
	printf("2x%d = %d\n",numero,numero*2);
	printf("3x%d = %d\n",numero,numero*3);
	printf("4x%d = %d\n",numero,numero*4);
	printf("5x%d = %d\n",numero,numero*5);
	printf("6x%d = %d\n",numero,numero*6);
	printf("7x%d = %d\n",numero,numero*7);
	printf("8x%d = %d\n",numero,numero*8);
	printf("9x%d = %d\n",numero,numero*9);
	printf("10x%d = %d\n",numero,numero*10);
	return 0;
}
