#include <stdio.h>

int main() {
    int num, maior = 0;

    while (1) {
        printf("Digite um número inteiro positivo (ou -1 para encerrar): ");
        scanf("%d", &num);

        if (num == -1) {
            break;
        }

        if (num > maior) {
            maior = num;
        }
    }

    printf("O maior valor fornecido foi: %d\n", maior);

    return 0;
}
