#include <stdio.h>

int main(){
    
    float num;
    char variavel;

    printf("Digite um numero real:\n");
    scanf("%f", &num);
    getchar();//Limpa o buffer do teclado
    printf("Digite um caracter para representar uma variavel que sera igual ao numero real:\n");
    scanf("%c", &variavel);
    printf("%c = %.2f", variavel, num);

    return 0;
}