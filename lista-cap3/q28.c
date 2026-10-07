#include <stdio.h>

int main() {
    int opcao;
    float salario, novo_salario, imposto;

    do {
        printf("\n=== SISTEMA DE FOLHA DE PAGAMENTO ===\n");
        printf("1. Reajuste Salarial\n");
        printf("2. Retencao de Imposto de Renda\n");
        printf("3. Encerrar Programa\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\n--- REAJUSTE SALARIAL ---\n");
                printf("Digite o salario atual: R$ ");
                scanf("%f", &salario);

                if (salario <= 2000.00) {
                    novo_salario = salario * 1.15; // 15% de aumento
                } else {
                    novo_salario = salario * 1.10; // 10% de aumento
                }

                printf("Salario reajustado: R$ %.2f\n", novo_salario);
                break;

            case 2:
                printf("\n--- RETENCAO DE IMPOSTO DE RENDA ---\n");
                printf("Digite o salario: R$ ");
                scanf("%f", &salario);

                if (salario <= 3000.00) {
                    imposto = salario * 0.08; // 8% de desconto
                } else {
                    imposto = salario * 0.15; // 15% de desconto
                }

                printf("Valor retido de Imposto de Renda: R$ %.2f\n", imposto);
                printf("Salario liquido: R$ %.2f\n", salario - imposto);
                break;

            case 3:
                printf("\nEncerrando o sistema... Ate logo!\n");
                break;

            default:
                printf("\nOpcao invalida! Por favor, escolha 1, 2 ou 3.\n");
                break;
        }

    } while (opcao != 3);

    return 0;
}