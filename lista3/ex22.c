#include <stdio.h>

int main() {
    float CAIXA, PR, total = 0;
    int QTD;
    
    printf("Digite a quantidade de dinheiro existente no caixa: ");
    scanf("%f", &CAIXA);
    
    while (1) {
        printf("Digite a quantidade e o preço do produto (digite -1 para finalizar): ");
        scanf("%d %f", &QTD, &PR);
        
        if (QTD == -1) {
            break;
        }
        
        total += QTD * PR;
    }
    
    if (total > CAIXA * 0.8) {
        total += total * 0.1;
        printf("A compra será realizada a prazo (3x) com juros de 10%%.\n");
    } else {
        total -= total * 0.05;
        printf("A compra será realizada à vista com 5%% de desconto.\n");
    }
    
    printf("O valor a ser pago é: %.2f\n", total);
    
    return 0;
}
