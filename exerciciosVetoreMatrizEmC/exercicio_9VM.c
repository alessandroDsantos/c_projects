#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Crie um programa que preencha uma matriz 5x10 com números inteiros. Em seguida faça:
    a) some cada uma das linhas armazenando o resultado em um vetor;
    b) some cada uma das colunas armazenando o resultado em um vetor;
    c) Imprima os dois vetores identificando qual é a soma das linhas e qual é a soma das colunas
*/

int main(){

    int matriz[5][10], vetorSomaLinha[5] = {0}, vetorSomaColuna[10] = {0};

    srand(time(NULL));

    for(int l = 0; l < 5; l++){
        for(int c = 0; c < 10; c++){
            matriz[l][c] = rand() % 10;
        }
    }

    for(int l = 0; l < 5; l++){
        for(int c = 0; c < 10; c++){
            printf("%2d ", matriz[l][c]);
            vetorSomaLinha[l] += matriz[l][c];
            vetorSomaColuna[c] += matriz[l][c];
        }
        printf("\n");
    }

    printf("\nVetor Linha: \n");
    for(int l = 0; l < 5; l++){
        printf("Soma da linha %d da matriz 5 x 10: %d\n", l, vetorSomaLinha[l]);
    }

    printf("\nVetor Coluna: \n");
    for(int c = 0; c < 10; c++){
        printf("Soma da coluna %d da matriz 5 x 10: %d\n", c, vetorSomaColuna[c]);
    }


    return 0;
}