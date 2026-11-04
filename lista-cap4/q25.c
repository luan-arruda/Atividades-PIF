#include <stdio.h>

int main() {
    int total, pago, troco;
    int n100, n50, n20, n10, n5, n2;

    printf("Digite o valor total da compra: ");
    scanf("%d", &total);

    printf("Digite o valor entregue pelo cliente: ");
    scanf("%d", &pago);

    if (pago < total) {
        printf("Erro: Valor entregue eh insuficiente!\n");
    } else {
        troco = pago - total;
        printf("Troco total: R$ %d\n", troco);

        n100 = troco / 100;
        troco = troco % 100;

        n50 = troco / 50;
        troco = troco % 50;

        n20 = troco / 20;
        troco = troco % 20;

        n10 = troco / 10;
        troco = troco % 10;

        n5 = troco / 5;
        troco = troco % 5;

        n2 = troco / 2;
        troco = troco % 2;

        printf("Cedulas de R$ 100: %d\n", n100);
        printf("Cedulas de R$ 50: %d\n", n50);
        printf("Cedulas de R$ 20: %d\n", n20);
        printf("Cedulas de R$ 10: %d\n", n10);
        printf("Cedulas de R$ 5: %d\n", n5);
        printf("Cedulas de R$ 2: %d\n", n2);
        
        if (troco > 0) {
            printf("Sobra sem troco em cedulas: R$ %d\n", troco);
        }
    }

    return 0;
}