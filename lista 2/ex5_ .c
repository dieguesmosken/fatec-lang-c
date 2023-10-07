#include<stdio.h>
#include<stdlib.h>
//Construa um algoritmo que leia um número inteiro (positivo ou negativo) e apresente o seu 
//módulo (número sem sinal).


int main(int argc, char const *argv[])
{
    
    int numero;
    
    printf("digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero < 0){
        numero = numero * -1;
    }

    printf("o módulo do número é: %d", numero);

    //exemplo de entrada: -5
    //exemplo de saída: o módulo do número é: 5
    
    return 0;
}

