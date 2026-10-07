#include <stdio.h>

int main() {
    int num, temp, invertido = 0, digito;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    temp = num;

    while (temp > 0) {
        digito = temp % 10;
        invertido = (invertido * 10) + digito;
        temp = temp / 10;
    }

    printf("Numero original: %d\n", num);
    printf("Numero invertido: %d\n", invertido);

    return 0;
}