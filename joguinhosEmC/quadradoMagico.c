#include <stdio.h>
#define SIZE 4

/*
    Dada uma matriz 4 x 4 faça um programa que diga se ela é um Quadrado Mágico ou não.
*/

int main(){
    int matriz[SIZE][SIZE] = {0}, liberar;
    int linha, coluna, valor;
    int somaNumLinha[SIZE] = {0}, somaNumColuna[SIZE] = {0}, somaNumDiagPrinc = 0, somaNumDiagSec = 0;
    int contSomaLinha = 0, contSomaColuna = 0;
    int op = 0;

    do{
        
        do{

            liberar = 0;

            for(int l = 0; l < SIZE; l++){
                if(l == 0)printf("\t   0    1    2    3 \n");
                for(int c = 0; c < SIZE; c++){
                    if(c == 0) printf("\t%d", l);
                    if(c != 0)printf("|");
                    printf(" %2d ", matriz[l][c]); 
                }
                if(l != 3)printf("\n\t -------------------");
                printf("\n");
            }

            printf("\nDigite a linha e a coluna, na qual você deseja adicionar um número de 1 a 16:");
            printf("\nLinha(0-3):");
            scanf("%d",&linha);
            printf("\nColuna(0-3):");
            scanf("%d",&coluna);
            printf("\nDigite o valor entre 1 a 16:");
            scanf("%d",&valor);

            do{
                if(linha < 0 || linha > 3){
                    printf("\nERRO\nValor digitado: %d\nDigite novamente, Linha(0-3):", linha);
                    scanf("%d",&linha);
                }
                
                if(coluna < 0 || coluna > 3){
                    printf("\nERRO\nValor digitado: %d\nDigite novamente, Coluna(0-3):", coluna);
                    scanf("%d",&coluna);
                }
                
                if(valor < 0 || valor > 16){
                    printf("\nERRO\nValor digitado: %d\nDigite novamente, o valor entre 1 a 16:", valor);
                    scanf("%d",&valor);
                }
            }while(linha < 0 || linha > 3 || coluna < 0 || coluna > 3 || valor < 1 || valor > 16);
            
            for(int l = 0; l < SIZE; l++){
                for(int c = 0; c < SIZE; c++){
                    if(matriz[l][c] == valor){
                        do{
                            printf("\nO número digitado, %d, já está no quadrado! Digite novamente outro valor entre 1 a 16:", valor);
                            scanf("%d",&valor);
                        }while(valor < 1 || valor > 16 || valor == matriz[linha][coluna]);
                    }
                }
            }
            
            matriz[linha][coluna] = valor; 

            for(int l = 0; l < SIZE; l++){
                for(int c = 0; c < SIZE; c++){
                    if(matriz[l][c] == 0){
                        liberar++;
            }
                }
            }
            

        }while(liberar);

        for(int l = 0; l < SIZE; l++){
            for(int c = 0; c < SIZE; c++){
                somaNumLinha[l] += matriz[l][c];
                if(somaNumLinha[l] == 34){
                    contSomaLinha++;
                }

                somaNumColuna[c] += matriz[l][c];
                if(somaNumColuna[c] == 34){
                    contSomaColuna++;
                }

                if(l == c){
                    somaNumDiagPrinc += matriz[l][c];
                }
                if(l + c == SIZE - 1){
                    somaNumDiagSec += matriz[l][c];
                }
            }
        }

        printf("\n\n");
        for(int l = 0; l < SIZE; l++){
            if(l == 0)printf("\t   0    1    2    3 \n");
            for(int c = 0; c < SIZE; c++){
                if(c == 0) printf("\t%d", l);
                if(c != 0)printf("|");
                if(c < 3)printf(" %2d ", matriz[l][c]); 
                if(c == 3)printf(" %2d = %2d", matriz[l][c], somaNumLinha[l]); 
            }
            if(l != 3)printf("\n\t -------------------");
            printf("\n");
            if(l == 3){
                for(int i = 0; i < SIZE; i++){
                    if(i == 0)printf("\t  %2d",somaNumColuna[i]);
                    if(i != 0)printf("  %2d  ",somaNumColuna[i]);
                }
            }
        }

        printf("\n\nSoma da diagonal principal: %d", somaNumDiagPrinc);
        printf("\nSoma da diagonal secundária: %d", somaNumDiagSec);

        if(contSomaLinha == 4 && contSomaColuna == 4 && somaNumDiagPrinc == 34 && somaNumDiagSec == 34){
            printf("\n\nÉ UM QUADRADO MÁGICO!\n\n");
        } else {
            printf("\n\nNão é um quadrado mágico!\n\n");
        }

        printf("\nDeseja continuar a verificação do Quadrado Mágico? (1-Sim ou 0-Não): ");
        scanf("%d", &op);
    
    }while(op != 0);

    return 0;
}