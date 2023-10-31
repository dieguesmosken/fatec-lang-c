#include <stdio.h>

int main() {
    int i, num, maior = 0;

    for (i = 1; i <= 20; i++) {
        printf("Digite o número %d: ", i);
        scanf("%d", &num);

        if (num > maior) {
            maior = num;
        }
    }

    printf("O maior valor fornecido foi: %d\n", maior);

    return 0;
}
