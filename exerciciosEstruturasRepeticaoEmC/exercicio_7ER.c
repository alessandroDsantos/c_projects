#include <stdio.h>

/*
    Leia um valor inteiro N. Apresente o quadrado de cada um dos valores pares, de 1 até N, 
    inclusive N, se for o caso.
*/

int main(){

    int N;
    printf("Digite um número: ");
    scanf("%d",&N);

    for(int i = 0; i <= N; i+=2){
        printf("%d^2 = %d\n",i ,i * i);
    }

    return 0;
}