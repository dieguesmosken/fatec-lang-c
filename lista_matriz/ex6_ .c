#include <stdio.h>
#include <stdlib.h>
// (Vetor)Busca de Valor em um Vetor: Leia um vetor de 20 posições e, em seguida, um valor
// X. O programa deve buscar o valor X no vetor e informar sua posição ou se não foi encontrado

int main(){
    int i, vetor[20], x, cont = 0;
    for(i = 0; i < 20; i++){
        printf("Informe o valor da posição %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    printf("Informe o valor de X: ");
    scanf("%d", &x);
    for(i = 0; i < 20; i++){
        if(vetor[i] == x){
            printf("O valor %d foi encontrado na posição %d\n", x, i + 1);
            cont++;
        }
    }
    if(cont == 0){
        printf("O valor %d não foi encontrado\n", x);
    }
    return 0;
}