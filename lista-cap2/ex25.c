#include <stdio.h>

int main() {
    float salario_base, gratificacao, imposto, salario_liquido;

    printf("Digite o salario-base do funcionario: ");
    scanf("%f", &salario_base);

    // Calculo usando operadores aritmeticos diretos
    gratificacao = salario_base * 0.05; // 5% de gratificacao
    imposto = salario_base * 0.07;      // 7% de imposto retido

    // Justificativa: O salario liquido final e a soma do salario base com o adicional
    // da gratificacao subtraindo a aliquota referente ao imposto de renda.
    salario_liquido = salario_base + gratificacao - imposto;

    printf("Salario liquido a receber: R$ %.2f\n", salario_liquido);

    return 0;
}