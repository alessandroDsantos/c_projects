#include <stdio.h>

/*
    Escreva um programa que gere a saída abaixo (10 linhas, 20 * por linha).
    Restrições:
    → A instrução “printf” pode ser utilizada no máximo 2 vezes;
    → O \n para saltar linha pode ser utilizado no máximo 1 vez.
    ********************
    ********************
    ********************
    ********************
    ********************
    ********************
    ********************
    ********************
    ********************
    ********************
*/

int main(){
    for(int i = 0; i < 10; i++){
        for(int i = 0; i < 20; i++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}