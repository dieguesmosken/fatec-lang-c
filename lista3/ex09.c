#include <stdio.h>

int main() {
    int i, num, maior, menor;
    
    printf("Digite o número 1: ");
    scanf("%d", &num);
    
    maior = menor = num;
    
    for (i = 2; i <= 20; i++) {
        printf("Digite o número %d: ", i);
        scanf("%d", &num);
        
        if (num > maior) {
            maior = num;
        }
        
        if (num < menor) {
            menor = num;
        }
    }
    
    printf("O maior valor fornecido foi: %d\n", maior);
    printf("O menor valor fornecido foi: %d\n", menor);
    
    return 0;
}
