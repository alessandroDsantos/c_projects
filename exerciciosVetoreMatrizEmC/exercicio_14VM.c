#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 4

/*
    Faça um programa que imprima na tela apenas os valores abaixo da diagonal principal de uma 
    matriz 4 x 4.
*/

int main(){

    int matriz[SIZE][SIZE], piramideInferior[SIZE][SIZE];

    srand(time(NULL));

    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            matriz[i][j] = rand() % 10;
            if(i > j){
                piramideInferior[i][j] = matriz[i][j];
            } else {
                piramideInferior[i][j] = 0;
            }
        }
    }

    printf("\nMatriz 4x4:\n");
    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nPirâmide Inferior:\n");
    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            printf("%d ", piramideInferior[i][j]);
        }
        printf("\n");
    }

    return 0;
}