#include <stdio.h>

int main() {
    int opcao;
    float temp_in, temp_out;

    printf("Menu de conversao de temperatura:\n");
    printf("1. Celsius para Fahrenheit\n");
    printf("2. Celsius para Kelvin\n");
    printf("3. Fahrenheit para Celsius\n");
    printf("4. Kelvin para Celsius\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    printf("Digite a temperatura de entrada: ");
    scanf("%f", &temp_in);

    switch (opcao) {
        case 1:
            temp_out = temp_in * 1.8 + 32;
            printf("Resultado: %.2f F\n", temp_out);
            break;
        case 2:
            temp_out = temp_in + 273.15;
            printf("Resultado: %.2f K\n", temp_out);
            break;
        case 3:
            temp_out = (temp_in - 32) / 1.8;
            printf("Resultado: %.2f C\n", temp_out);
            break;
        case 4:
            temp_out = temp_in - 273.15;
            printf("Resultado: %.2f C\n", temp_out);
            break;
        default:
            printf("Opcao invalida!\n");
            break;
    }

    return 0;
}