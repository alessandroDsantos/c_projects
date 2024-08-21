#include <stdio.h>

/*
    Escreva um programa em C que lê 5 números inteiros, um por vez. Conte quantos destes valores
    são negativos e quantos são positivos. Ao final, imprima na tela a quantidade de números negativos
    e positivos. Sem laço de repetição.
*/

int main(){
    int num, positivo = 0, negativo = 0;

    printf("\nDigite o primeiro número inteiro:");
    scanf("%d",&num);

    num < 0 ? negativo++ : positivo++;

    printf("\nDigite o segundo número inteiro:");
    scanf("%d",&num);

    num < 0 ? negativo++ : positivo++;

    printf("\nDigite o terceiro número inteiro:");
    scanf("%d",&num);

    num < 0 ? negativo++ : positivo++;

    printf("\nDigite o quarto número inteiro:");
    scanf("%d",&num);

    num < 0 ? negativo++ : positivo++;

    printf("\nDigite o quinto número inteiro:");
    scanf("%d",&num);

    num < 0 ? negativo++ : positivo++;

    printf("\nPositivo: %d\t Negativo: %d\n\n",positivo,negativo);   

    return 0;
}