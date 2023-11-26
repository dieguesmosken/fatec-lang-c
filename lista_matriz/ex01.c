#include <stdio.h>

int main() {
    int n, i;
    float age[100], weight[100], sum_age = 0, avg_age;
    
    printf("Informe a quantidade de pessoas: ");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        printf("Informe a idade da pessoa %d: ", i + 1);
        scanf("%f", &age[i]);
        
        printf("Informe o peso da pessoa %d: ", i + 1);
        scanf("%f", &weight[i]);
        
        sum_age += age[i];
    }
    
    avg_age = sum_age / n;
    printf("A média das idades é %.2f\n", avg_age);
    
    printf("As pessoas com mais de 90 quilos são:\n");
    for (i = 0; i < n; i++) {
        if (weight[i] > 90) {
            printf("Pessoa %d\n", i + 1);
        }
    }
    
    return 0;
}
