#include <stdio.h>

/*
    Escreva um programa que repita a leitura de uma senha até que ela seja válida. Para cada leitura 
    de senha incorreta informada, escrever a mensagem “Senha Invalida”. Quando a senha for 
    informada corretamente deve ser impressa a mensagem “Acesso Permitido” e o programa deve ser 
    encerrado. Considere que a senha correta é o valor 123456. 
*/

int main(){
    int senha, senhaValida = 123456;

    printf("\nDigite a senha: ");
    scanf("%d",&senha);
    
    while(senha != senhaValida){
        printf("\nSenha Invalida. Digite a senha novamente: ");
        scanf("%d",&senha);
    }
    
    printf("\nAcesso Permitido\n");
    
    return 0;
}