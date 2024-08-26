#include <stdio.h>

/*
    Faça um programa que calcule a média de salários de uma empresa, pedindo ao usuário a 
    quantidade de funcionários e o salário de cada funcionário. Ao final, o programa deve imprimir a 
    média dos salários informados, o salário mais alto e o salário mais baixo.
*/

int main(){
    int qtdFuncionarios;
    float salario, valorSomaSalario = 0.0, maiorSalario = 0.0, menorSalario = 0.0, mediaSalarial;

    printf("\nDigite a quantidade de funcionários: ");
    scanf("%d", &qtdFuncionarios);

    for(int i = 1; i <= qtdFuncionarios; i++){
        printf("\nDigite o valor do salário do funcionário %d: ", i);
        scanf("%f", &salario);
        if(i == 1) menorSalario = salario;
        if(maiorSalario < salario) maiorSalario = salario;
        if(menorSalario > salario) menorSalario = salario;
        valorSomaSalario+=salario;
    }

    mediaSalarial = salario / qtdFuncionarios;

    printf("A média salarial da empresa é: R$%.2f\n", mediaSalarial);
    printf("O maior salário da empresa é: R$%.2f\n", maiorSalario);
    printf("O menor salário da empresa é: R$%.2f\n", menorSalario);

    return 0;
}