#include <stdio.h>

int main() {
    float salario, aumento, novo_salario;
    int cargo;

    printf("Digite o salario atual: ");
    scanf("%f", &salario);

    printf("Codigos de Cargo:\n1 = Tecnico\n2 = Gerente\n3 = Demais Cargos\n");
    printf("Digite o codigo do cargo: ");
    scanf("%d", &cargo);

    if (cargo == 1) { // Tecnico
        if (salario <= 3000) {
            aumento = salario * 0.15;
        } else {
            aumento = salario * 0.10;
        }
    } else if (cargo == 2) { // Gerente
        if (salario <= 5000) {
            aumento = salario * 0.10;
        } else {
            aumento = salario * 0.05;
        }
    } else if (cargo == 3) { // Demais Cargos
        aumento = salario * 0.08;
    } else {
        printf("Codigo de cargo invalido!\n");
        return 0;
    }

    novo_salario = salario + aumento;

    printf("Valor do aumento: R$ %.2f\n", aumento);
    printf("Novo salario reajustado: R$ %.2f\n", novo_salario);

    return 0;
}