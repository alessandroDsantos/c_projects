#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMANHO 100

/*
    Faça um programa para ordenar um vetor com 100 números inteiros. Imprima o vetor antes e 
    após a ordenação.
*/

int main(){

    int vetor[TAMANHO], aux = 0, naoEstaOrdenado;

    srand(time(NULL));

    for(int i = 0; i < TAMANHO; i++){
        vetor[i] = rand() % 1000;
    }

    printf("\nVetor original: \n");
    for(int i = 0; i < TAMANHO; i++){
        printf("%3d ", vetor[i]);
    }

    for(int i = 0; i < TAMANHO - 1; i++){
        naoEstaOrdenado = 0;
        for(int j = 0; j < TAMANHO - i - 1; j++){
            if(vetor[j] > vetor[j+1]){
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
                naoEstaOrdenado = 1;
            }
        }
        if(!naoEstaOrdenado) break;
    }

    printf("\nVetor ordenado crescente: \n");
    for(int i = 0; i < TAMANHO; i++){
        printf("%3d ", vetor[i]);
    }

    printf("\nVetor ordenado decrescente: \n");
    for(int i = TAMANHO - 1; i >= 0; i--){
        printf("%3d ", vetor[i]);
    }
    printf("\n\n");
    
    return 0;
}