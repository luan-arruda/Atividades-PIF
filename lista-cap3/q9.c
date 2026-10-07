#include <stdio.h>

int main() {
    float valor, soma = 0.0, media = 0.0;
    int quantidade = 0;

    printf("Digite valores reais positivos (ou um valor negativo para encerrar):\n");

    while (1) {
        printf("Digite um valor: ");
        scanf("%f", &valor);

        if (valor < 0) {
            break; 
        }

        soma += valor;
        quantidade++;
    }

    if (quantidade > 0) {
        media = soma / quantidade;
        printf("\n--- RESULTADOS ---\n");
        printf("Quantidade de valores validos: %d\n", quantidade);
        printf("Soma total: %.2f\n", soma);
        printf("Media aritmetica: %.2f\n", media);
    } else {
        printf("\nNenhum valor valido foi digitado.\n");
    }

    return 0;
}