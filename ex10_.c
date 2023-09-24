#include <stdio.h>

int main() {
  
//Faça  o  algoritmo  em c  que  receba  dois  valores  inteiros  nas variáveis 
//A e B. O programa deve trocar os valores entre as variáveis (ou seja,
//ao término do programa a variável A deve ter o valor inicial de B 
//e vice-versa). Apresentar as duas variáveis o final.

int A, B, AUX;

printf("Digite o valor de A: ");
scanf("%d", &A);

printf("Digite o valor de B: ");
scanf("%d", &B);

AUX = A;
A = B;
B = AUX;

printf("O valor de A é: %d\n", A);
printf("O valor de B é: %d\n", B);


  return 0;

  
}