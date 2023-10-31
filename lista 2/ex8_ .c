#include<stdio.h>
#include<stdlib.h>
//Construa um algoritmo que apresente o nome e o salário dos funcionários, de acordo com 
// os seguintes critérios: 
// - Salários que sejam maiores ou iguais a R$ 1000,00 e menores ou iguais a R$ 1500,00 
// - Funcionários pertencentes aos departamentos de produção ou engenharia. Obs: Os departamentos são reconhecidos pelas letras (P) Produção e (E) Engenharia São  fornecidos  o  nome  do  funcionário  (NF),  o  seu  salário  (SAL)  e  o  departamento  onde 
// trabalha (DEP).

int main(int argc, char const *argv[])
{

    float salario;
    char nome[50], departamento;
    
    printf("digite o nome do funcionário: ");
    scanf("%s", &nome);

    printf("digite o salário do funcionário: ");
    scanf("%f", &salario);

    printf("digite o departamento do funcionário: ");
    printf("P - Produção\n");
    printf("E - Engenharia\n");
    scanf("%s", &departamento);

    if (salario >= 1000 && salario <= 1500 && (departamento == 'P' || departamento == 'E')){
        printf("o funcionário %s recebeu um salário de: R$ %.2f", nome, salario);
    }else if (salario < 1000){
        printf("o funcionário %s não recebeu nenhum salário acima de R$ 1000,00", nome);
    }else if (salario > 1500){
        printf("o funcionário %s não recebeu nenhum salário abaixo de R$ 1500,00", nome);
    }else{
        printf("o funcionário %s não recebeu nenhum salário ou não pertence ao departamento de produção ou engenharia", nome);
    }

    return 0;
}

