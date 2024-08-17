#include <stdio.h>

int main(){

    printf("Tamanho em memoria do tipo char: %lu bytes\n", sizeof(char));
    printf("Tamanho em memoria do tipo int: %lu bytes\n", sizeof(int));
    printf("Tamanho em memoria do tipo short: %lu bytes\n", sizeof(short));
    printf("Tamanho em memoria do tipo long: %lu bytes\n", sizeof(long));
    printf("Tamanho em memoria do tipo float: %lu bytes\n", sizeof(float));
    printf("Tamanho em memoria do tipo double: %lu bytes\n", sizeof(double));
    printf("Tamanho em memoria do tipo long double: %lu bytes\n", sizeof(long double));
    
    float x = 255;
    printf("\nTamanho em memoria do tipo long double: %lu bytes\n", sizeof(x));

    return 0;
}


