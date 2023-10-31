#include <stdio.h>

int main() {
    int HE, ME, HS, MS, horas, minutos, pag;

    printf("Digite a hora de entrada: ");
    scanf("%d", &HE);
    printf("Digite o minuto de entrada: ");
    scanf("%d", &ME);

    printf("Digite a hora de saída: ");
    scanf("%d", &HS);
    printf("Digite o minuto de saída: ");
    scanf("%d", &MS);

    horas = HS - HE;
    minutos = MS - ME;

    if (minutos > 0) {
        horas++;
    }

    if (horas <= 1) {
        pag = 4;
    } else if (horas == 2) {
        pag = 6;
    } else {
        pag = 6 + (horas - 2);
    }

    printf("O valor a ser pago pelo estacionamento é: %d\n", pag);

    return 0;
}
