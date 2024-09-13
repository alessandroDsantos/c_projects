#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define CINCO 5
#define QUATRO 4

/*
    Faça um programa para calcular a transposta de uma matriz 5 x 4. Imprima as duas matrizes na 
    tela.
*/ 

int main(){

    int matriz[CINCO][QUATRO], matrizTransposta[QUATRO][CINCO];

    srand(time(NULL));

    for(int i = 0; i < CINCO; i++){
        for(int j = 0; j < QUATRO; j++){
            matriz[i][j] = rand() % 10;
        }
    }

    for(int j = 0; j < QUATRO; j++){
        for(int i = 0; i < CINCO; i++){
            matrizTransposta[j][i] = matriz[i][j];
        }
    }

    printf("\nMatriz 5x4 ou Matriz A:\n");
    for(int i = 0; i < CINCO; i++){
        for(int j = 0; j < QUATRO; j++){
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz Transposta 4x5 ou Matriz A':\n");
    for(int j = 0; j < QUATRO; j++){
        for(int i = 0; i < CINCO; i++){
            printf("%2d ", matrizTransposta[j][i]);
        }
        printf("\n");
    }

    

    return 0;
}