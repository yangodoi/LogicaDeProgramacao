#include <stdio.h>

//Yan Lucas Moreira de Godoi - 22506945

int main() {
int idade;

    printf("Qual sua idade ");
    scanf("%d", &idade);

    if (idade > 0) {
    if (idade < 12) 
    {printf("Voce é uma Crianca.");} 
    else if (idade <= 17)
    {printf("Voce é um Adolescente.");} 
    else if (idade <= 59) 
    {printf("Voce é um adulto.");} 
    else 
    {printf("Voce é um Idoso.");}
     
    }
    return 0;
}