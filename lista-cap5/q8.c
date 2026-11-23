#include <stdio.h>

float celsius(float fahr) {
    return (fahr - 32.0) * 5.0 / 9.0;
}

int main() {
    float f, c;
    
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &f);
    
    c = celsius(f);
    
    printf("Temperatura em Celsius: %.2f\n", c);
    
    return 0;
}