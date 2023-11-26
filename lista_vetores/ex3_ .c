// (Vetor)Faça um algoritmo que receba a idade e o sexo de 12 pessoas, calcule e mostre:
// • A idade média do grupo;
// • A idade média das mulheres;
// • A idade média dos homens;


#include<stdio.h>

int main(){
    int i, idade[12], soma_idade = 0, soma_idade_mulheres = 0, soma_idade_homens = 0, cont_mulheres = 0, cont_homens = 0;
    float media_idade, media_idade_mulheres, media_idade_homens;
    char sexo[12];
    for(i = 0; i < 12; i++){
        printf("Informe a idade da pessoa %d: ", i + 1);
        scanf("%d", &idade[i]);
        printf("Informe o sexo da pessoa %d: ", i + 1);
        scanf("%s", &sexo[i]);
        soma_idade += idade[i];
        if(sexo[i] == 'f'){
            soma_idade_mulheres += idade[i];
            cont_mulheres++;
        }
        if(sexo[i] == 'm'){
            soma_idade_homens += idade[i];
            cont_homens++;
        }
    }
    media_idade = soma_idade / 12;
    media_idade_mulheres = soma_idade_mulheres / cont_mulheres;
    media_idade_homens = soma_idade_homens / cont_homens;
    printf("A idade média do grupo é %.2f\n", media_idade);
    printf("A idade média das mulheres é %.2f\n", media_idade_mulheres);
    printf("A idade média dos homens é %.2f\n", media_idade_homens);
    return 0;
}