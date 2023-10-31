#include <stdio.h>

int main() {
    int num, menor = 0;
    char resposta;

    while (1) {
        printf("Digite um número inteiro positivo: ");
        scanf("%d", &num);

        if (num < menor || menor == 0) {
            menor = num;
        }

        printf("Deseja continuar? (S/N): ");
        scanf(" %c", &resposta);

        if (resposta != 'S' && resposta != 's') {
            break;
        }
    }

    printf("O menor valor fornecido foi: %d\n", menor);

    return 0;
}
