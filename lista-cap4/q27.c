#include <stdio.h>

int main() {
    int horas;
    float total = 0.0;

    printf("Digite a quantidade de horas no estacionamento: ");
    scanf("%d", &horas);

    if (horas <= 0) {
        printf("Tempo invalido!\n");
    } else {
        if (horas <= 2) {
            total = horas * 2.0;
        } else if (horas <= 4) {
            // 2 primeiras horas a R$ 2.00 cada + as horas restantes a R$ 2.50
            total = (2 * 2.0) + ((horas - 2) * 2.50);
        } else {
            // 2 primeiras a R$ 2.00 + 2 seguintes a R$ 2.50 + demais a R$ 3.00
            total = (2 * 2.0) + (2 * 2.50) + ((horas - 4) * 3.00);
        }

        printf("Tempo total: %d hora(s)\n", horas);
        printf("Valor total a pagar: R$ %.2f\n", total);
    }

    return 0;
}