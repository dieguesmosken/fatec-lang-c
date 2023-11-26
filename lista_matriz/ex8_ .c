#include<stdio.h>
#include<stdlib.h>
//  (Vetor)Inverter Ordem de Caracteres: Faça um programa que leia uma string de caracteres
// e armazene-a em um vetor. O tamanho do vetor de char e consequentemente da string, deve
// ser definido pelo usuário. Em seguida, o programa deve inverter a ordem dos caracteres no
// vetor e exibir a string resultante. Por exemplo, se a string de entrada for "Hello", o programa
// deve exibir "olleH"

int main(){
    int i, tamanho;
    char *vetor, *vetor_invertido;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanho);
    vetor = (char*)malloc(tamanho*sizeof(char));
    vetor_invertido = (char*)malloc(tamanho*sizeof(char));
    printf("Informe a string: ");
    scanf("%s", vetor);
    for(i = 0; i < tamanho; i++){
        vetor_invertido[i] = vetor[tamanho - i - 1];
    }
    printf("A string invertida é %s\n", vetor_invertido);
    free(vetor);
    free(vetor_invertido);
    return 0;
}