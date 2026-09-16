#include <stdio.h>

int main() {
    char maiuscula, minuscula;

    printf("Digite uma letra maiuscula: ");
    scanf(" %c", &maiuscula);

    // Na tabela ASCII, a diferença entre uma letra maiúscula e minúscula é de 32 posições
    // Alternativa: minuscula = maiuscula - 'A' + 'a';
    minuscula = maiuscula + 32;

    printf("Letra minuscula: %c\n", minuscula);

    return 0;
}