#include <stdio.h>

/*
    Você deve fazer um programa que apresente a sequência conforme o exemplo abaixo.
    I=1 J=7 rm 1->J && repete I
    I=1 J=6
    I=1 J=5 add 2->I e 4->J
    I=3 J=9 rm 1->J && repete I
    I=3 J=8
    I=3 J=7 add 2->I e 4->J
    I=5 J=11 rm 1->J && repete I
    I=5 J=10
    I=5 J=9 add 2->I e 4->J
    ...
    I=9 J=15
    I=9 J=14
    I=9 J=13
*/

int main(){

    int i = 1, j = 7;

    for(int x = 1; x <= 5; x++){
        for(int y = 1; y <= 3; y++){
            printf("I=%d J=%d\n", i, j--);
        }
        //printf("\nI*=%d J*=%d", i+=2, j+=4);
        i+=2;
        j+=5;
    }

    return 0;
}