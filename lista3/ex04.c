#include <stdio.h>

int main() {
    int Q, i;
    float PR, total = 0;

    while (1) {
        printf("Digite a quantidade e o preço do produto (ou -1 para encerrar): ");
        scanf("%d", &Q);

        if (Q == -1) {
            break;
        }

        scanf("%f", &PR);

        total += Q * PR;
    }

    printf("O total gasto pela empresa foi: %.2f\n", total);

    return 0;
}
