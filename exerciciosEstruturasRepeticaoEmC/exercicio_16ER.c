#include <stdio.h>

/*
    Faça um programa para encontrar o menor número inteiro que seja divisível por todos os 
    números inteiros entre 1 e 10.
*/

int main(){

    int valor = 10, divisor = 0;

    while(divisor < 10){
        divisor = 0;
        valor++;
        for(int i = 1; i <= 10; i++){
            if(valor % i == 0) divisor++;
        }
    }

    printf("O menor número inteiro que seja divisível por todos os números inteiros entre 1 e 10 é: %d\n",valor);


    return 0;
}