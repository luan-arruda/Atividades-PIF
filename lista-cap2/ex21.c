#include <stdio.h>

int main() {
    char c;

    printf("Digite um caractere: ");
    scanf(" %c", &c);

    /* 
     * O especificador %d faz o printf exibir o valor numerico inteiro 
     * correspondente ao caractere na Tabela ASCII (seu código binário/decimal armazenado).
     */
    printf("Caractere: %c | Codigo ASCII: %d\n", c, c);

    return 0;
}