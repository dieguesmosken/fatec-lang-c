#include <stdio.h>

int main() {
    float L, C, area = 0;
    char resposta;
    
    do {
        printf("Digite a largura e o comprimento do cômodo: ");
        scanf("%f %f", &L, &C);
        
        area += L * C;
        
        printf("Deseja continuar? (S/N): ");
        scanf(" %c", &resposta);
    } while (resposta == 'S' || resposta == 's');
    
    printf("A área total da casa é: %.2f\n", area);
    
    return 0;
}
