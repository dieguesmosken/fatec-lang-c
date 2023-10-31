#include <stdio.h>

int main() {
    float salario, novo_salario, aumento, gasto_adicional = 0;

    while (1) {
        printf("Digite o salário do funcionário (ou um valor negativo para encerrar): ");
        scanf("%f", &salario);

        if (salario < 0) {
            break;
        }

        if (salario < 500) {
            aumento = salario * 0.15;
        } else if (salario <= 1000) {
            aumento = salario * 0.10;
        } else {
            aumento = salario * 0.05;
        }

        novo_salario = salario + aumento;
        gasto_adicional += aumento;

        printf("O novo salário do funcionário é: %.2f\n", novo_salario);
    }

    printf("A empresa gastará um total adicional de: %.2f\n", gasto_adicional);

    return 0;
}
