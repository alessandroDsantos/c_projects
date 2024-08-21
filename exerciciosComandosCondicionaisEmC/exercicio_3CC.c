#include <stdio.h> 

/*
    Escreva um programa em C que leia um número e informe se ele é divisível por 2, por 3 ou por
    5, ou se não é divisível por nenhum deles.
*/

int main(){
    int num;
    
    printf("\nDigite um número para saber se ele é divisível por 2, 3 ou/e 5:");
    scanf("%d",&num);

    if(num % 2 == 0 || num % 3 == 0 || num % 5 == 0){
        printf("\n%d é divisível por:\n",num);
        if(num % 2 == 0){
            printf("-> 2\n");
        } 
        
        if(num % 3 == 0){
            printf("-> 3\n");
        } 
        
        if(num % 5 == 0){
            printf("-> 5\n");
        } 
    } else {
        printf("\n%d não é divisível por 2, 3 ou 5!\n",num);
    }

    return 0;
}