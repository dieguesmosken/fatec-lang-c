#include<stdio.h>
#include<stdlib.h>

// for /L %i in (1,1,24) do type nul > ex%i_.c

// construa um algoritmo que leia o valor de uma conta de luz (CL) e, caso o valor seja maior 
// que R$ 50,00 apresente a mensagem: “Você está gastando muito”. Caso contrário não 
// exiba mensagem nenhuma.


int main(int argc, char const *argv[])
{
    float valor;

    printf("digite o valor da conta de luz: ");
    scanf("%f", &valor);

    if (valor >= 50 ){
        printf("Você está gastando muito");
    }

    return 0;
}
