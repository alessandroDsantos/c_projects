#include <stdio.h>

/*
    Escreva um programa em C que funcione como uma calculadora. O programa deve apresentar 
    um menu ao usuário da seguinte forma:
    1 – Somar
    2 – Subtrair
    3 – Multiplicar
    4 – Dividir
    0 – Sair
    Uma estrutura do tipo switch deve ser utilizada para realizar cada operação em um case. Após a 
    escolha da operação, dois valores devem ser pedidos ao usuário para realizar a operação escolhida. 
    Se a operação escolhida for a 4 o dividendo não pode ser zero, um novo valor deve ser solicitado. O
    programa deve funcionar até que o usuário escolha a opção 0 (opção de saída).
*/

int main(){
    
    int op;
    char tipoOP;
    float num1, num2, resultado;

    do{

        printf("--------------Calculadora--------------\n");
        printf("1 – Somar\n");
        printf("2 – Subtrair\n");
        printf("3 – Multiplicar\n");
        printf("4 – Dividir\n");
        printf("0 – Sair\n");
        printf("Digite a operação que deseja executar: ");
        scanf("%d", &op);

        if(op != 0){
            printf("\nDigite o primeiro número: ");
            scanf("%f",&num1);
            printf("\nDigite o segundo número: ");
            scanf("%f",&num2);

            while(op == 4 && num2 == 0){
                printf("\nNão é possível dividir por 0! Digite o outro número: ");
                scanf("%f",&num2);
            }


            switch(op){
                case 1:
                    resultado = num1 + num2;
                    tipoOP = '+';
                    break;
                case 2:
                    resultado = num1 - num2;
                    tipoOP = '-';
                    break;
                case 3:
                    resultado = num1 * num2;
                    tipoOP = '*';
                    break;
                case 4:   
                    resultado = num1 / num2;
                    tipoOP = '/';
                    break;
                default:
                    printf("\nOperação escolhida não existe no sistema!\n");
                    break;
            }

            printf("\n%.2f %c %.2f = %.2f\n", num1, tipoOP, num2, resultado);
        }

    }while(op != 0);

    printf("\nSistema Finalizado!\n");

    return 0;
}