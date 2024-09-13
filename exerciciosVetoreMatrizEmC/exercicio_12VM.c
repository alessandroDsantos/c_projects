#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 7

/*
    Faça um programa que imprima na tela a diagonal secundária de uma matriz 7 x 7
*/

int main(){

    int matriz[SIZE][SIZE], diagonalSecundaria[SIZE][SIZE];

    srand(time(NULL));

    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            matriz[i][j] = rand() % 10;
            if(i + j == SIZE - 1){
                diagonalSecundaria[i][j] = matriz[i][j]; 
            } else {
                diagonalSecundaria[i][j] = 0;
            }
        }
    }

    printf("\nMatriz 7x7:\n");
    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nDiagonal secundária da Matriz 7 x 7:\n");
    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            printf("%2d ", diagonalSecundaria[i][j]);
        }
        printf("\n");
    }

    return 0;
}