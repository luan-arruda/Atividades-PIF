#include <stdio.h>

int main() {
    int a, b;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &a);
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &b);

    printf("\n--- Resultados ---\n");
    printf("Soma: %d\n", a + b);
    printf("Subtracao: %d\n", a - b);
    printf("Multiplicacao: %d\n", a * b);

    // Cast explicito (float) para garantir que a divisao seja real
    // Nota: Para evitar a divisao por zero matematicamente, poderiamos validar
    // a entrada utilizando uma estrutura condicional como: if (b != 0)
    printf("Divisao real: %.2f\n", (float)a / b);

    return 0;
}