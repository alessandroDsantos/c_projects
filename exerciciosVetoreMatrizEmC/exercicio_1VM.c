#include <stdio.h>
#define SIZE 10

/*
    Faça um programa que preencha um vetor de inteiros de tamanho 10 pedindo valores ao usuário. 
    Em seguida, calcule e salve num segundo vetor o quadrado de cada elemento do primeiro vetor. Por
    fim, imprima os dois vetores.
*/

int main(){

    int vetor1[SIZE], vetor2[SIZE];

    for(int i = 0; i < SIZE; i++){
        printf("Digite um número inteiro: ");
        scanf("%d", &vetor1[i]);
    }

    for(int i = 0; i < SIZE; i++){
        vetor2[i] = vetor1[i] * 2;
    }

    printf("%s%10s%12s\n","Posição", "vetor1", "vetor2");

    for(int i = 0; i < SIZE; i++){
        printf("%d%12d%12d\n",i,vetor1[i],vetor2[i]);
    }




    return 0;
}