#include <stdio.h>
#include <string.h>

int main() {
        char texto[100]; //texto que irei fazer a contagem do caractere
        char caractere; //caractere que sera contado no texto
        int contador = 0; //quantidade do caractere x no texto
        int tamanhoDoTexto; //guarda o tamanho do texto

        fgets(texto, 99, stdin);
        scanf(" %c",&caractere);

        tamanhoDoTexto = strlen(texto);

        if (caractere >= 'A' && caractere <= 'Z'){
                caractere -= 'A' - 'a'; //mantem o padrao de minusculo para todos os caracteres que inserir
        }

        for (int i = 0 ; i < tamanhoDoTexto ; i++){
                if (texto[i] >= 'A' && texto[i] <= 'Z'){
                        texto[i] -= 'A' - 'a'; //passa todos os caracteres para minusculo
                }
        }

        for (int i = 0 ; i < tamanhoDoTexto ; i++){
                if (texto[i] == caractere){
                        contador++;
                }
        }

        printf("%d\n",contador);
        return 0;
}