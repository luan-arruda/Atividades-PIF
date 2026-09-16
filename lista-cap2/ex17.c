#include <stdio.h>

#define PI 3.141593

int main() {
    float raio, area, circunferencia;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    area = PI * raio * raio;
    circunferencia = 2.0 * PI * raio;

    printf("Area do circulo: %.2f\n", area);
    printf("Circunferencia: %.2f\n", circunferencia);

    return 0;
}