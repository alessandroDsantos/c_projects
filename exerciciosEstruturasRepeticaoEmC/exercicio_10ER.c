#include <stdio.h>

/*
    Você decidiu ficar rico guardando dinheiro por 30 dias consecutivos. Para tal, decidiu guardar 1 
    centavo no primeiro dia, 2 centavos no segundo dia, 4 centavos no terceiro dia, 8 centavos no quarto
    dia, e assim por diante. Faça um programa para calcular quanto você terá ao final dos 30 dias.
*/

int main(){
    int dias = 30;
    float valor = 1.00, valorAcumulado = 0.0;

    for(int i = 1; i <= dias; i++){
        valorAcumulado += valor;
        valor = valor * 2.00;
        printf("\nDia: %d | Valor: %.2f", i, valorAcumulado/100.00);
    }

    printf("\nO valor total, após o final dos dias estipulados é igual a: R$%.2f\n", valorAcumulado/100.00);

    return 0;

}