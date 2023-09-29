#include <stdio.h>

int main() {
  
// Faça o algoritmo (diagrama de blocos e português 
// estruturado) para calcular qual foi a porcentagem 
//de desconto dada em um determinado produto (DESC),
// sabendo-se o preço original do produto (PRECO) 
// e o preço que foi cobrado por ele depois do 
//desconto (PRECOF).

  float desc, preco, precof;

  // Pedir o preço do produto ao usuário

  printf("Digite o preço do produto: ");
  scanf("%f", &preco); // pr = preco do produto

  // Pedir o preco apos o desconto ao usuário

  printf("Digite o preco apos desconto: ");
  scanf("%f", &precof);

  // Calcular a porcentagem de desconto

  desc = ((preco - precof) / preco) * 100;

  // Exibir a porcentagem de desconto

  printf(" %.0f porcento de desconto\n", desc);

  return 0;

  
}