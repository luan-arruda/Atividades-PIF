#include <stdio.h>

int main() {
    int n, i;
    long long int fatorial = 1;

    printf("Digite um numero inteiro nao negativo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Numero invalido! Nao existe fatorial de numero negativo.\n");
    } else {
        for (i = 1; i <= n; i++) {
            fatorial *= i;
        }
        printf("O fatorial de %d eh %lld\n", n, fatorial);
    }

    return 0;
}