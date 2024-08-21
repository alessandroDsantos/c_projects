#include <stdio.h>

/*
    Faça um programa que peça ao usuário um caracter e diga se é uma vogal ou não.
*/

int main(){
    char letra;

    printf("\nDigite uma letra: ");
    scanf("%c",&letra);

    if(letra == 'a' || letra == 'A' ||
       letra == 'e' || letra == 'E' ||
       letra == 'i' || letra == 'I' ||
       letra == 'o' || letra == 'O' ||
       letra == 'u' || letra == 'U' ){
        printf("%c é uma VOGAL\n",letra);
    } else {
        printf("%c é uma CONSOANTE\n",letra);
    }

    return 0;
}