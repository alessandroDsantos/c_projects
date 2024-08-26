#include <stdio.h>

/*
    Para uma turma de 45 alunos, construa um algoritmo que determine:
    a) A idade média dos alunos com menos de 1,70m de altura;
    b) A altura média dos alunos com mais de 20 anos.
*/

int main(){
    int idade, contQtdIdadeAluno = 0, contMediaAlturaAluno = 0;
    float altura, alturaMediaAlunos_2 = 0.0 ,idadeMediaAlunos_1_7 = 0 ,alturaMedia = 0.0, idadeMedia = 0.0;

    for(int i = 0; i <= 45; i++){
        printf("\nDigite a idade do aluno: ");
        scanf("%d",&idade);
        printf("\nDigite a altura do aluno: ");
        scanf("%f",&altura);

        if(altura < 1.7){
            idadeMediaAlunos_1_7 += idade;
            contQtdIdadeAluno++;
        }

        if(idade > 20){
            alturaMediaAlunos_2 += altura;
            contMediaAlturaAluno++;
        }
    }

    idadeMedia = idadeMediaAlunos_1_7 / contQtdIdadeAluno;
    alturaMedia = alturaMediaAlunos_2 / contMediaAlturaAluno;

    printf("A idade média dos alunos com menos de 1,70m de altura, é de: %.2f anos\n", idadeMedia);
    printf("A altura média dos alunos com mais de 20 anos, é de: %.2f m\n", alturaMedia);

    return 0;
}