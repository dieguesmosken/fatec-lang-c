#include<stdio.h>
#include<stdlib.h>
//Construa um algoritmo que leia dois números (A e B). Caso A seja igual a B, apresentar a 
// soma  dos  dois.  Caso  um  seja  maior  que  o  outro,  apresentar  a  diferença  entre  os  dois 
// números (sempre lembrando que a diferença entre dois números é SEMPRE positiva).

int main(int argc, char const *argv[])
{

    int a, b, soma, diferenca;

    printf("digite o valor de A: ");
    scanf("%d", &a);

    printf("digite o valor de B: ");
    scanf("%d", &b);

    if (a == b){
        soma = a + b;
        printf("a soma dos dois números é: %d", soma);
    }else if (a > b){
        diferenca = a - b;
        printf("a diferença entre os dois números é: %d", diferenca);
    }else if (b > a){
        diferenca = b - a;
        printf("a diferença entre os dois números é: %d", diferenca);
    }else{
        printf("não foi possível realizar a soma ou a diferença");
    }

    // exemplo de entrada: 10 10
    // exemplo de saída: a soma dos dois números é: 20

    // exemplo de entrada: 10 5
    // exemplo de saída: a diferença entre os dois números é: 5

    // exemplo de entrada: 5 10
    // exemplo de saída: a diferença entre os dois números é: 5
    
    return 0;
}

