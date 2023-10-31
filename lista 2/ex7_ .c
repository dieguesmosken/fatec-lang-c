#include<stdio.h>
#include<stdlib.h>
//Construa  um  algoritmo  que,  recebendo  os  valores  de  vendas  do  mês  de  determinado 
// vendedor (VM) e o nome do mesmo (NOME), apresente o nome, quando o valor da venda 
// estiver entre R$ 10000,00 e R$ 50000,00 (inclusive).


int main(int argc, char const *argv[])
{

    float valor_vendas;
    char nome[50];

    printf("digite o nome do vendedor: ");
    scanf("%s", &nome);

    printf("digite o valor das vendas: ");
    scanf("%f", &valor_vendas);

    if (valor_vendas >= 10000 && valor_vendas <= 50000){
        printf("o vendedor %s recebeu um valor de: R$ %.2f", nome, valor_vendas);
    }else if (valor_vendas < 10000){
        printf("o vendedor %s não recebeu nenhum valor acima de R$ 10000,00", nome);
    }else if (valor_vendas > 50000){
        printf("o vendedor %s não recebeu nenhum valor abaixo de R$ 50000,00", nome);
    }else{
        printf("o vendedor %s não recebeu nenhum valor", nome);
    }
   
    return 0;
}

