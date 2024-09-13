#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 3


/*
    Dadas duas matrizes A e B 3 x 3, faça um programa para calcular a soma das matrizes e salvar 
    em uma matriz C. Imprima as três matrizes.
*/

int main(){
    int matriz1[SIZE][SIZE], matriz2[SIZE][SIZE], matriz3[SIZE][SIZE];

    srand(time(NULL));

    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            matriz1[i][j] = rand() % 10;
            matriz2[i][j] = rand() % 10;
            matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
 
    printf("Matriz 1:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%2d ", matriz1[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz 2:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%2d ", matriz2[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz 3 (Soma):\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%2d ", matriz3[i][j]);
        }
        printf("\n");
    }

    return 0;
}