#include <stdio.h>
#define CAMPO 3

/*
    Faça um programa para jogar o jogo da velha. Ao final imprima o resultado do jogo e pergunte 
    se deseja jogar novamente
*/

int main(){


    int linha, coluna, qtdJogadas, win;
    char jogo[CAMPO][CAMPO], jogador[2][2], selcPlay, vencedor[3], continuarPartida;

    do {

        continuarPartida = 's';
        selcPlay = 0;

        jogador[0][0] = 1;
        jogador[1][0] = 2;

        printf("\nO jogador 1 será 'x' ou 'o'?\nDigite a opção:");
        //getchar();
        scanf(" %c", &jogador[0][1]);
        
        while(jogador[0][1] != 'x' && jogador[0][1] != 'o'){
            printf("\nERRO! Só existe essas duas opções 'x' ou 'o'!");
            printf("\nO jogador 1 será 'x' ou 'o'?\nDigite a opção:");
            //getchar();
            scanf(" %c", &jogador[0][1]);
        }
        
        if(jogador[0][1] == 'x'){
            jogador[1][1] = 'o';  
        }  else {
            jogador[1][1] = 'x';
        }

        for(int l=0; l<CAMPO; l++){
            for(int c=0; c<CAMPO; c++){
                jogo[l][c] = ' ';
            }
        }
        
        win = 0;
        qtdJogadas = 0;
        
        do{
            
            
            printf("\n\t   Jogador %d:\n\n", jogador[selcPlay][0]);
            for(int l=0; l<CAMPO; l++){
                if(l == 0)printf("\t   0   1   2 \n");
                for(int c=0; c<CAMPO; c++){
                    if(c == 0)printf("\t%d ", l);
                    printf(" %c ", jogo[l][c]);
                    if(c < 2)printf("|");
                }
                if(l != 2)printf("\n\t  -----------");
                printf("\n");
            }

            printf("\n\nVez do jogador %d:", jogador[selcPlay][0]);
            printf("\nDigite as coordenadas (0-2) da sua jogada:");
            printf("\nLinha (0-2):");
            scanf("%d",&linha);
            printf("\nColuna (0-2):");
            scanf("%d",&coluna);

            do{
                if(linha < 0 || linha > 2){
                    printf("\nERRO! As coordenadas da LINHA, vão de 0-2, digite novamente, um número dentro desse range: ");
                    scanf("%d",&linha);
                }
                if(coluna < 0 || coluna > 2){
                    printf("\nERRO! As coordenadas da COLUNA, vão de 0-2, digite novamente, um número dentro desse range: ");
                    scanf("%d",&coluna);
                }
                if(jogo[linha][coluna] != ' '){
                    printf("\nJá existe jogada nessa coordenada, tente outra:");
                    printf("\nLinha (0-2):");
                    scanf("%d",&linha);
                    printf("\nColuna (0-2):");
                    scanf("%d",&coluna);
                }
            }while(linha < 0 || linha > 2 || coluna < 0 || coluna > 2 || jogo[linha][coluna] != ' ');

            jogo[linha][coluna] = jogador[selcPlay][1];

            if(selcPlay == 0){
                selcPlay = 1;
            } else {
                selcPlay = 0;
            }

            for(int i=0; i<CAMPO; i++){
                    
                if(jogo[i][0] == jogo[i][1] && jogo[i][0] == jogo[i][2] && jogo[i][0] != ' '){
                    vencedor[0] = jogo[i][0];
                    vencedor[1] = i;
                    vencedor[2] = 'l';
                    win = 1;
                    break;
                }

                if(jogo[0][i] == jogo[1][i] && jogo[0][i] == jogo[2][i] && jogo[0][i] != ' '){
                    vencedor[0] = jogo[0][i];
                    vencedor[1] = i;
                    vencedor[2] = 'c';
                    win = 1;
                    break;
                }

            }

            if(jogo[0][0] == jogo[1][1] && jogo[0][0] == jogo[2][2] && jogo[0][0] != ' '){
                vencedor[0] = jogo[0][0];
                vencedor[1] = 1;
                vencedor[2] = 'd';
                win = 1;
            }

            if(jogo[0][2] == jogo[1][1] && jogo[0][2] == jogo[2][0] && jogo[0][2] != ' '){
                vencedor[0] = jogo[0][2];
                vencedor[1] = 2;
                vencedor[2] = 'd';
                win = 1;
            }

            qtdJogadas++;

        }while(win == 0 && qtdJogadas < 9);

        for(int l=0; l<CAMPO; l++){
            if(l == 0)printf("\n\t   0   1   2 \n");
            for(int c=0; c<CAMPO; c++){
                if(c == 0)printf("\t%d ", l);
                printf(" %c ", jogo[l][c]);
                if(c < 2)printf("|");
            }
            if(l != 2)printf("\n\t  -----------");
            printf("\n");
        }

        if(vencedor[2] == 'l') {
            printf("\n\tLinha %d!", vencedor[1]);        
        } else if(vencedor[2] == 'c') {
            printf("\n\tColuna %d!", vencedor[1]);        
        } else if (vencedor[2] == 'd'){
            if(vencedor[1] == 1){
                printf("\n\tDiagonal Principal!");
            } else {
                printf("\n\tDiagonal Secundária!");
            }
        }

        if(win == 1){
            printf("\n\nVencedor:");
            jogador[0][1] == vencedor[0] ? printf("\nJogador %d\n", jogador[0][0]) : printf("\nJogador %d\n", jogador[1][0]);
            
        } else {
            printf("\n\tNão houve vencedor!\n");
        }

        printf("\n\nDeseja outra partida? Sim-s ou Não-n:");
        scanf(" %c", &continuarPartida);

    }while(continuarPartida == 's');
    
    return 0;
}