#include <stdio.h>

int main() {
  
//Baseado no algoritmo abaixo, o que é apresentado como saída 
//(em tela ou papel) desse programa? 
// programa EXERC_12 
// var  
//   A, B, C, D: real  
// início  
//   A->2  
//   B->4  
//   C-> (A+B)*B  
//   D->C*B/(A*A)  
//   A->D/(C+B)  
//   B->B+A  
//   escreva “A variavel A vale:”, A  
//   escreva “A variavel B vale:”, B 
//   escreva “A variavel C vale:”, C 
//   escreva “A variavel D vale:”, D 
// fim

float A, B, C, D;

A = 2;
B = 4;
C = (A+B)*B;
D = C*B/(A*A);
A = D/(C+B);
B = B+A;

printf("A variável A vale: %.2f\n", A);
printf("A variável B vale: %.2f\n", B);
printf("A variável C vale: %.2f\n", C);
printf("A variável D vale: %.2f\n", D);

//exemplo de saída:
//A variável A vale: 0.00
//A variável B vale: 4.00
//A variável C vale: 24.00
//A variável D vale: 24.00


  return 0;




  //entrada

  //processamento

  //saída

  
}