#include <stdio.h>

void versao_for() {
    printf("--- Versao FOR ---\n");
    for (int i = 0; i <= 100; i++) {
        printf("%d ", i);
    }
    printf("\n\n");
}

void versao_while() {
    printf("--- Versao WHILE ---\n");
    int i = 0;
    while (i <= 100) {
        printf("%d ", i);
        i++;
    }
    printf("\n\n");
}

void versao_dowhile() {
    printf("--- Versao DO-WHILE ---\n");
    int i = 0;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 100);
    printf("\n\n");
}

int main() {
    versao_for();
    versao_while();
    versao_dowhile();

    return 0;
}
