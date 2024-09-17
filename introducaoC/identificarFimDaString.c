#include <stdio.h>

int main(){

    char nome[10];
    int i;

    printf("Digite um nome: ");
    scanf("%10[^\n]", nome);

    i = 0;

    while(nome[i] != '\0'){
        printf("%d -> %c\n", i, nome[i]);
        i++;
    }

    printf("%s\n", nome);

    return 0;
}