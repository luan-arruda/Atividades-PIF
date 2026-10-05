#include <stdio.h>

int main() {
    int senha_secreta = 2026;
    int senha_digitada;
    int tentativas = 0;
    int acertou = 0;

    while (tentativas < 3) {
        printf("Digite a senha: ");
        scanf("%d", &senha_digitada);
        tentativas++;

        if (senha_digitada == senha_secreta) {
            acertou = 1;
            break;
        } else {
            if (tentativas < 3) {
                printf("Senha incorreta! Tentativas restantes: %d\n", 3 - tentativas);
            }
        }
    }

    if (acertou) {
        printf("Acesso Concedido!\n");
    } else {
        printf("Conta Bloqueada por Seguranca!\n");
    }

    return 0;
}