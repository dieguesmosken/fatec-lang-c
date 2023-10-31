#include <stdio.h>

int main() {
    int num, maior, menor;
    char continuar;
    
    printf("Digite o número 1: ");
    scanf("%d", &num);
    
    maior = menor = num;
    
    do {
        printf("Deseja continuar? (S/N): ");
        scanf(" %c", &continuar);
        
        if (continuar == 'N' || continuar == 'n') {
            break;
        }
        
        printf("Digite um número: ");
        scanf("%d", &num);
        
        if (num > maior) {
            maior = num;
        }
        
        if (num < menor) {
            menor = num;
        }
    } while (1);
    
    printf("O maior valor fornecido foi: %d\n", maior);
    printf("O menor valor fornecido foi: %d\n", menor);
    
    return 0;
}
