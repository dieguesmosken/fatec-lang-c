#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	      
  // No algoritmo abaixo, o que está errado? 
  
// programa EXERC_13 
// var  
//   A, B, C, RESULTADO: inteiro  
// início  
//   leia A  
//   leia B  
//   RASCUNHO->(A-B)*A/3 
//   RESULTADO->B-100  
//   escreva “O resultado da operação foi:”, RESULTADO 
// fim  

//Resposta:
//A variável RASCUNHO não foi declarada.

//programa EXERC_13
//var
//  A, B, C, RESULTADO, RASCUNHO: inteiro
//inicio
//  leia A
//  leia B
//  RASCUNHO->(A-B)*A/3
//  RESULTADO->B-100
//  escreva “O resultado da operação foi:”, RESULTADO
//fim

//em c:
int A, B, C, RESULTADO, RASCUNHO;

printf("Digite o valor de A: ");
scanf("%d", &A);

printf("Digite o valor de B: ");
scanf("%d", &B);

RASCUNHO = (A-B)*A/3;
RESULTADO = B-100;

printf("O resultado da operação foi: %d", RESULTADO);


	return 0;
}