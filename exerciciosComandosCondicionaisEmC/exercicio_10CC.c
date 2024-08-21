#include <stdio.h>

/*
    Faça um programa que, dado três valores a, b e c, verifique se eles podem ser os comprimentos
    dos lados de um triângulo. Caso positivo, seu programa deve informar também se o triângulo é
    equilátero, isósceles ou escaleno. Caso contrário, seu programa deve escrever a mensagem “Não
    formam um triângulo”.
*/

int main(){
    float lado1, lado2, lado3;
    
    printf("\nInforme o primeiro número: ");
    scanf("%f",&lado1);
    printf("\nInforme o segundo número: ");
    scanf("%f",&lado2);
    printf("\nInforme o terceiro número: ");
    scanf("%f",&lado3);

    if(lado1 + lado2 > lado3 &&
       lado2 + lado3 > lado1 &&
       lado1 + lado3 > lado2 ){

        if(lado1 == lado2 && lado2 == lado3 && lado3 == lado1 ){
            printf("\nForma um Triângulo Equilátero de lados %.2f x %.2f x %.2f\n", lado1, lado2, lado3);
        } else if(lado1 != lado2 && lado2 != lado3 && lado3 != lado1 ){
            printf("\nForma um Triângulo Escaleno de lados %.2f x %.2f x %.2f\n", lado1, lado2, lado3);
        } else {
            printf("\nForma um Triângulo Isósceles de lados %.2f x %.2f x %.2f\n", lado1, lado2, lado3);
        }

    } else {
        printf("\nOs três lados NÃO formam um triângulo!\n");
    }

    return 0;
}