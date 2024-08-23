#include <stdio.h>

/*
    Faça um programa que some os números ímpares entre 1 e 1000 e imprima a resposta.
*/

int main(){

    int soma = 0;

    for(int i = 1; i <= 1000; i++){
        if(i % 2 != 0){
            soma += i;
        }
    }
    
    printf("A soma dos números impares de 1 a 1000: %d\n",soma);

    return 0;
}