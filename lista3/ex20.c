#include <stdio.h>

int main() {
    float HT, VH, salarioLiquido;
    char resposta;
    
    do {
        printf("Digite as horas trabalhadas e o valor da hora trabalhada: ");
        scanf("%f %f", &HT, &VH);
        
        salarioLiquido = HT * VH - HT * VH * 0.11 - HT * VH * 0.15;
        
        printf("O salário líquido do empregado é: %.2f\n", salarioLiquido);
        
        printf("Deseja calcular o salário de outro funcionário? (S/N): ");
        scanf(" %c", &resposta);
    } while (resposta == 'S' || resposta == 's');
    
    return 0;
}
