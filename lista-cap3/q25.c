#include <stdio.h>

int main() {
    int n, i, divisores = 0;

    printf("Digite um numero inteiro positivo N: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("O numero %d NAO eh primo (primos sao maiores que 1).\n", n);
        return 0;
    }

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisores++;
        }
    }

    printf("Quantidade de divisores encontrados: %d\n", divisores);

    if (divisores == 2) {
        printf("Conclusao: O numero %d EH PRIMO!\n", n);
    } else {
        printf("Conclusao: O numero %d NAO EH PRIMO.\n", n);
    }

    return 0;
}