#include <stdio.h>

int main() {
  
//Faça  o  algoritmo em c  para  calcular  o  volume  de  uma  esfera 
// (VOL). O raio (R) da esfera será fornecido pelo usuário. Obs:  VOL  =  3.14*R2  (apresentar  o  volume da 
// esfera) 

float VOL, R;

printf("Digite o raio da esfera: ");
scanf("%f", &R);

VOL = 3.14 * (R * R);

printf("O volume da esfera é: %.2f", VOL);  

//exemplo de entrada: 2
//exemplo de saída: 12.56



  return 0;

  
}