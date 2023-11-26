// 3 – (Vetor) Multiplicação de
// Matrizes: Desenvolva um programa que leia duas matrizes A e B de dimensões 2×2 e calcule o
// produto dessas matrizes, resultando em uma nova matriz C. A multiplicação de matrizes é
// realizada multiplicando-se as linhas de A pelas colunas de B e somando os produtos
// correspondentes para formar os elementos de C.

#include <stdio.h>
#include <stdlib.h>
#define TAM 2

int main() {
  int matrizA[TAM][TAM], matrizB[TAM][TAM], matrizC[TAM][TAM];
  int i, j, k;

  printf("Digite os elementos da matriz A %dx%d:\n", TAM, TAM);
  for (i = 0; i < TAM; i++) {
    for (j = 0; j < TAM; j++) {
      printf("Elemento [%d][%d]: ", i + 1, j + 1);
      scanf("%d", &matrizA[i][j]);
    }
  }

  printf("Digite os elementos da matriz B %dx%d:\n", TAM, TAM);
  for (i = 0; i < TAM; i++) {
    for (j = 0; j < TAM; j++) {
      printf("Elemento [%d][%d]: ", i + 1, j + 1);
      scanf("%d", &matrizB[i][j]);
    }
  }

  for (i = 0; i < TAM; i++) {
    for (j = 0; j < TAM; j++) {
      matrizC[i][j] = 0;
      for (k = 0; k < TAM; k++) {
        matrizC[i][j] += matrizA[i][k] * matrizB[k][j];
      }
    }
  }

  printf("A matriz C é:\n");
  for (i = 0; i < TAM; i++) {
    for (j = 0; j < TAM; j++) {
      printf("%d ", matrizC[i][j]);
    }
    printf("\n");
  }

  return 0;
}

