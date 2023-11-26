// Crie um programa que leia uma matriz M de dimensões 3×3 e
// calcule sua matriz transposta MT.
#include <stdio.h>
#define TAM 3

int main() {
    int M[TAM][TAM];
    int MT[TAM][TAM];

    // Leitura da matriz M
    printf("Digite os elementos da matriz M:\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &M[i][j]);
        }
    }

    // Cálculo da matriz transposta MT
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            MT[j][i] = M[i][j];
        }
    }

    // Impressão da matriz transposta MT
    printf("Matriz transposta MT:\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", MT[i][j]);
        }
        printf("\n");
    }

    return 0;
}

