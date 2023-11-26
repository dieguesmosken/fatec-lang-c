
//  Exercício: Cálculo do Determinante de uma Matriz 3x3
// Escreva um programa em C para calcular o determinante de uma matriz 3x3. O programa
// deve:
// 1. Permitir que o usuário insira os 9 elementos da matriz 3x3.
// 2. Calcular o determinante da matriz.
// 3. Exibir o determinante calculado.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz[3][3];
    int i, j, det;

    printf("Digite os elementos da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++){
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    det = matriz[0][0] * matriz[1][1] * matriz[2][2] +
          matriz[0][1] * matriz[1][2] * matriz[2][0] +
          matriz[0][2] * matriz[1][0] * matriz[2][1] -
          matriz[0][2] * matriz[1][1] * matriz[2][0] -
          matriz[0][1] * matriz[1][0] * matriz[2][2] -
          matriz[0][0] * matriz[1][2] * matriz[2][1];

    printf("O determinante da matriz é: %d\n", det);

    return 0;
}