#include <stdio.h>

int main() {
  
//Faça o algoritmo em c para calcular 
//quanto será pago por um produto (PAG), 
//sendo que o preço do produto (PR) e o desconto (D) 
//são fornecidos pelo usuário. 
// Apresentar o valor a ser pago pelo produto.

  float pr, d, pag;

  // Pedir o preço do produto ao usuário

  printf("Digite o preço do produto: ");
  scanf("%f", &pr); // pr = preco do produto

  // Pedir o desconto ao usuário

  printf("Digite o desconto: ");
  scanf("%f", &d);

  // Calcular o valor a ser pago

  pag = pr - (pr * (d / 100));

  // Exibir o valor a ser pago

  printf("O valor a ser pago é: %.2f reais\n", pag);

  return 0;

  
}