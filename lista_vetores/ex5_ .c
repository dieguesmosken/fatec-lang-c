#include<stdio.h>
#include<stdlib.h>
// (vetor)Leitura e Soma de Posições Específicas: Leia um vetor de 12 posições e, em seguida,
// leia dois valores X e Y correspondentes a duas posições no vetor. O programa deve escrever a
// soma dos valores encontrados nessas posições

int main(){
    int i, vetor[12], x, y, soma = 0;
    for(i = 0; i < 12; i++){
        printf("Informe o valor da posição %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    printf("Informe o valor de X: ");
    scanf("%d", &x);
    printf("Informe o valor de Y: ");
    scanf("%d", &y);
    soma = vetor[x - 1] + vetor[y - 1];
    printf("A soma dos valores encontrados nas posições %d e %d é %d\n", x, y, soma);
    return 0;
}
