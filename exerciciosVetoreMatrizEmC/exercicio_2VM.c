#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 25

/*
    Faça um programa que some o conteúdo de dois vetores de tamanho 25 e armazene o resultado 
    em um terceiro vetor. Imprima os três vetores na tela.
*/

int main(){

    int vetor1[SIZE],vetor2[SIZE],vetor3[SIZE];

    srand(time(NULL));

    for(int i = 0; i < SIZE; i++){
        vetor1[i] = 1 + rand() % 10;
        vetor2[i] = 2 + rand() % 10;
    }

    for(int i = 0; i < SIZE; i++){
        vetor3[i] = vetor1[i] + vetor2[i];
    }

    printf("%s%10s%10s%10s\n", "Posição", "vetor1", "vetor2", "vetor3");

    for(int i = 0; i < SIZE; i++){
        printf("%2d%12d     + %3d    = %4d\n", i, vetor1[i], vetor2[i], vetor3[i]);
    }

    return 0;
}