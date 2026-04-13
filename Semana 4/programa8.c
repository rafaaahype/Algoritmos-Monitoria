/*
Escreva um programa que leia as horas, os minutos e o fuso horário e converta o horário
lido para o fuso horário informado. O fuso horário deve ser informado como um número
inteiro. Caso o valor seja positivo, o programa deve considerar que o fuso horário digitado
é maior do que o atual. Caso o valor seja negativo, o programa deve considerar que o fuso
horário é menor do que o atual. Caso o valor seja 0, o programa deve considerar que o fuso
horário é o mesmo do atual. A resposta do programa deve ser dada no formato hh:mm hs.
Por exemplo, se o horário lido foi 10 h e 30 min e o fuso horário for 4, a resposta do
programa deve ser 14:30 hs. Por outro lado, se o horário lido foi 10 h e30 min e o fuso

horário for -4, a resposta do programa deve ser 06:30 hs. Se o horário lido for 22 h e 30 min
e o fuso-horário for 3, a resposta deve ser 01:30 hs. Se o horário lido for 2 h e 30 min e o
fuso horário for -3, a resposta deve ser 23:30 hs. O horário referente à meia-noite deve ser
representado da forma 00:00 hs.
*/

#include <stdio.h>

int main() {
    printf("Digite o horário (hh:mm): ");
    int horas, minutos; scanf("%d:%d", &horas,&minutos);
    printf("Digite o fuso horário: ");
    int fuso; scanf("%d",&fuso);
    horas = horas + fuso;
    if (horas >= 24) horas = horas % 24;
    else if (horas < 0) horas = (horas % 24 + 24) % 24;
    printf("%d:%d hs\n", horas, minutos);
    return 0;
}
