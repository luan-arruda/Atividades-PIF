#include <stdio.h>

int main() {
    int num, i, encontrou = 0;

    printf("Digite um numero limite inteiro positivo (NUM): ");
    scanf("%d", &num);

    printf("Multiplos de 3 e 5 ao mesmo tempo entre 1 e %d:\n", num);

    for (i = 1; i <= num; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d ", i);
            encontrou = 1;
        }
    }

    if (!encontrou) {
        printf("Nenhum numero satisfaz a condicao no intervalo informado.");
    }

    printf("\n");
    return 0;
}