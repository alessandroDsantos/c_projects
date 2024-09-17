#include <stdio.h>

int main(){

    int cont, verificar, continuar;
    char opcao;
    char palavra[10];
    char frase[30];
    char fraseSemEspacoVazio[30];
    char copia[30]; 

    do{
        continuar = 1;

        printf("\nDeseje verificar se é uma 'palavra'(digite p) ou uma 'frase'(digite f) é políndroma? ");
        scanf(" %c", &opcao);

        if(opcao == 'p'){

            printf("\nDigite a palavra que deseja verificar: ");
            scanf(" %10[^\n]", palavra);

            cont = 0;
            while(palavra[cont] != '\0'){
                cont++;
            }

            for(int i=0; i < cont; i++){
                copia[i] = palavra[cont - 1 - i];
            }


            verificar = 0;
            for(int i=0; i < cont; i++){
                if(palavra[i] == copia[i]){
                    verificar++; 
                }
            }

            if(verificar == cont){
                printf("\nA palavra %s É políndroma!\n", copia);
            } else {
                printf("\nA palavra %s NÃO é políndroma!\n", palavra);
            }


        } else if (opcao == 'f'){

            printf("\nDigite a frase que deseja verificar: ");
            scanf(" %30[^\n]", frase);

            int remover = 0;
            for(int i = 0; frase[i] != '\0'; i++){
                if(frase[i] != ' '){
                    fraseSemEspacoVazio[remover++] = frase[i];
                }
            }

            fraseSemEspacoVazio[remover] = '\0';

            cont = 0;
            while(fraseSemEspacoVazio[cont] != '\0'){    
                cont++;
            }

            for(int i=0; i < cont; i++){
                copia[i] = fraseSemEspacoVazio[cont - 1 - i];
            }


            verificar = 0;
            for(int i=0; i < cont; i++){
                if(fraseSemEspacoVazio[i] == copia[i]){
                    verificar++; 
                }
            }

            if(verificar == cont){
                printf("\nA frase %s É políndroma!\n", frase);
            } else {
                printf("\nA frase %s NÃO é políndroma!\n", frase);
            }

        } else {
            printf("\nNão existe essa opção!\n");
        }

        printf("\nDeseja conferir outras palavras ou frase? Sim-1 Não-0 -> ");
        scanf("%d", &continuar);

    }while(continuar == 1);

    

    return 0;
}