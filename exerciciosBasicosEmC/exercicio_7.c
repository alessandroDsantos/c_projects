#include <stdio.h>

/*
        Faça um programa para ler do teclado uma quantidade de segundos e imprimir na tela a
    conversão para horas, minutos e segundos.
    Exemplo:
    Entrada: 3672
    Saída: 1:1:12
*/

int main(){
    int s, min, hr, resto;

    printf("\nDigite uma quantidade de segundos: ");
    scanf("%d",&s);

    hr = s / 3600; // -> Divide s(segundo) por 3600 para informar a hora.
    resto = s % 3600; // -> Pega o resto da divisão de s(segundos) por 3600.
    min = resto / 60; // -> Divide o resto(s % 3600) por 60 para informar os minutos.
    s = resto % 60; // -> Pega o resto da divisão de resto(s % 3600) por 60 para informa os segundos.
    
    printf("\n%dh:%dmin:%ds\n\n", hr, min, s);

    return 0;
}