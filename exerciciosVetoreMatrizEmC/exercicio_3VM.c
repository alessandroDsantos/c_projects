#include <stdio.h>
#define SIZE 20

/*
    Escrever um programa que lê um vetor N de tamanho 20 e o imprime na tela. Em seguida, troque
    o 1º elemento com o último, o 2ª com o penúltimo, ... até o 10ª com o 11º. Imprima o vetor N 
    modificado.
*/

int main(){

    char vetorN[SIZE] = {'_','!','O','A','C','I','E','C','N','O','C','_','A','D','_','A','I','R','A','M'};

    for(int i = 0; i < SIZE / 2; i++){
        char troca;
        troca = vetorN[i];
        vetorN[i] = vetorN[SIZE - i];
        vetorN[SIZE - i] = troca;
    }

    for(int i = 0; i < SIZE; i++){
        printf("%c", vetorN[i]);
    }

    return 0;
}