#include <stdio.h>

int main() {
    int dia, mes, ano;

    printf("Digite uma data no formato dd/mm/aaaa: ");
    // O formato especificado no scanf obriga a leitura das barras como separadores
    scanf("%d/%d/%d", &dia, &mes, &ano);

    // %04d garante 4 digitos para o ano e %02d garante 2 digitos para mes e dia com zero a esquerda
    printf("Data no formato invertido: %04d/%02d/%02d\n", ano, mes, dia);

    return 0;
}