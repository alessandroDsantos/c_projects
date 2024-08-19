#include <stdio.h>

/*
        Faça um programa em C para trocar o valor de duas variáveis inteiras sem utilizar nenhuma
    variável auxiliar.
*/

void main(){
    int a,b;

    printf("\nDigite um número para a:");
    scanf("%d",&a);
    printf("\nDigite um número para b:");
    scanf("%d",&b);

    printf("\nOs valores recebidos por a e b, respectivamente, são: %d e %d", a, b);

    /*
        x(4) = x(1) + y(3);
        y(1) = x(4) - y(3);
        x(3) = x(4) - y(1);
    */

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nValores de a e b após a execução do programa: a = %d e b = %d\n\n", a, b);

}