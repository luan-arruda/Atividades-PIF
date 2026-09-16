#include <stdio.h>

int main() {
    float n1, n2, n3, n4;
    float media_simples, media_ponderada;

    printf("Digite as 4 notas do aluno separadas por espaco: ");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    // Media Aritmetica Simples
    media_simples = (n1 + n2 + n3 + n4) / 4.0;

    // Media Ponderada (Pesos: 1, 1, 2, 2 -> Soma dos pesos = 6)
    media_ponderada = (n1 * 1.0 + n2 * 1.0 + n3 * 2.0 + n4 * 2.0) / 6.0;

    printf("Media Simples: %.2f\n", media_simples);
    printf("Media Ponderada: %.2f\n", media_ponderada);

    return 0;
}