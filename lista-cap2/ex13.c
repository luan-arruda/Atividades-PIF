#include <stdio.h>

int main() {
    float lado, base, altura;
    float area_quadrado, area_retangulo, area_triangulo;

    printf("Digite o lado do quadrado: ");
    scanf("%f", &lado);

    printf("Digite a base da figura: ");
    scanf("%f", &base);

    printf("Digite a altura da figura: ");
    scanf("%f", &altura);

    area_quadrado = lado * lado;
    area_retangulo = base * altura;
    area_triangulo = (base * altura) / 2.0;

    printf("\n--- Resultados ---\n");
    printf("Area do Quadrado: %.2f\n", area_quadrado);
    printf("Area do Retangulo: %.2f\n", area_retangulo);
    printf("Area do Triangulo Retangulo: %.2f\n", area_triangulo);

    return 0;
}