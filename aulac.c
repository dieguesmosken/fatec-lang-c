#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

    int x = 10;
    float y = 1.1;
    char c = 'a';
    double d = 10.33;
	  printf("Hello World!\n");
    printf("o conteudo de x = %d, y = %.2f, c = %c\n", x, y, c);
    printf("o conteudo de d = %.2f\n", d);
    printf("o endereco de x = %p, y = %p, c = %p\n", &x, &y, &c);
    printf("o endereco de d = %p\n", &d);
    printf("o tamanho de x = %d, y = %d, c = %d\n", sizeof(x), sizeof(y), sizeof(c));
    printf("o tamanho de d = %d\n", sizeof(d));
    printf("o tamanho de int = %d, float = %d, char = %d\n, double = %d\n", sizeof(int), 
    sizeof(float), sizeof(char), sizeof(double));

    system("pause");

    }
