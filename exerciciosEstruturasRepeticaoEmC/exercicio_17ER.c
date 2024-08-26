#include <stdio.h>

/*
    Faça um programa que peça números ao usuário. Quando o usuário digitar o número 0 (zero) o 
    programa deve imprimir na tela quantos números positivos e negativos foram digitados.
    Exemplo:
    Digite um valor: -9
    Digite um valor: -4
    Digite um valor: 5
    Digite um valor: 8
    Digite um valor: 3
    Digite um valor: 0
    Positivos: 3
    Negativos: 2
*/

int main(){

    int num, positivo = 0, negativo = 0;

    do{
        printf("Digite um valor: ");
        scanf("%d", &num);
        if(num < 0) negativo++;
        if(num > 0) positivo++;
    }while(num != 0);

    printf("Positivos: %d\n", positivo);
    printf("Negativos: %d\n", negativo);



    return 0;
}