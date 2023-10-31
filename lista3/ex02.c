#include <stdio.h>

// Construa um programa que leia a quantidade (Q) e o preço (PR) de 45 produtos diferentes,
// comprados por uma empresa, e apresente o total gasto por ela

int main() {
    int Q, i;
    float PR, total = 0;
    
    for (i = 1; i <= 4; i++) {
        printf("Digite a quantidade e o preço do produto %d: ", i);
        scanf("%d %f", &Q, &PR);
        
        total += Q * PR;
    }
    
    printf("O total gasto pela empresa foi: %.2f\n", total);
    
    return 0;
}
