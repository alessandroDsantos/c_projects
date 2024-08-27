#include <stdio.h>

/*
    Escreva um programa para ler as notas da primeira e da segunda avaliação de um aluno. Calcule
    e imprima a média semestral. O programa deverá aceitar apenas notas válidas no intervalo [0,10]. 
    Cada nota deve ser validada separadamente. Ao final, deve ser impressa a mensagem “novo 
    calculo? (1-sim 2-nao)”, solicitando ao usuário que informe um código (1 ou 2), indicando se ele 
    deseja ou não executar o programa novamente. Se for informado o código 1, deve ser repetida a 
    execução de todo o programa para permitir um novo cálculo, se for informado o código 2 o 
    programa deve ser encerrado.
*/

int main(){

    char chave = 'a'; 
    int repetirPrograma;
    float nota1, nota2, media = 0.0;

    do{

        if(chave == 'a'){
            printf("Digite a primeira nota do aluno: ");
            scanf("%f", &nota1);

            while(nota1 < 0 || nota1 > 10){
                printf("\nIncorreto! Notas validas de 0 - 10.\nDigite a primeira nota do aluno: ");
                scanf("%f", &nota1);
            }

            printf("Digite a segunda nota do aluno: ");
            scanf("%f", &nota2);

            while(nota2 < 0 || nota2 > 10){
                printf("\nIncorreto! Notas validas de 0 - 10.\nDigite a segunda nota do aluno: ");
                scanf("%f", &nota2);
            }

            media = (nota1 + nota2) / 2.0;

            printf("A média das notas do aluno: %.2f\n", media);
        }

        printf("\nnovo calculo? (1-sim 2-nao)");
        scanf("%d", &repetirPrograma);

        switch(repetirPrograma){
            case 1:
                chave = 'a';
                continue;
                break;
            case 2:
                chave = 'a';
                break;
                break;
            default:
                printf("\nEscolha incorreta!");
                chave = 'i';
                continue;
                break;
        }

    }while(repetirPrograma != 2);

    return 0;
}