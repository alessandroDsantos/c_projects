#include <stdio.h>

/*
    Crie um programa que permita ao usuário escolher entre fazer a conversão de Real para Dólar ou
    de Dólar para Real. Utilize como taxa de câmbio $1 igual a R$5.30.
*/

int main(){
    float real, dolar;
    char tipoConversao;

    printf("\nDigite 'd' se deseja converter Dólar para Real e 'r' para converter Real para Dólar:");
    scanf("%c", &tipoConversao);

    switch(tipoConversao){
        case 'd':
            printf("\nDigite o valor em Dólar para ser convertido em Real:");
            scanf("%f", &dolar);
            real = dolar * 5.30;
            printf("\nO valor convertido em Real é igual a: R$%.2f\n",real);
            break;
        case 'r':
            printf("\nDigite o valor em Real para ser convertido em Dólar:");
            scanf("%f", &real);
            dolar = real / 5.30;
            printf("\nO valor convertido em Dólar é igual a: US$%.2f\n",dolar);
            break;
        default:
            printf("\nNão selecionou 'd' ou 'r'!");
            break;
    }

    return 0;
}