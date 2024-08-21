#include <stdio.h>

/*
    Escreva um programa em C que leia três valores e apresente qual é o maior e qual é o menor.
*/

int main(){
    int a,b,c;
    int maior, menor;

    printf("Digite um número natural:");
    scanf("%d",&a);
    printf("Digite outro número natural:");
    scanf("%d",&b);
    printf("Digite outro número natural:");
    scanf("%d",&c);

    maior = menor = a;
    
    if(maior < b) maior = b;
    if(maior < c) maior = c;

    if(menor > b) menor = b;
    if(menor > c) menor = c;

    // if(b > a){ //verifica se b é maior que a
    //     maior = b;
    //     if(c > b){
    //         maior = c;//se c é maior que b, logo a é menor que c e b
    //     } else if(c < a){// se c for menor que a, logo c é menor que a e b
    //         menor = c;
    //     } 
    // } else if(c > a){ //logo não b não é maior c, e a é maior que b
    //     maior = c; 
    //     menor = b;
        
    // } else { //logo a é maior que b e c
    //     if(c > b){// verifica quem é menor c ou b
    //         menor = b;
    //     } else {
    //         menor = c;
    //     }
    // }

    printf("\nMaior: %d\tMenor: %d\n",maior,menor);

    return 0;
}