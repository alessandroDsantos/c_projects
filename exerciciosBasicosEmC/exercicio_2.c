#include <stdio.h>

/*
        Elabore um algoritmo que receba, por meio do teclado, dois valores, um para a variável “a” e um
    para a variável “b”. Em seguida, faça os passos que julgar necessário para que ao final, a variável
    “a” possua o valor que inicialmente estava em “b” e a variável “b” possua o valor que inicialmente
    estava em “a”. Traduza seu algoritmo para a linguagem C e exiba os valores na tela.
*/

int main(){
    int a, b, aux;

    printf("\nDigite um número para a:");
    scanf("%d",&a);
    printf("\nDigite um número para b:");
    scanf("%d",&b);

    printf("\nValores de a e b após digitado pelo usuário: a = %d e b = %d\n", a, b);

    aux = a;
    a = b;
    b = aux;

    printf("\nValores de a e b após a execução do programa: a = %d e b = %d\n\n", a, b);
    
    return 0;

}