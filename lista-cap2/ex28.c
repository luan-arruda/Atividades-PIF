#include <stdio.h>

int main() {
    float horas_normais, horas_extras;
    float salario_bruto, imposto = 0.0, excedente;

    printf("Digite o total de horas normais no ano: ");
    scanf("%f", &horas_normais);

    printf("Digite o total de horas extras no ano: ");
    scanf("%f", &horas_extras);

    // Horas normais R$ 10.00 / Horas extras R$ 15.00
    salario_bruto = (horas_normais * 10.0) + (horas_extras * 15.0);

    // Imposto progressivo sobre o valor que exceder R$ 12.000,00
    if (salario_bruto > 12000.0) {
        excedente = salario_bruto - 12000.0;
        imposto = excedente * 0.10; // 10% do excedente
    }

    printf("\nSalario anual bruto: R$ %.2f\n", salario_bruto);
    printf("Imposto de renda a pagar: R$ %.2f\n", imposto);
    printf("Salario liquido anual: R$ %.2f\n", salario_bruto - imposto);

    return 0;
}