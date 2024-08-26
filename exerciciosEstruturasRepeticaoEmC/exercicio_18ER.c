#include <stdio.h>

/*
    Foi feita uma pesquisa entre os habitantes de uma região e foram coletados os dados de idade, 
    sexo (M/F) e salário de X pessoas (x deve ser informado pelo usuário). Faça um algoritmo que 
    informe:
    a) a média de salário do grupo;
    b) a maior e a menor idade do grupo;
    c) a quantidade de mulheres com salário até R$2000,00.
*/

int main(){

    char sexo;
    int qtdPessoas, idade, idadeMaior = 0, idadeMenor = 0, qtdMulheresBaixoSalario = 0;
    float salario, somaSalarios;

    printf("Digite a quantidade de pessoas: ");
    scanf("%d", &qtdPessoas);

    for(int i = 0; i < qtdPessoas; i++){
        printf("\nDigite o salário da pessoa %d: ", i + 1);
        scanf("%f", &salario);
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idade);
        printf("Digite o sexo(m/f) da pessoa %d: ", i + 1);
        getchar();
        scanf("%c", &sexo);

        somaSalarios+=salario;
        
        if(i == 0) idadeMenor = idade;
        if(idadeMaior < idade) idadeMaior = idade;
        if(idadeMenor > idade) idadeMenor = idade;

        if(sexo == 'f' && salario <= 2000.0) qtdMulheresBaixoSalario++;

    }

    printf("\nMédia salarial -> R$%.2f\n", somaSalarios/qtdPessoas);
    printf("A idade da pessoa mais VELHA é de %d anos\n", idadeMaior);
    printf("A idade da pessoa mais NOVA é de %d anos\n", idadeMenor);
    printf("A quantidade de mulheres com salário até R$2000,00 é de %d\n", qtdMulheresBaixoSalario);

    return 0;
}