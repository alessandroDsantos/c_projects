#include <stdio.h>

/*
    Um usuário deseja um programa onde possa escolher que tipo de média deseja calcular a partir
    de três notas. Faça um programa que leia as notas e o tipo da média escolhida pelo usuário e calcule
    a apresente a média:
    Opções:
    • ‘a’ - Aritmética.
    • ‘p’ - Ponderada (pesos: 3,3,4).
*/

int main(){
    float nota1, nota2, nota3, media;
    char tipoMedia;
    int peso1, peso2, peso3;

    printf("\nInforme a primeira nota: ");
    scanf("%f",&nota1);
    printf("\nInforme a segunda nota: ");
    scanf("%f",&nota2);
    printf("\nInforme a terceira nota: ");
    scanf("%f",&nota3);

    printf("\nDeseja que o calculo da média seja Aritmética ou Ponderada?");
    printf("\nDigite 'a' para Aritmética e 'p' para Ponderada: ");
    getchar(); //Problema do C ao ler um caracter, para resolver colocar um getchar() antes do scanf
    scanf("%c", &tipoMedia); //Outra forma e dando um espaço no ' %c'

    switch(tipoMedia){
        case 'a':
            media = (nota1 + nota2 + nota3) / 3.0;
            printf("\nA média Aritmética das nota é: %.2f\n", media);
            break;
        case 'p':
            printf("\nDigite o peso da primeira nota: ");
            scanf("%d",&peso1);
            printf("\nDigite o peso da segunda nota: ");
            scanf("%d",&peso2);
            printf("\nDigite o peso da terceira nota: ");
            scanf("%d",&peso3);

            media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);
            printf("\nA média Ponderada das nota é: %.2f\n", media);
            break;
        default:
            printf("\nTipo de média Incorreta!\n");
            break;
    }

    

    return 0;
}