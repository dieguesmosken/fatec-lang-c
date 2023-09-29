#include <stdio.h>

int main() {
  
//Faça o algoritmo em c que calcule 
//o valor em Reais (VAL_REAL),  correspondente  aos  dólares  que  um  turista  
//possui  no  cofre  do  hotel.  O  programa  deve solicitar  os  seguintes  
//dados:  Quantidade  de  dólares  guardados  no  cofre  (VAL_DOLAR)  
//e  cotação  do dólar naquele dia (COT). 

float VAL_DOLAR, COT, VAL_REAL;

printf("Digite a quantidade de dólares guardados no cofre: ");
scanf("%f", &VAL_DOLAR);

printf("Digite a cotação do dólar naquele dia: ");
scanf("%f", &COT);

VAL_REAL = VAL_DOLAR * COT;

printf("O valor em reais é: %.2f", VAL_REAL);

//exemplo de saída:
//Digite a quantidade de dólares guardados no cofre: 100
//Digite a cotação do dólar naquele dia: 5.50
//O valor em reais é: 550.00




  return 0;

  
}