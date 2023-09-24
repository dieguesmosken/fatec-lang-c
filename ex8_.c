#include <stdio.h>

int main() {

  //desafio:
  
// Faça o algoritmo em c para calcular o valor a ser pago pelo 
// período de estacionamento do automóvel (PAG). O usuário  
// entra com os seguintes dados: hora  (HE)  e  minuto  (ME)  
// de  entrada,  hora  (HS)  e  minuto  (MS)  de  saída.  
//Sabe-se  que  este estacionamento  cobra  R$  4,00,  mas  
//calcula  as  frações  de  hora  também.  Por  exemplo,  
// se  a pessoa ficar 1 hora e  quinze minutos, pagará R$  5,00  
//(R$ 4,00 pela hora e R$ 1,00 pelos quinze minutos).

int HE, ME, HS, MS, PAG, H, M;

printf("Digite a hora de entrada: ");
scanf("%d", &HE);

printf("Digite o minuto de entrada: ");
scanf("%d", &ME);

printf("Digite a hora de saída: ");
scanf("%d", &HS);

printf("Digite o minuto de saída: ");
scanf("%d", &MS);

H = HS - HE;
M = MS - ME;

if (M > 0) {
  H = H + 1;
}

PAG = H * 4;

printf("O valor a ser pago é: %d", PAG);

  return 0;

  
}