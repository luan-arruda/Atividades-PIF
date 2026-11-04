#include <stdio.h>

int main() {
    float valor, preco_final;
    int estado;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);

    printf("Estados de destino:\n1 = MG (7%%)\n2 = SP (12%%)\n3 = RJ (15%%)\n4 = MS (8%%)\n");
    printf("Escolha o estado: ");
    scanf("%d", &estado);

    switch (estado) {
        case 1:
            preco_final = valor * 1.07;
            printf("Preco final com imposto (MG): R$ %.2f\n", preco_final);
            break;
        case 2:
            preco_final = valor * 1.12;
            printf("Preco final com imposto (SP): R$ %.2f\n", preco_final);
            break;
        case 3:
            preco_final = valor * 1.15;
            printf("Preco final com imposto (RJ): R$ %.2f\n", preco_final);
            break;
        case 4:
            preco_final = valor * 1.08;
            printf("Preco final com imposto (MS): R$ %.2f\n", preco_final);
            break;
        default:
            printf("Erro: Codigo de estado invalido!\n");
            break;
    }

    return 0;
}