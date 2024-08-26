#include <stdio.h>

/*
    Faça um programa que peça ao usuário dois números inteiros e apresente o resultado na 
    multiplicação entre os dois números sem utilizar a operação de multiplicação.
*/

int main(){
    int num1, num2, multi = 0;

    printf("\nDigite um número inteiros: ");
    scanf("%d",&num1);
    printf("\nDigite outro número inteiro: ");
    scanf("%d",&num2);

    for(int i = 1; i <= num2; i++){
        multi += num1;
    }

    printf("A multiplicação de %d * %d = %d\n", num1, num2, multi);

    return 0;
}