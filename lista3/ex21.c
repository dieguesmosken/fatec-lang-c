#include <stdio.h>

int main() {
    float PE, total;
    int CP;
    
    printf("Digite o preço da etiqueta do produto: ");
    scanf("%f", &PE);
    printf("Condições de pagamento:\n");
    printf("1 - À vista em dinheiro ou cheque, recebe 10%% de desconto\n");
    printf("2 - À vista no cartão de crédito, recebe 5%% de desconto\n");
    printf("3 - Em duas vezes, preço normal de etiqueta sem juros\n");
    printf("4 - Em duas vezes, preço normal de etiqueta mais juros de 10%%\n");
    printf("Digite a condição de pagamento (1, 2, 3 ou 4): ");
    scanf("%d", &CP);
    
    switch (CP) {
        case 1:
            total = PE - PE * 0.1;
            break;
        case 2:
            total = PE - PE * 0.05;
            break;
        case 3:
            total = PE;
            break;
        case 4:
            total = PE + PE * 0.1;
            break;
        default:
            printf("Condição de pagamento inválida!\n");
            return 1;
    }
    
    printf("O total da compra é: %.2f\n", total);
    
    return 0;
}
