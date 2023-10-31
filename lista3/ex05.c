#include <stdio.h>

int main() {
    int i;
    float fahrenheit, celsius;

    for (i = 1; i <= 50; i++) {
        fahrenheit = i;
        celsius = (5.0 / 9.0) * (fahrenheit - 32);

        printf("%.2f graus Fahrenheit é igual a %.2f graus Celsius\n", fahrenheit, celsius);
    }

    return 0;
}
