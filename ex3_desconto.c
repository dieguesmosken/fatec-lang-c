#include <stdio.h>

int main() {
  
// Faça o algoritmo em c para calcular o valor monetário do 
// desconto (D), sendo que o preço do produto (PR) é fornecido pelo usuário e o desconto é de 5%. 
// Apresentar o valor do desconto.

  float pr, d;

  // Pedir o preço do produto ao usuário
  printf("Digite o preço do produto: ");
  scanf("%f", &pr);

  // Calcular o desconto
  d = pr * 0.05;

  // Exibir o desconto calculado
  printf("O desconto é: %.2f reais\n", d);

  printf("O preço do produto com desconto é: %.2f reais\n", pr - d);
  


  return 0;
}