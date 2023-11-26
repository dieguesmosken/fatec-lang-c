#include<stdio.h>
#include<stdlib.h>
//Faça um algoritmo que receba 10 idades, pesos e alturas, calcule e mostre:
// • A média das idades das 10 pessoas;
// • A quantidade de pessoas com peso superior a 90 quilos e altura inferior a 1.50;
// • A porcentagem de pessoas com idade entre 10 e 30 anos entre as pessoas que medem mais
// de 1.90

int main(){
    int i, idade[10], peso[10], altura[10], soma_idade = 0, cont_peso = 0, cont_altura = 0, cont_idade = 0;
    float media_idade, porcentagem_idade;
    for(i = 0; i < 10; i++){
        printf("Informe a idade da pessoa %d: ", i + 1);
        scanf("%d", &idade[i]);
        printf("Informe o peso da pessoa %d: ", i + 1);
        scanf("%d", &peso[i]);
        printf("Informe a altura da pessoa %d: ", i + 1);
        scanf("%d", &altura[i]);
        soma_idade += idade[i];
        if(peso[i] > 90 && altura[i] < 150){
            cont_peso++;
        }
        if(idade[i] > 10 && idade[i] < 30 && altura[i] > 190){
            cont_idade++;
        }
    }
    media_idade = soma_idade / 10;
    porcentagem_idade = (cont_idade * 100) / 10;
    printf("A média das idades é %.2f\n", media_idade);
    printf("A quantidade de pessoas com peso superior a 90 quilos e altura inferior a 1.50 é %d\n", cont_peso);
    printf("A porcentagem de pessoas com idade entre 10 e 30 anos entre as pessoas que medem mais de 1.90 é %.2f\n", porcentagem_idade);
    return 0;
}