#include <stdio.h>

int main() {
    float r, b, h;
    
    printf("Digite o raio do circulo: ");
    scanf("%f", &r);
    printf("Area do circulo: %.2f\n\n", A_CIRC(r));
    
    printf("Digite a base e a altura (para retangulo e triangulo): ");
    scanf("%f %f", &b, &h);
    printf("Area do retangulo: %.2f\n", A_RET(b, h));
    printf("Area do triangulo: %.2f\n", A_TRI(b, h));
    
    return 0;
}