#include <stdio.h>

int main() {
    float valor_total, valor_final, parcela, comissao;
    int opcao;

    printf("Digite o valor total da compra: ");
    scanf("%f", &valor_total);

    printf("Opcoes de pagamento:\n");
    printf("1 - A Vista (10%% de desconto)\n");
    printf("2 - Parcelado em 3x sem juros\n");
    printf("Escolha a opcao: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        valor_final = valor_total * 0.90;
        comissao = valor_final * 0.05;
        printf("Valor a pagar (com desconto): R$ %.2f\n", valor_final);
        printf("Comissao do vendedor: R$ %.2f\n", comissao);
    } else if (opcao == 2) {
        parcela = valor_total / 3.0;
        comissao = valor_total * 0.05;
        printf("Valor de cada parcela (3x): R$ %.2f\n", parcela);
        printf("Comissao do vendedor: R$ %.2f\n", comissao);
    } else {
        printf("Opcao invalida!\n");
    }

    return 0;
}