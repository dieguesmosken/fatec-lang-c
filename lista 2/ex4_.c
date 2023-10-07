#include<stdio.h>
#include<stdlib.h>
//Construa um algoritmo que determine quanto será gasto para encher o tanque de um carro 
// (VG), sabendo-se que o preço da gasolina é de R$ 1,80 e o preço do álcool é de R$ 1,00. O 
// usuário fornecerá os seguintes dados: Tipo de carro (TC) (G – gasolina ou A – álcool) e 
// Capacidade do tanque (CT), em litros.

int main(int argc, char const *argv[])
{
    float vg, ct;
    char tc;

    printf("digite o tipo de carro (G/A): ");
    scanf(" %c", &tc);

    printf("digite a capacidade do tanque: ");
    scanf("%f", &ct);

    if (tc == 'G' || tc == 'g'){
        vg = ct * 1.8;
    } else if (tc == 'A' || tc == 'a'){
        vg = ct * 1;
    } else {
        printf("tipo de carro inválido");
        return 0;
    }

    printf("o valor gasto para encher o tanque é: %.2f", vg);

    //exemplo de entrada: G 50
    //exemplo de saída: o valor gasto para encher o tanque é: 90.00

    return 0;
}

