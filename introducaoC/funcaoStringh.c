#include <stdio.h>
#include <string.h>

int main(){
    char informacao1[20] = {"Java"};
    char informacao2[20] = {"Script"};
    char informacao3[20] = {"JavaScript"};
    int resultado;

    printf("Strings:\n");
    printf("%s\n", informacao1);
    printf("%s\n", informacao2);
    printf("%s\n", informacao3);

    //Função strlen() -> verifica o tamanho da string

    printf("\nTamanho %s: %ld", informacao1, strlen(informacao1));
    printf("\nTamanho %s: %ld", informacao2, strlen(informacao2));
    printf("\nTamanho %s: %ld", informacao3, strlen(informacao3));

    //Função strcat() -> junta duas string 

    printf("\n\nJunção das palavras %s + %s ", informacao1, informacao2);
    
    strcat(informacao1, informacao2);

    printf("-> %s\n", informacao1);

    /*
        Função strcmp() -> Compara duas string, apresentando os seguintes resultados:
        0 = Strings iguais
        negativo = Se a primeira String ocorre primeiro que a segunda
        positivo = Se a segunda String ocorre primeiro que a primeira
    */

    resultado = strcmp(informacao1, informacao3);

    if(resultado == 0){
        printf("\n%s = %s", informacao1, informacao3);
    }

    resultado = strcmp(informacao2,informacao1);

    printf("\nA comparação, de %s e %s, deu esse resultado: %d", informacao2, informacao1, resultado);

    resultado = strcmp(informacao1,informacao2);

    printf("\nA comparação, de %s e %s, deu esse resultado: %d", informacao1, informacao2, resultado);

    // Função strcpy() -> copia a informação de uma variavel e coloca na outra

    printf("\n\nInformação da variável informação1 -> %s", informacao1);
    printf("\nCopiar a informação 'Java' e colar na variável informação1: ");

    strcpy(informacao1,"Java");

    printf("\nNovo dado('Java') inserido na variável informação1: %s", informacao1);


    printf("\nStrings:\n");
    printf("%s\n", informacao1);
    printf("%s\n", informacao2);
    printf("%s\n", informacao3);
    
}