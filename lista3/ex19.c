#include <stdio.h>

int main() {
    int idade, totalPessoas = 0, somaIdades = 0;
    char opcao;
    int aOp = 0, bOp = 0, cOp = 0, dOp = 0, eOp = 0;
    
    do {
        printf("Digite a idade da pessoa (-1 para finalizar): ");
        scanf("%d", &idade);
        
        if (idade == -1) {
            break;
        }
        
        totalPessoas++;
        somaIdades += idade;
        
        printf("Digite a opinião em relação ao filme (A, B, C, D ou E): ");
        scanf(" %c", &opcao);
        
        switch (opcao) {
            case 'A':
                aOp++;
                break;
            case 'B':
                bOp++;
                break;
            case 'C':
                cOp++;
                break;
            case 'D':
                dOp++;
                break;
            case 'E':
                eOp++;
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (1);
    
    printf("Quantidade de pessoas que respondeu a pesquisa: %d\n", totalPessoas);
    printf("Média de idade das pessoas que responderam a pesquisa: %.2f\n", (float)somaIdades / totalPessoas);
    printf("Porcentagem de cada uma das respostas:\n");
    printf("A: %.2f%%\n", (float)aOp / totalPessoas * 100);
    printf("B: %.2f%%\n", (float)bOp / totalPessoas * 100);
    printf("C: %.2f%%\n", (float)cOp / totalPessoas * 100);
    printf("D: %.2f%%\n", (float)dOp / totalPessoas * 100);
    printf("E: %.2f%%\n", (float)eOp / totalPessoas * 100);
    
    return 0;
}
