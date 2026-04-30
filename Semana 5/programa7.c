#include <stdio.h>
#include <string.h>

int main() {

        int quantidadeMaiuscula = 0; //guarda a quantidade de letras maiusculas
        int quantidadeMinuscula = 0; //guarda a quantidade de letras minusculas
        int quantidadeNumerais = 0; //guarda a quantidade de numerais
        int quantidadeDemaisCaracteres = 0; // guarda a quantidade dos demais caracteres
        int tamanhoDoTexto; //variavel que guarda o  tamanho do texto
        char texto[100]; 

        fgets(texto, 99, stdin);
        tamanhoDoTexto = strlen(texto);

        for (int i = 0 ; i < tamanhoDoTexto - 1 ; i++){
                if (texto[i] >= 'A' && texto[i] <= 'Z'){
                        quantidadeMaiuscula++;
                        continue;
                }
                if (texto[i] >= 'a' && texto[i] <= 'z'){
                        quantidadeMinuscula++;
                        continue;
                }
                if (texto[i] >= '0' && texto[i] <= '9'){
                        quantidadeNumerais++;
                        continue;
                }
                quantidadeDemaisCaracteres++;
        }

        printf("%d\n%d\n%d\n%d\n",
            quantidadeMaiuscula,
            quantidadeMinuscula,
            quantidadeNumerais,
            quantidadeDemaisCaracteres);

        return 0;

}