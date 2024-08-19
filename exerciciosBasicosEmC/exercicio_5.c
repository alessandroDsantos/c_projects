#include <stdio.h>

/*
        Uma empresa contrata um encanador a R$ 45,00 por dia. Faça um programa que solicite o
    número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga,
    sabendo que são descontados 8% para imposto de renda.
*/

int main(){
    int numDias;
    float valorEncanadorDia = 45.00, quantiadadeSerPaga, IR = 8.00;

    printf("\nDigite a quantidade de dias trabalhados pelo encanador: ");
    scanf("%d",&numDias);

    quantiadadeSerPaga = (valorEncanadorDia - ((valorEncanadorDia * 8) / 100)) * numDias;

    printf("\nA quantidade a ser paga ao encanador, com o desconto do IR(8%%), é de R$%.2f\n", quantiadadeSerPaga);
    return 0;
}