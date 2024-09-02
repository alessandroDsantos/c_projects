#include <stdio.h>
#include <string.h>
#define OBJETOS 10

/*
    Uma pequena loja de artesanato possui apenas um vendedor e comercializa 10 tipos de objetos 
    diferentes. O vendedor recebe um salário de R$1100,00 acrescido de 5% do valor total de suas 
    vendas. O valor unitário dos objetos deve ser informado e armazenado em um vetor; a quantidade 
    vendida de cada objeto deve ficar em outro vetor, mas na mesma posição. Crie um programa que 
    receba os preços e as quantidades vendidas, armazenando-os em seus respectivos vetores. Depois, 
    determine e mostre:
    a) A quantidade vendida, valor unitário e valor total de cada objeto. Ao final, deverão ser mostrados 
    o valor total das vendas e o valor da comissão que será paga ao vendedor.
    b) O valor do objeto mais vendido e sua posição no vetor (em caso de empates mostre todos 
    empatados)
*/

int main(){

    int qtdVendidaObjeto[OBJETOS], objMaisVendido = 0, infoObj[OBJETOS][2] = {0}, j = 0;
    float valorObjeto[OBJETOS], valorTotalObjeto[OBJETOS], valorTotalVendas = 0.0, comissaoVendedor; 

    for(int i = 0; i < OBJETOS; i++){
        printf("\nDigite o preço do objeto %d: R$", i);
        scanf("%f", &valorObjeto[i]);
        printf("Digite a quantidade vendida do objeto %d: ", i);
        scanf("%d", &qtdVendidaObjeto[i]);
    }

    for(int i = 0; i < OBJETOS; i++){
        printf("\n------------------------------");
        printf("\nObjeto %d: ", i);
        printf("\nQuantidade vendida: %d", qtdVendidaObjeto[i]);
        printf("\nValor unitário: R$%.2f", valorObjeto[i]);
        valorTotalObjeto[i] = valorObjeto[i] * qtdVendidaObjeto[i];
        printf("\nValor total vendido: R$%.2f", valorTotalObjeto[i]);
        printf("\n------------------------------");
        if(objMaisVendido <= qtdVendidaObjeto[i]){
            if(objMaisVendido == qtdVendidaObjeto[i]){
                ++j;
                infoObj[j][0] = i;
                infoObj[j][1] = qtdVendidaObjeto[i];
            } else {
                objMaisVendido = qtdVendidaObjeto[i];
                j = 0;
                memset(infoObj, 0, sizeof(infoObj));
                infoObj[0][0] = i;
                infoObj[0][1] = qtdVendidaObjeto[i];
            }
        }
        valorTotalVendas+=valorTotalObjeto[i]; 
    }

    comissaoVendedor = valorTotalVendas * 0.05;

    printf("\nO valor total de vendas foi de: R$%.2f", valorTotalVendas);
    printf("\nO valor da comissão do vendedor foi de: R$%.2f", comissaoVendedor);
    printf("\nO salário vendedor foi de: R$%.2f", comissaoVendedor + 1100.0);

    printf("\nO(s) objetos(s) mais vendidos: \n");
    for(int i = 0; i < OBJETOS; i++){
        if(infoObj[i][1] == 0){
            break;
        }
        printf("O objeto %d, teve %d vendidos.\n", infoObj[i][0], infoObj[i][1]);
    }

    return 0;
}