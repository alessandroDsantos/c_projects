#include <stdio.h>

int main(){
    char sexo;
    int idade;
    float peso, altura;

    printf("Digite seu sexo M(masculino) ou F(Feminino):");
    scanf("%c", &sexo);

    printf("\nDigite sua idade:");
    scanf("%d", &idade);

    printf("\nDigite seu peso:");
    scanf("%f", &peso);

    printf("\nDigite sua altura:");
    scanf("%f", &altura);

    printf("\nEssas sao suas informacoes: \nSexo: %c; \nIdade: %d; \nPeso: %.2fKG; \nAltura: %.2fm;\n", sexo, idade, peso, altura);

    return 0;
}