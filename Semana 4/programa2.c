/*
Escreva um programa que leia as coordenadas x e y de um ponto e verifique a qual
quadrante esse ponto pertence. Você pode supor que o ponto digitado pelo usuário
pertence a apenas um quadrante.
*/

#include <stdio.h>

int main(){
	printf("Digite as coordenadas x e y: ");
	int x, y; scanf("%d %d",&x,&y);
	if(x>0&&y>0) printf("O ponto pertence ao primeiro quadrante.\n");
	else if(x<0&&y>0) printf("O ponto pertence ao segundo quadrante.\n");
	else if(x<0&&y<0) printf("O ponto pertence ao terceiro quadrante.\n");
	else printf("O ponto pertence ao quarto quadrante.\n");
	return 0;
}
