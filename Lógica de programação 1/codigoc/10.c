#include <stdio.h>

int main() {
    double A, B, C, pi, triangulo, circulo, trapezio, quadrado, retangulo;

    scanf("%lf %lf %lf", &A, &B, &C);
    
    pi= 3.14159;

    triangulo = (A * C)/2;
    circulo = pi*C*C;
    trapezio = ((A + B)*C)/2;
    quadrado = B * B;
    retangulo = A * B;

    printf("TRIANGULO: %.3f\n", triangulo);
    printf("CIRCULO: %.3f\n", circulo);
    printf("TRAPEZIO: %.3f\n", trapezio);
    printf("QUADRADO: %.3f\n", quadrado);
    printf("RETANGULO: %.3f\n", retangulo);
    
    return 0;
}