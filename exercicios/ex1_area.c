#include <stdio.h>

int main() {
  float comp, larg, area;

  // Pedir o comprimento da sala ao usuário
  printf("Digite o comprimento da sala em metros: ");
  scanf("%f", &comp);

  // Pedir a largura da sala ao usuário
  printf("Digite a largura da sala em metros: ");
  scanf("%f", &larg);

  // Calcular a área da sala
  area = comp * larg;

  // Exibir a área calculada
  printf("A área da sala é: %.2f metros quadrados\n", area);

  return 0;
}