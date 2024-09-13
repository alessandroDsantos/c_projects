#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Faça um programa que calcule e imprima a soma de todos os elementos de uma matriz 5 x 7.
*/

int main(){

    int matriz[5][7], somaElementosMatriz = 0;

    srand(time(NULL));

    for(int l = 0; l < 5; l++){
        for(int c = 0; c < 7; c++){
            matriz[l][c] = rand() % 10;
        }
    }

    printf("\nElemento da matriz 5 x 7: \n\n");

    for(int l = 0; l < 5; l++){
        for(int c = 0; c < 7; c++){
            somaElementosMatriz += matriz[l][c];
            printf("%2d ", matriz[l][c]);
        }
        printf("\n");
    }


    printf("\nA soma dos elementos da matriz 5 x 7, é igual a: %d\n\n", somaElementosMatriz);


    return 0;
}