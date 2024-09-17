#include <stdio.h>

int main(){

    char nome[10], nomeEmMatriz[5][20];

    /*
    printf("\nDigite seu nome: ");
    scanf("%s", nome);

    printf("%s", nome);

        - Por padrão a função scanf lê até encontra o primeiro espaço(" "), 
    ela não leva em consideração o tamanho do vetor definido;
        - Para resolver subtitui s por o valor do tamanho do vetor(no exemplo é 10) + [^\n] para lê apenas apôs o ENTER;
    */

    printf("\nDigite seu nome: ");
    scanf("%10[^\n]", nome);

    printf("%s\n", nome);


    for(int i = 0; i < 5; i++){
        printf("Digite um nome para a posição %d: ", i);
        // getchar();
        scanf(" %20[^\n]", nomeEmMatriz[i]);
    }

    for(int i = 0; i < 5; i++){
        printf("\nNome na posição %d: %s", i , nomeEmMatriz[i]);
    }


    return 0;
}