//  Exercício: Cálculo do Determinante de uma Matriz 2x2
// Escreva um programa em C para calcular o determinante de uma matriz 2x2. O programa
// deve:
// 1. Permitir que o usuário insira os 4 elementos da matriz 2x2.
// 2. Calcular o determinante da matriz.
// 3. Exibir o determinante calculado.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz[2][2];
    int i, j, det;

    printf("Digite os elementos da matriz 2x2:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++){
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    det = matriz[0][0] * matriz[1][1] - matriz[0][1] * matriz[1][0];

    printf("O determinante da matriz é: %d\n", det);

    return 0;
}