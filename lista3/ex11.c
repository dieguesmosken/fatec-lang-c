#include <stdio.h>

int main() {
    int num, soma = 0, media = 0, count = 0;

    while (1) {
        printf("Digite um número inteiro positivo (ou -1 para encerrar): ");
        scanf("%d", &num);

        if (num == -1) {
            break;
        }

        soma += num;
        count++;
    }

    if (count > 0) {
        media = soma / count;
    }

    printf("A soma dos números é: %d\n", soma);
    printf("A média dos números é: %d\n", media);

    return 0;
}
