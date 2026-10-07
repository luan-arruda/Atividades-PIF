#include <stdio.h>

int main() {
    int a, b, i, j, divisores;
    long long int soma_primos = 0;

    do {
        printf("Digite o valor de A: ");
        scanf("%d", &a);
        printf("Digite o valor de B (deve ser maior que A): ");
        scanf("%d", &b);

        if (a >= b || a <= 0) {
            printf("Valores invalidos! Garanta que A > 0 e A < B.\n");
        }
    } while (a >= b || a <= 0);

    printf("Numeros primos no intervalo [%d, %d]: ", a, b);

    for (i = a; i <= b; i++) {
        if (i <= 1) continue;

        divisores = 0;
        for (j = 1; j <= i; j++) {
            if (i % j == 0) {
                divisores++;
            }
        }

        if (divisores == 2) {
            printf("%d ", i);
            soma_primos += i;
        }
    }

    printf("\nSoma total dos numeros primos no intervalo: %lld\n", soma_primos);

    return 0;
}