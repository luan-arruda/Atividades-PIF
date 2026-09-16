#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, p, area;

    printf("Digite o tamanho do lado 'a': ");
    scanf("%f", &a);
    printf("Digite o tamanho do lado 'b': ");
    scanf("%f", &b);
    printf("Digite o tamanho do lado 'c': ");
    scanf("%f", &c);

    // Calculo do semi-perimetro
    p = (a + b + c) / 2.0;

    // Aplicacao da Formula de Heron
    area = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("Area do triangulo (Heron): %.2f\n", area);

    return 0;
}