#include<stdio.h>
#include<stdlib.h>
//Construa  um  algoritmo  que  calcule  o novo  salário  (SAL_NOVO)  de  um  funcionário. 
// Considere que o funcionário deverá receber um reajuste de 15% caso seu salário (SAL) seja 
// menor  que  500.  Se  o  salário  for  maior  ou  igual  a  500,  mas  menor  ou  igual  a  1000,  o 
// reajuste deve ser de 10%. Caso o salário seja maior que 1000, o reajuste deve ser de 5%. 



int main(int argc, char const *argv[])
{
    
    float salario, salario_novo;

    printf("digite o salário do funcionário: ");
    scanf("%f", &salario);

    if (salario < 500){
        salario_novo = salario * 1.15;
        printf("o novo salário do funcionário é: R$ %.2f", salario_novo);
    }else if (salario >= 500 && salario <= 1000){
        salario_novo = salario * 1.10;
        printf("o novo salário do funcionário é: R$ %.2f", salario_novo);
    }else if (salario > 1000){
        salario_novo = salario * 1.05;
        printf("o novo salário do funcionário é: R$ %.2f", salario_novo);
    }else{
        printf("o funcionário não recebeu nenhum salário");
    }

    //exemplo de entrada: 500
    //exemplo de saída: o novo salário do funcionário é: R$ 550.00

    //exemplo de entrada: 1000
    //exemplo de saída: o novo salário do funcionário é: R$ 1100.00

    return 0;
}

