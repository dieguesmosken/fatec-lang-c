#include<stdio.h>
#include<stdlib.h>
//  (Matriz)Escreva um programa que leia uma matriz N x N onde N e um número inteiro
// dado pelo usuário e preencha essa matriz com números digitados pelo usuário. Após o
// preenchimento peça ao usuário entrar com um valor e procure se esse valor está presente na
// matriz. Caso esteja escreva a mensagem: “Valor encontrado”, caso contrário escreva: “Valor
// não encontrado.

int main(){
    int i, j, n, valor, cont = 0;
    printf("Informe o valor de N: ");
    scanf("%d", &n);
    int matriz[n][n];
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("Informe o valor da posição [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Informe o valor a ser procurado: ");
    scanf("%d", &valor);
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(matriz[i][j] == valor){
                printf("Valor encontrado\n");
                cont++;
            }
        }
    }
    if(cont == 0){
        printf("Valor não encontrado\n");
    }
    return 0;
}