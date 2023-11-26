// (Vetor)Fazer um algoritmo para ajudar a bilheteria do metrô. O operador deve informar o
// tipo do bilhete
// (unitário, duplo ou 10 viagens) e o valor pago pelo passageiro. O sistema deve mostrar, então,
// a quantidade de bilhetes possíveis e o troco que o passageiro deve receber. Considere a
// seguinte
// tabela de preço: Bilhete unitário 1,30 Bilhete duplo 2,60 Bilhete de 10 viagens 12,00

#include<stdio.h>

int main(){
    int i, tipo_bilhete[100], cont_unitario = 0, cont_duplo = 0, cont_10_viagens = 0;
    float valor_pago[100], troco[100];
    for(i = 0; i < 100; i++){
        printf("Informe o tipo do bilhete da pessoa %d: ", i + 1);
        scanf("%d", &tipo_bilhete[i]);
        printf("Informe o valor pago da pessoa %d: ", i + 1);
        scanf("%f", &valor_pago[i]);
        if(tipo_bilhete[i] == 1){
            troco[i] = valor_pago[i] - 1.30;
            cont_unitario++;
        }
        if(tipo_bilhete[i] == 2){
            troco[i] = valor_pago[i] - 2.60;
            cont_duplo++;
        }
        if(tipo_bilhete[i] == 3){
            troco[i] = valor_pago[i] - 12.00;
            cont_10_viagens++;
        }
    }
    printf("A quantidade de bilhetes unitários é %d\n", cont_unitario);
    printf("A quantidade de bilhetes duplos é %d\n", cont_duplo);
    printf("A quantidade de bilhetes de 10 viagens é %d\n", cont_10_viagens);
    for(i = 0; i < 100; i++){
        printf("O troco da pessoa %d é %.2f\n", i + 1, troco[i]);
    }
    return 0;
}