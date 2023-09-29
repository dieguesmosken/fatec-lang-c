#include <stdio.h>

int main() {
  
// Faça  o  algoritmo em c que  calcule  a  idade  de  uma  
//pessoa, sendo  que  o  ano  atual  (AA)  e  o  ano  do  
//nascimento  da  pessoa  (AN)  são  fornecidos  pelo  usuário. 
// (considere  que  a  pessoa  já  fez  aniversário  nesse  ano).
//  Apresentar  a  idade  da  pessoa  depois  de calculada

int AA, AN, idade;

printf("Digite o ano atual: ");
scanf("%d", &AA);

printf("Digite o ano de nascimento: ");
scanf("%d", &AN);

idade = AA - AN;

printf("A idade da pessoa é: %d", idade);

//exemplo de entrada: 2023, 2002
//exemplo de saída: 21

  return 0;

  
}