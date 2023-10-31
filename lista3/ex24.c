#include <stdio.h>

int main() {
    int DN, MN, AN, DH, MH, AH, idade;

    printf("Digite o dia do nascimento: ");
    scanf("%d", &DN);
    printf("Digite o mês do nascimento: ");
    scanf("%d", &MN);
    printf("Digite o ano do nascimento: ");
    scanf("%d", &AN);

    printf("Digite o dia de hoje: ");
    scanf("%d", &DH);
    printf("Digite o mês de hoje: ");
    scanf("%d", &MH);
    printf("Digite o ano de hoje: ");
    scanf("%d", &AH);

    idade = AH - AN;

    if (MH < MN || (MH == MN && DH < DN)) {
        idade--;
    }

    printf("A idade real da pessoa é: %d\n", idade);

    return 0;
}
