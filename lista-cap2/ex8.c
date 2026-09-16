#include <stdio.h>

int main() {
    int num, quadrado;
    float decima_parte;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    quadrado = num * num;
    // O uso de 10.0 (ponto flutuante) evita a divisao inteira por truncamento
    decima_parte = num / 10.0;

    printf("Quadrado: %d\n", quadrado);
    printf("Decima parte: %.2f\n", decima_parte);

    return 0;
}