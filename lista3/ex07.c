#include <stdio.h>

int main() {
    int N, i, fatorial = 1;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("Não é possível calcular o fatorial de um número negativo.\n");
    } else {
        for (i = 1; i <= N; i++) {
            fatorial *= i;
        }

        printf("O fatorial de %d é: %d\n", N, fatorial);
    }

    return 0;
}
