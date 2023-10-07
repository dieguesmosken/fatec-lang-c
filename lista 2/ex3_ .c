#include<stdio.h>
#include<stdlib.h>
//Construa um algoritmo que, tendo como dados de entrada a altura (H) e o sexo (S) de 
// uma pessoa calcule e apresente seu peso ideal utilizando as seguintes fórmulas:
// Para homens: Peso ideal (P) = (72,7 * H) – 58
// Para mulheres: Peso ideal (P) = (62,1 * H) – 44,7

int main(int argc, char const *argv[])
{
    float altura, peso;
    char sexo; 

    printf("digite sua altura: ");

    scanf("%f", &altura);

    printf("digite seu sexo (M/F): ");

    scanf(" %c", &sexo);

    if (sexo == 'M' || sexo == 'm'){
        peso = (72.7 * altura) - 58;
    } else if (sexo == 'F' || sexo == 'f'){
        peso = (62.1 * altura) - 44.7;
    } else {
        printf("sexo inválido");
        return 0;
    }

    printf("seu peso ideal é: %.2f", peso);
    return 0;
}

