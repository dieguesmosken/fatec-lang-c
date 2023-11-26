#include<stdio.h>
#include<stdlib.h>
//  (Matriz)Escreva um programa que leia uma matriz N x N onde N e um número inteiro
// dado pelo usuário e calcule o determinante dessa matriz. O determinante de uma matriz
// quadrada é calculado pela soma dos produtos dos elementos de uma linha ou coluna pelos
// seus respectivos cofatores. Por exemplo, o determinante da matriz [[1,2,3],[4,5,6],[7,8,9]]
// [[1,2,3],[4,5,6],[7,8,9]] é 0

int main(){
    int i, j, n, determinante = 0;
    printf("Informe o valor de N: ");
    scanf("%d", &n);
    int matriz[n][n];
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("Informe o valor da posição [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
    determinante = (matriz[0][0] * matriz[1][1] * matriz[2][2]) + (matriz[0][1] * matriz[1][2] * matriz[2][0]) + (matriz[0][2] * matriz[1][0] * matriz[2][1]) - (matriz[0][2] * matriz[1][1] * matriz[2][0]) - (matriz[0][0] * matriz[1][2] * matriz[2][1]) - (matriz[0][1] * matriz[1][0] * matriz[2][2]);
    printf("O determinante da matriz é %d\n", determinante);
    return 0;
}