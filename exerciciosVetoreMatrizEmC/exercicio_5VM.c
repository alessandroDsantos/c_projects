#include <stdio.h>
#define MES 12
#define TEMP 2

/*
    Faça um programa que receba a temperatura média de cada mês do ano, armazenando-as em um 
    vetor. Ao final, mostre a maior e a menor temperatura do ano e em que mês ocorreram (mostrar o
    mês por extenso: janeiro, fevereiro …). Desconsidere empates.
*/

int main(){

    int repeticao = 0, x = 0, idMes;
    float infTempMes[MES][TEMP], tempLimite[2][2] = {0}; 

    for(int i = 0; i < MES; i++){
        infTempMes[i][0] = i;
        printf("Digite a temperatura do mês %d: ", i + 1);
        scanf("%f", &infTempMes[i][1]);
        if(i == 0) tempLimite[1][1] = infTempMes[i][1];
        if(tempLimite[0][1] < infTempMes[i][1]){
            tempLimite[0][1] = infTempMes[i][1];
            tempLimite[0][0] = infTempMes[i][0];
        } 
        if(tempLimite[1][1] > infTempMes[i][1]){
            tempLimite[1][1] = infTempMes[i][1]; 
            tempLimite[1][0] = infTempMes[i][0]; 
        } 
    }

    do{
        if(repeticao == 0){
            printf("\nO mês mais QUENTE é: \n");
            idMes = tempLimite[0][0];
        } else {
            printf("O mês mais FRIO é: \n");
            x = 1;
            idMes = tempLimite[1][0];
        }

        switch(idMes){
            case 0:
                printf("Janeiro, Temperatura: %.2f°C\n", tempLimite[x][1]);
                break;
            case 1:
                printf("Fevereiro, Temperatura: %.2f°C\n", tempLimite[x][1]);
                break;
            case 2:
                printf("Março, Temperatura: %.2f°C\n", tempLimite[x][1]);
                break;
            case 3:
                printf("Abril, Temperatura: %.2f°C\n", tempLimite[x][1]);
                break;
            case 4:
                printf("Maio, Temperatura: %.2f°C\n", tempLimite[x][1]);
                break;
            case 5:
                printf("Junho, Temperatura: %.2f°C\n", tempLimite[x][1]);
                break;
            case 6:
                printf("Julho, Temperatura: %.2f°C\n", tempLimite[x][1]);
                break;
            case 7:
                printf("Agosto, Temperatura: %.2f°C\n", tempLimite[x][1]);
                break;
            case 8:
                printf("Setembro, Temperatura: %.2f°C\n", tempLimite[x][1]);
                break;
            case 9:
                printf("Outubro, Temperatura: %.2f°C\n", tempLimite[x][1]);
                break;
            case 10:
                printf("Novembro, Temperatura: %.2f°C\n", tempLimite[x][1]);
                break;
            case 11:
                printf("Dezembro, Temperatura: %.2f°C\n", tempLimite[x][1]);
                break;
        }

        repeticao++;

    }while(repeticao <= 1);



    return 0;
}