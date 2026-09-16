#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    // Exibe o mesmo valor formatado em decimal, hexadecimal, octal e caractere ASCII
    printf("Decimal: %d | Hexadecimal: %x | Octal: %o | ASCII: %c\n", num, num, num, num);

    return 0;
}