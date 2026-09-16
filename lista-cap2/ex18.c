#include <stdio.h>

#define PI 3.141593

int main() {
    float raio, area, volume;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    area = 4.0 * PI * raio * raio;
    
    // O uso de 4.0 / 3.0 em ponto flutuante impede o truncamento da divisao inteira
    volume = (4.0 / 3.0) * PI * raio * raio * raio;

    printf("Area da superficie: %.2f\n", area);
    printf("Volume da esfera: %.2f\n", volume);

    return 0;
}