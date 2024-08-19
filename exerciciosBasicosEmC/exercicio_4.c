#include <stdio.h>

/*
        Escreva um programa que leia um valor de despesa de restaurante, o valor da gorjeta (em
    porcentagem) e o número de pessoas para dividir a conta. Imprima o valor que cada um deve pagar.
    Assuma que a conta será dividida igualmente.
*/

void main(){
    int numPessoas;
    float valorTotalConta, valorConta, gorjeta, valorContaDividida;

    printf("\nDigite o valor da conta do restaurante: R$");
    scanf("%f", &valorConta);
    printf("\nDigite qual é a porcentagem da gorjeta:");
    scanf("%f", &gorjeta);
    printf("\nDigite a quantidade de pessoas que irão pagar a conta:");
    scanf("%d", &numPessoas);

    valorTotalConta = valorConta + ( (gorjeta * valorConta) / 100.0);
    valorContaDividida = valorTotalConta / numPessoas;

    printf("\nO total da conta R$%.2f",valorTotalConta);
    printf("\nO valor que cada um deve pagar é: R$%.2f\n\n",valorContaDividida); 

}