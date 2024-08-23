#include <stdio.h>

/*
    Faça um programa que calcule o valor de A, dado por:
    A = 1 + 2 + 3 + 4 + … + n, onde n é um número inteiro, maior que zero informado pelo usuário
*/

int main(){

    int n, somar = 0;

    printf("\nInforme um número: ");
    scanf("%d", &n);

    while(n <= 0){
        printf("\nInforme um número maior que zero: ");
        scanf("%d", &n);
    }

    printf("\nA = ");

    for(int i = 1; i < n; i++){
        somar += i;
        if(i != n-1){
            printf("%d + ", i);
        } else {
            printf("%d", i);
        }
    }

    printf(" = %d\n", somar);

    return 0;
}