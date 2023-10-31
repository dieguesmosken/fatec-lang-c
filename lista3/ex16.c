#include <stdio.h>

int main() {
    float anacleto = 1.50, felisberto = 1.10;
    int anos = 0;

    while (felisberto <= anacleto) {
        anacleto += 0.02;
        felisberto += 0.03;
        anos++;
    }

    printf("Serão necessários %d anos para que Felisberto seja maior que Anacleto.\n", anos);

    return 0;
}
