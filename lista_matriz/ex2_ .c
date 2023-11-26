#include <stdio.h>
#include <stdlib.h>
// (Matriz) Traço de uma Matriz: Implemente um programa para calcular o traço de uma
// matriz quadrada (a soma dos elementos da diagonal principal)

#define TAM 3

int main() {
  int matriz[TAM][TAM];
  int i, j, trace = 0;

  printf("Digite os elementos da matriz %dx%d:\n", TAM, TAM);
  for (i = 0; i < TAM; i++) {
    for (j = 0; j < TAM; j++) {
      printf("Elemento [%d][%d]: ", i + 1, j + 1);
      scanf("%d", &matriz[i][j]);

      if (i == j) {
        trace += matriz[i][j];
      }
    }
  }

  printf("O traço da matriz é: %d\n", trace);

  return 0;
}
