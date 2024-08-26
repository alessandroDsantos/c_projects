#include <stdio.h>

/*
    Uma rainha requisitou os serviços de um monge e disse-lhe que pagaria qualquer preço. O 
    monge, necessitando de alimentos, indagou à rainha sobre o pagamento, se poderia ser feito com 
    grãos de trigo dispostos em um tabuleiro de xadrez (que possui 64 casas), de tal forma que o 
    primeiro quadro deveria conter apenas um grão e os quadros subsequentes, o dobro do quadro 
    anterior. Crie um programa para calcular o total de grãos de trigo que o monge recebeu.
*/

int main(){

    long double qtdGraos = 1, somatorioGraos = 0;

    for(int i = 1; i <= 64; i++){
        printf("A casa %d tem %.0Lf grãos de trigo\n", i, qtdGraos);
        somatorioGraos += qtdGraos;
        qtdGraos*=2;
    }

    printf("A quantidade de grãos de que monge recebeu foi de: %.0Lf\n", somatorioGraos);

    return 0;
}