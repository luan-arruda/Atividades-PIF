#include <stdio.h>

#define PI 3.14159

// Prototipo antes da main
float area(float r);

int main() {
    float raio;
    
    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);
    
    printf("A area da esfera e: %.2f\n", area(raio));
    
    return 0;
}

float area(float r) {
    return 4 * PI * r * r;
}