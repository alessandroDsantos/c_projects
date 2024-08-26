#include <stdio.h>

/*
    Um determinado material radioativo perde metade de sua massa a cada 50 segundos. Dada a 
    massa inicial, em gramas, faça um programa que determine o tempo necessário para que essa massa
    se torne menor que 0,05 gramas.
*/

int main(){
    float massa;
    int tempo = 0, h, min, s, resto;

    printf("\nDigite a massa inicial do material radioativo, em gramas: ");
    scanf("%f",&massa);

    massa = massa * 100.0;

    while(massa >= 5){
        massa/=2.0;
        tempo += 50;
    }

    h = tempo / 3600;
    resto = tempo % 3600;
    min = resto / 60;
    s = resto % 60;

    printf("Massa Final: %f\n", massa/100.0);
    printf("Tempo decorrido: %dh %dmin %ds\n", h, min, s);

    return 0;
}