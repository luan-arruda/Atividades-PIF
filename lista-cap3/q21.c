#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char letra_secreta, palpite;
    int tentativas = 0;

    srand(time(NULL));
    letra_secreta = 'a' + (rand() % 26);

    printf("=== JOGO DA ADIVINHACAO DE LETRAS ===\n");
    printf("Tente adivinhar a letra secreta (entre 'a' e 'z'):\n");

    do {
        printf("Digite o teu palpite: ");
        scanf(" %c", &palpite);
        tentativas++;

        if (palpite < letra_secreta) {
            printf("Dica: A letra secreta vem DEPOIS no alfabeto!\n");
        } else if (palpite > letra_secreta) {
            printf("Dica: A letra secreta vem ANTES no alfabeto!\n");
        } else {
            printf("\nParabens! Acertaste na letra '%c'!\n", letra_secreta);
            printf("Total de tentativas utilizadas: %d\n", tentativas);
        }
    } while (palpite != letra_secreta);

    return 0;
}