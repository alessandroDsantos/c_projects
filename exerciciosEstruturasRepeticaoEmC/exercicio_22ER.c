#include <stdio.h>

/*
    Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce 3 
    centímetros por ano. Construa um programa que calcule e imprima quantos anos serão necessários 
    para que Zé seja maior que Chico
*/

int main(){

    int alturaChico = 150, alturaZe = 110, qtdAnos = 0;

    do{
        qtdAnos++;
        alturaChico+=2;
        alturaZe+=3;
        printf("\nAltura de chico: %.2f\nAltura de Zé: %.2f\nTempo em anos: %d\n", (float)alturaChico/100.0, (float)alturaZe/100.0, qtdAnos);
    }while(alturaChico >= alturaZe);

    printf("\nSerão necessários %d anos para Zé ultrapassar a altura de Chico.\n", qtdAnos);

    return 0;
}