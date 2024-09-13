#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 5

/*
    Faça um programa que imprima na tela a diagonal principal de uma matriz 5 x 5
*/

int main(){

    int matriz[SIZE][SIZE], diagonalPrincipal[SIZE][SIZE];

    srand(time(NULL));

    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            matriz[i][j] = 1 + rand() % 10;
            if(i == j){
                diagonalPrincipal[i][j] = matriz[i][j];
            } else {
                diagonalPrincipal[i][j] = 0;
            }
        }
    }

    printf("\nMatriz 5 x 5:\n");
    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nDiagonal principal da Matriz 5 x 5:\n");
    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            printf("%2d ", diagonalPrincipal[i][j]);
        }
        printf("\n");
    }

    return 0;
}