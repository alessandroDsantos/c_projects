#include <stdio.h>

/*
        Crie um programa em C que permita fazer a conversão cambial entre Reais e Dólares. Considere
    como taxa de câmbio US$1,0 = R$5,30. Leia um valor em Reais e mostre o correspondente em
    Dólares.
*/

int main(){
    float real = 5.30, dollar, valorConversao;
    printf("\nDigite o valor em real, no qual, será convertido a dólar: R$");
    scanf("%f",&valorConversao);

    dollar = valorConversao / real;

    printf("\nR$%.2f é o equivalente a US$%.2f!\n",valorConversao, dollar);


    return 0;
}