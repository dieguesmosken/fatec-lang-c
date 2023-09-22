#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/*  sequência fibonacci */

int main(int argc, char *argv[]) {

	setlocale(LC_ALL, "Portuguese");

    int a, b, temp, i, n;

    a = 0;
    b = 1;

    printf("Digite um número: ");
    scanf("%d", &n);
    printf("\nSérie de Fibonacci:\n\n");
    printf("%d\n", b);

    for(i = 0; i < n; i++) {

        temp = a + b;
        a = b;
        b = temp;

        printf("%d\n", temp);
    }
	return 0;
}
