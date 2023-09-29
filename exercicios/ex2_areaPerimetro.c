#include <stdio.h>

int main() {
  float comp, larg, area, per;

  // Pedir o comprimento da sala ao usuário
  printf("Digite o comprimento da sala em metros: ");
  scanf("%f", &comp);

  // Pedir a largura da sala ao usuário
  printf("Digite a largura da sala em metros: ");
  scanf("%f", &larg);

  // Calcular a área da sala
  area = comp * larg;

  // calcular o perimetro da sala
  per = 2 * (comp + larg);

  // Exibir a área calculada
  printf("A área da sala é: %.2f metros quadrados\n", area);

  // Exibir o perimetro calculado
  printf("O perimetro da sala é: %.2f metros\n", per);

  


  return 0;
}