#include <stdio.h>
#include <stdlib.h>
// Construa um algoritmo que leia o preço de um produto (P) e apresente a mensagem: “Em
//  promoção”, caso o preço seja maior ou igual a R$ 50,00 e menor  ou  igual  a  R$  100,00.
//  Caso contrário, deve apresentar a mensagem: “Preço Normal”.

int main(int argc, char const *argv[])
{

    float preco;

    printf("digite o preço do produto: ");
    scanf("%f", &preco);

    if (preco >= 50 && preco <= 100)
    {
        printf("Em promoção");
    }
    else
    {
        printf("Preço Normal");
    }

    // exemplo de entrada: 50
    // exemplo de saída: Em promoção

    return 0;
}
