#include <stdio.h>

/*
    Faça um programa que peça ao usuário um número inteiro maior que 2 e diga se o número 
    informado é primo ou não.
*/

int main(){
    int num, verificarPrimo = 0;

    do{
        printf("\nDigite um número inteiro maior que 2: ");
        scanf("%d", &num);
    }while(num < 2);

    for(int i = 1; i <= num; i++){
        if(num % i == 0){
            verificarPrimo++;
        }
    }

    if(verificarPrimo == 2){
        printf("%d É primo!\n", num);
    } else {
        printf("%d NÃO é primo!\n", num);
    }

    

    return 0;
}