#include <stdio.h>
#include <ctype.h>

int main(void){
	char texto[31]; scanf("%s",texto);
	int contagem[26] = {};
	for(int i=0; texto[i]!='\0'; i++){
		if(isalpha(texto[i])){
			char letra = toupper(texto[i]);
			contagem[letra-'A']++;
		}
	}
	printf("Quantidade de cada letra:\n");
	for(int i=0; i<26; i++){
		if(contagem[i]>0){
			printf("%c: %d\n", 'A'+i, contagem[i]);
		}
	}
	return 0;
}
