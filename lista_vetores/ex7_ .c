#include<stdio.h>
#include<stdlib.h>
//  (Vetor)Contar Vogais e Consoantes: Crie um programa que leia o tamanho para a criação
// de um vetor de caracteres e que leia uma string de caracteres(armazene em um vetor de
// caracteres). O programa deve então contar quantas vogais e consoantes estão presentes na
// string e exibir esses totais. Por exemplo, se a entrada for "Registro", o programa deve informar
// que há 3 vogal e 5 consoantes

int main(){
    int i, tamanho, cont_vogais = 0, cont_consoantes = 0;
    char *vetor;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanho);
    vetor = (char*)malloc(tamanho*sizeof(char));
    printf("Informe a string: ");
    scanf("%s", vetor);
    for(i = 0; i < tamanho; i++){
        
        if(vetor[i] == 'a' || vetor[i] == 'e' || vetor[i] == 'i' || vetor[i] == 'o' || vetor[i] == 'u'){
            cont_vogais++;
        }
        else{

            if (vetor[i] == ' '){
                
            } else {
                cont_consoantes++;
            }
        }
        
    }
    
    printf("A string %s possui %d vogais e %d consoantes\n", vetor, cont_vogais, cont_consoantes);
    free(vetor);
    return 0;
}