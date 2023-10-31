#include <stdio.h>

int main() {
    int Q, i;
    float PR, total = 0;
    
    printf("Digite a quantidade e o preço de cada produto (digite -1 para finalizar): \n");
    
    while (1) {
        printf("Quantidade: ");
        scanf("%d", &Q);
        
        if (Q == -1) {
            break;
        }
        
        printf("Preço: ");
        scanf("%f", &PR);
        
        total += Q * PR;
    }
    
    printf("O total gasto pela empresa foi: %.2f\n", total);
    
    return 0;
}
