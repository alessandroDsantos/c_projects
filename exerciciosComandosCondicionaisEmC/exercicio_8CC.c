#include <stdio.h>

/*
    Elabore um programa que, dado o número do mês, indica quantos dias têm esse mês. Utilize para
    isso a estrutura de seleção switch.
    Obs.: Considere fevereiro como tendo 28 dias.
*/

int main(){
    int mes;
    printf("Digite o número do mês(1-12) em questão: ");
    scanf("%d",&mes);

    switch(mes){
        case 1: 
        case 3: 
        case 5: 
        case 7: 
        case 8: 
        case 12: 
            printf("\nO mês possui 31 dias!\n");
            break;
        case 4:
        case 6:
        case 9:
        case 10:
        case 11:
            printf("\nO mês possui 30 dias!\n");
            break;
        case 2:
            printf("\nO mês possui 29 dias!\n");
            break;
        default:
            printf("\nNúmero do mês informado incorreto!\n");
        break;
    }


    return 0;
}