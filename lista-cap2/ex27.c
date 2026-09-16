#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int dado1, dado2, dado3;

    // Semente baseada no tempo atual para gerar numeros verdadeiramente aleatorios a cada execucao
    srand(time(NULL));

    // rand() % 6 gera valores de 0 a 5. Somando +1, obtemos o intervalo estrito de 1 a 6.
    dado1 = (rand() % 6) + 1;
    dado2 = (rand() % 6) + 1;
    dado3 = (rand() % 6) + 1;

    printf("Lancamento do Dado 1: %d\n", dado1);
    printf("Lancamento do Dado 2: %d\n", dado2);
    printf("Lancamento do Dado 3: %d\n", dado3);

    return 0;
}