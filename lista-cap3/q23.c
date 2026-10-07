#include <stdio.h>

int main() {
    int lado, i, j;

    do {
        printf("Digite o tamanho do lado L (entre 3 e 20): ");
        scanf("%d", &lado);
        if (lado < 3 || lado > 20) {
            printf("Tamanho invalido! Digite um valor entre 3 e 20.\n");
        }
    } while (lado < 3 || lado > 20);

    for (i = 1; i <= lado; i++) {
        for (j = 1; j <= lado; j++) {
            // Se for primeira/ultima linha ou primeira/ultima coluna, imprime 'X'
            if (i == 1 || i == lado || j == 1 || j == lado) {
                printf("X");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}