#include <stdio.h>

float celsiusParaFahrenheit(float c) {
    return (c * 9.0 / 5.0) + 32.0;
}

float celsiusParaKelvin(float c) {
    return c + 273.15;
}

float fahrenheitParaCelsius(float f) {
    return (f - 32.0) * 5.0 / 9.0;
}

float kelvinParaCelsius(float k) {
    return k - 273.15;
}

int main() {
    int opcao;
    float temp, resultado;
    
    printf("--- CONVERSOR DE TEMPERATURAS ---\n");
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Celsius para Kelvin\n");
    printf("3 - Fahrenheit para Celsius\n");
    printf("4 - Kelvin para Celsius\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);
    
    if (opcao >= 1 && opcao <= 4) {
        printf("Digite a temperatura: ");
        scanf("%f", &temp);
        
        switch (opcao) {
            case 1:
                resultado = celsiusParaFahrenheit(temp);
                break;
            case 2:
                resultado = celsiusParaKelvin(temp);
                break;
            case 3:
                resultado = fahrenheitParaCelsius(temp);
                break;
            case 4:
                resultado = kelvinParaCelsius(temp);
                break;
        }
        
        printf("Resultado da conversao: %.2f\n", resultado);
    } else {
        printf("Opcao invalida!\n");
    }
    
    return 0;
}