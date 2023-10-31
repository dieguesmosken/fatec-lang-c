#include <stdio.h>

int main() {
    int i, num, maior = 0, menor = 0;

    for (i = 1; i <= 20; i++) {
        printf("Digite o número %d: ", i);
        scanf("%d", &num);

        if (i == 1) {
            maior = menor = num;
        } else {
            if (num > maior) {
                maior = num;
            }
            if (num < menor) {
                menor = num;
            }
        }
    }

    printf("O maior valor fornecido foi: %d\n", maior);
    printf("O menor valor fornecido foi: %d\n", menor);

    return 0;
}
