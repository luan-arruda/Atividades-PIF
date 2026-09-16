#include <stdio.h>

int main() {
    int dias;
    float quantia_bruta, valor_liquido;

    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &dias);

    quantia_bruta = dias * 30.0;
    // Desconto de 8% de Imposto de Renda
    valor_liquido = quantia_bruta * (1.0 - 0.08);

    printf("Valor bruto devida: R$ %.2f\n", quantia_bruta);
    printf("Valor liquido a pagar: R$ %.2f\n", valor_liquido);

    return 0;
}