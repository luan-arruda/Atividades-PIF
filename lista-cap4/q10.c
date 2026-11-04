#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    // a) Verifica se eh par ou impar
    if (num % 2 == 0) {
        printf("O numero %d eh PAR.\n", num);
    } else {
        printf("O numero %d eh IMPAR.\n", num);
    }

    // b) Verifica se eh positivo, negativo ou zero
    if (num > 0) {
        printf("O numero %d eh POSITIVO.\n", num);
    } else if (num < 0) {
        printf("O numero %d eh NEGATIVO.\n", num);
    } else {
        printf("O numero eh ZERO.\n");
    }

    return 0;
}