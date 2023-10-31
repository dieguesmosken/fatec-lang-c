#include <stdio.h>

// Construa um programa que apresente o valor de H, sendo H calculado por:
// H = 1 + 2 + 3 + 4 + ... + N

int main() {
    int N, i, H = 0;
    
    printf("Digite o valor de N: ");
    scanf("%d", &N);
    
    for (i = 1; i <= N; i++) {
        H += i;
    }
    
    printf("O valor de H é: %d\n", H);
    
    return 0;
}
