#include <stdio.h>

int main() {
  
//Faça  o  algoritmo em c que  calcule  a  quantidade  de  tijolos iguais (QTD) 
//necessários para construir uma determinada parede. 
//São dados de entrada do programa: dimensões  do  tijolo  (comprimento  –  
//CT  e  largura  –  LT)  e  dimensões  da  parede  a  ser  construída 
//(comprimento – CP e largura – LP).

int CT, LT, CP, LP, QTD;

printf("Digite o comprimento do tijolo: ");
scanf("%d", &CT);

printf("Digite a largura do tijolo: ");
scanf("%d", &LT);

printf("Digite o comprimento da parede: ");
scanf("%d", &CP);

printf("Digite a largura da parede: ");
scanf("%d", &LP);

QTD = (CP * LP) / (CT * LT);

printf("A quantidade de tijolos necessários é: %d", QTD);

//exemplo de saída:
//Digite o comprimento do tijolo: 10
//Digite a largura do tijolo: 5
//Digite o comprimento da parede: 100
//Digite a largura da parede: 50
//A quantidade de tijolos necessários é: 100


  return 0;

  
}