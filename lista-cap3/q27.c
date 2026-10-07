#include <stdio.h>

int main() {
    int valor, c100 = 0, c50 = 0, c20 = 0, c10 = 0, c5 = 0, c2 = 0;

    printf("Digite o valor do saque em reais: R$ ");
    scanf("%d", &valor);

    if (valor <= 0) {
        printf("Valor invalido para saque.\n");
        return 0;
    }

    int restante = valor;

    while (restante >= 100) {
        restante -= 100;
        c100++;
    }
    while (restante >= 50) {
        restante -= 50;
        c50++;
    }
    while (restante >= 20) {
        restante -= 20;
        c20++;
    }
    while (restante >= 10) {
        restante -= 10;
        c10++;
    }
    while (restante >= 5) {
        restante -= 5;
        c5++;
    }
    while (restante >= 2) {
        restante -= 2;
        c2++;
    }

    printf("\n=== DECOMPOSICAO DO SAQUE (R$ %d) ===\n", valor);
    if (c100 > 0) printf("Notas de R$ 100: %d\n", c100);
    if (c50 > 0)  printf("Notas de R$ 50:  %d\n", c50);
    if (c20 > 0)  printf("Notas de R$ 20:  %d\n", c20);
    if (c10 > 0)  printf("Notas de R$ 10:  %d\n", c10);
    if (c5 > 0)   printf("Notas de R$ 5:   %d\n", c5);
    if (c2 > 0)   printf("Notas de R$ 2:   %d\n", c2);

    if (restante > 0) {
        printf("Sobrou R$ %d que nao pode ser sacado com as cedulas disponiveis.\n", restante);
    }

    return 0;
}