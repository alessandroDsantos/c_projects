#include <stdio.h>
#define SIZE 10

/*
    Faça um programa que leia 10 números reais e os armazene em um vetor. Em seguida, leia um 
    código inteiro e faça uma das ações abaixo:
    0 – finaliza o programa;
    1 – imprime o vetor na ordem do início ao fim;
    2 – imprime o vetor na ordem inversa (do fim para o início).
    O programa deve funcionar até que o usuário digite 0 para finalizar.
*/

int main(){

    int op, msmNum = 1;
    float num[SIZE] = {0};

    do{

        do{
            printf("\n---------------------------MENU-----------------------------");
            printf("\n0 – finaliza o programa;");
            printf("\n1 – imprime o vetor na ordem do início ao fim;");
            printf("\n2 – imprime o vetor na ordem inversa (do fim para o início).");
            printf("\n------------------------------------------------------------\n");
            scanf("%d", &op);
        }while(op < 0 || op > 2);

        if(op != 0){

            
            do{
                printf("\nDeseja inserir números no vetor: 1(sim) ou 2(não):");
                scanf("%d", &msmNum);
            }while(msmNum < 1 || msmNum > 2);

            if(msmNum == 1){
                for(int i = 0; i < SIZE; i++){
                    printf("\nDigite um número real na posição %d: ", i);
                    scanf("%f", &num[i]);
                }
            }
            
            if(op == 1){
                printf("\nVetor na ordem do início ao fim!\n");
                for(int i = 0; i < SIZE; i++){
                    printf("%.2f ", num[i]);
                }    
            } else {
                printf("\nVetor na ordem inversa (do fim para o início)!\n");
                for(int i = 9; i >= 0; i--){
                    printf("%.2f ", num[i]);
                } 
            }
        }

    }while(op != 0);

    

    return 0;
}