#include <stdio.h>

#define FATOR_CONVERSAO 3.6

int main() {
    float kmh, ms;

    printf("Digite a velocidade em km/h: ");
    scanf("%f", &kmh);

    ms = kmh / FATOR_CONVERSAO;

    printf("Velocidade em m/s: %.2f m/s\n", ms);

    return 0;
}