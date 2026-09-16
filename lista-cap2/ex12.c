#include <stdio.h>

int main() {
    int num, antecessor, sucessor;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    // Copiamos o valor de num para nao alterar a variavel original
    antecessor = num;
    sucessor = num;

    // Utilizando exclusivamente os operadores unarios de decremento e incremento
    --antecessor; // Decrementa 1 unidade do valor original
    ++sucessor;   // Incrementa 1 unidade ao valor original

    printf("Antecessor: %d\n", antecessor);
    printf("Sucessor: %d\n", sucessor);

    return 0;
}