#include <stdio.h>

int main() {
    int opcao;

    printf("--- MENU DO BANCO ---\n");
    printf("1 - Consultar Saldo\n");
    printf("2 - Efetuar Extrato\n");
    printf("3 - Fazer Transferencia\n");
    printf("4 - Falar com Atendente\n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Redirecionando para a consulta de saldo...\n");
            break;
        case 2:
            printf("Gerando seu extrato bancario...\n");
            break;
        case 3:
            printf("Iniciando a transferencia bancaria...\n");
            break;
        case 4:
            printf("Aguarde na linha para falar com um atendente...\n");
            break;
        default:
            printf("Opcao invalida! Por favor, escolha um numero entre 1 e 4.\n");
            break;
    }

    return 0;
}