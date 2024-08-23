#include <stdio.h>

/*
     Faça um programa que some os números ímpares entre 1 e 1000 e imprima a resposta.
    Restrição:
    → O bloco de repetição deve executar no máximo 500 vezes.
*/

int main(){

    int soma = 0;

    for(int i = 1; i <= 1000; i+=2){
        soma += i;
    }

    printf("A soma dos números impares de 1 a 1000: %d\n",soma);

    return 0;
}