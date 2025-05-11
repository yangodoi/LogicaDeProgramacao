#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *__argv()) 
{
    float A, B;
    scanf("%f%f", &A, &B);

    printf("MÉDIA = %.5f\n",
    ((A * 3.5) + (B * 7.5))/11);

    return 0;

}