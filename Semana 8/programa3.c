#include <stdio.h>
#include <string.h>
/*Escreva um programa que leia vários itens de uma compra feita pelo usuário. Para cada
item, o usuário deve informar o seu nome, o seu preço unitário e a quantidade comprada.
Após cada leitura, o programa deve perguntar ao usuário se ele deseja adicionar um novo
item ou fechar a conta. O programa deve considerar que o usuário irá digitar pelo menos
um item. Após terminar a leitura, o programa deve mostrar o valor da conta à vista e o valor
da conta a prazo. O valor da conta a prazo corresponde à soma do valor total de cada item
digitado pelo usuário. O valor da conta à vista corresponde ao valor da conta a prazo com
um desconto de 15%.*/

int main(){
    float valorPrazo = 0;
    char respostaLetra;
    char nome[100];
    float preco;
    int quantidade;
    int Parada = 0;
    do {
        fflush(stdin);
        fgets(nome, 99, stdin);
        scanf("%f%d",&preco,&quantidade);
        float valorDaCompra = preco * quantidade;
        valorPrazo += valorDaCompra;
        printf("Deseja inserir outra compra? [S] Sim, [N]Nao: \n");
        scanf(" %c",&respostaLetra);
        switch(respostaLetra){
            case 'N':
                Parada = 1;
            break;
            case 'n':
                Parada = 1;
            break;
            default:
        }

    } while (Parada == 0);

    printf("Valor a prazo: %.2f\nValor a vista: %.2f\n",valorPrazo, valorPrazo * 0.85);
    return 0;
}