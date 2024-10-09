#include <stdio.h>
#include <ctype.h>
#define TAMANHO 60

int qtdLetras(char nome[TAMANHO]){
    int tam = 0, espacoVazio = 0;
    while(nome[tam] != '\0'){
        if(nome[tam] == ' ') espacoVazio++;
        tam++;
    }
    return tam - espacoVazio;
}

void maiuscula(char nome[TAMANHO]){
    int i = 0;
    while(nome[i] != '\0'){
        nome[i] = toupper(nome[i]);
        i++;
    }
    nome[i] = '\0';
}

void minusculo(char nome[TAMANHO]){
    int i = 0;
    while(nome[i] != '\0'){
        nome[i] = tolower(nome[i]);
        i++;
    }
    nome[i] = '\0';
}

int main(){

    char nomeTime[TAMANHO];
    int qtd;

    printf("\nDigite o nome de um time de futebol: ");
    scanf(" %60[^\n]", nomeTime);

    printf("\nQuantidade de letras: ");
    qtd = qtdLetras(nomeTime);
    printf("%d", qtd);

    printf("\nNome em Maiúsculo: ");
    maiuscula(nomeTime);
    printf("%s", nomeTime);

    printf("\nNome em Minúsculo: ");
    minusculo(nomeTime);
    printf("%s\n", nomeTime);

    return 0;
}