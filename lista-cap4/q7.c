#include <stdio.h>
#include <math.h>

int main() {
    float num, resultado;

    printf("Digite um numero real: ");
    scanf("%f", &num);

    if (num >= 0) {
        resultado = sqrt(num);
        printf("A raiz quadrada de %.2f eh: %.2f\n", num, resultado);
    } else {
        resultado = num * num;
        printf("O quadrado de %.2f eh: %.2f\n", num, resultado);
    }

    return 0;
}