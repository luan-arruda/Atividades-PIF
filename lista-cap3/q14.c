#include <stdio.h>

int main() {
    int i, quadrado;
    long long int soma_quadrados = 0;

    for (i = 1; i <= 100; i++) {
        quadrado = i * i;
        soma_quadrados += quadrado;
        printf("%d -> %d\n", i, quadrado);
    }

    printf("\nSoma total dos quadrados de 1 a 100 = %lld\n", soma_quadrados);

    return 0;
}