#include<stdio.h>
#include<stdlib.h>


// (Matriz)Soma dos Elementos de uma Matriz: Escreva um programa que leia uma matriz 3×3
// de números inteiros e calcule a soma de todos os seus elementos. Por exemplo, se a matriz for
// [[1,2,3],[4,5,6],[7,8,9]][[1,2,3],[4,5,6],[7,8,9]], a soma de seus elementos será 45

int main(){
    int i, j, matriz[3][3], soma = 0;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Informe o valor da posição [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }
    printf("A soma dos elementos da matriz é %d\n", soma);
    return 0;
}