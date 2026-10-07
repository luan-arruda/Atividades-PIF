#include <stdio.h>

int main() {
    int n, i;
    long long int t1 = 1, t2 = 1, proximo;

    printf("Digite o numero do termo desejado (N): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Por favor, digite um numero maior que zero.\n");
        return 0;
    }

    printf("Termos ate %d: ", n);

    for (i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%lld ", t1);
            continue;
        }
        if (i == 2) {
            printf("%lld ", t2);
            continue;
        }

        proximo = t1 + t2;
        t1 = t2;
        t2 = proximo;
        printf("%lld ", proximo);
    }

    printf("\nO %d-esimo termo da sequencia eh: %lld\n", n, t2);

    return 0;
}