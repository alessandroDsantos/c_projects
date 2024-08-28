#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    short int num[10];

    srand(time(NULL));

    for(int i = 0; i < 10; i++){
        num[i] = rand();
    }

    printf("\n");

    for(int i = 0; i < 10; i++){
        printf("%hd ", num[i]);
    }

    printf("\n\n");

    return 0;
}