#include <stdio.h>

int main() {
    int codigo, numeroPecas;
    float valorPeca, valorTotal;
    valorTotal = 0;

    scanf ("¨%d %d %f", &codigo, &numeroPecas, &valorPeca);

    valorTotal = valorTotal + (numeroPecas * valorPeca);

    scanf("%d $d $f", &codigo, &numeroPecas, &valorPeca);

    valorTotal = valorTotal + (numeroPecas * valorPeca);

    printf("VALOR A PAGAR: R$ %.2f\n", valorTotal);
    
    return(0);
}