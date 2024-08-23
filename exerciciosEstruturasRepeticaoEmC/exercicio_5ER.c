#include <stdio.h>

/*
    Faça um programa que leia as notas referentes às duas avaliações de um aluno. Calcule e 
    imprima a média semestral. Faça com que o programa só aceite notas válidas (uma nota válida deve
    pertencer entre o intervalo de 0 a 10). Cada nota deve ser validada separadamente.
*/

int main(){
    float nota1, nota2, media;

    do{
        printf("\nDigite a nota da primeira avaliação do semestre: ");
        scanf("%f",&nota1);
    }while(nota1 < 0 || nota1 > 10);

    do{
        printf("\nDigite a nota da segunda avaliação do semestre: ");
        scanf("%f",&nota2);
    }while(nota2 < 0 || nota2 > 10);

    media = (nota1 + nota2) / 2;

    printf("\nA média das duas notas do semestre é igual a: %.2f\n", media);

    return 0;
}