#include <stdio.h>

int main() {
    char nome[50];
    double salarioFixo, vendas, salarioTotal;

    scanf("%s", nome);
    scanf("%lf %lf", &salarioFixo, &vendas);

    salarioTotal = salarioFixo + (vendas * 0.15);

    printf("TOTAL = R$ %.2lf\n", salarioTotal);

    return 0;
}
// Yan Lucas Moreira de Godoi - 22506945
