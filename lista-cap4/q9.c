#include <stdio.h>

int main() {
    float lab, semestral, final_exame, media;

    printf("Digite a nota do Trabalho de Laboratorio: ");
    scanf("%f", &lab);

    printf("Digite a nota da Avaliacao Semestral: ");
    scanf("%f", &semestral);

    printf("Digite a nota do Exame Final: ");
    scanf("%f", &final_exame);

    // Pesos: lab (2), semestral (3), final (5) -> soma dos pesos = 10
    media = (lab * 2 + semestral * 3 + final_exame * 5) / 10.0;

    printf("Media ponderada: %.2f\n", media);

    if (media >= 0.0 && media <= 2.9) {
        printf("Situacao: Reprovado\n");
    } else if (media >= 3.0 && media <= 4.9) {
        printf("Situacao: Em Recuperacao\n");
    } else if (media >= 5.0) {
        printf("Situacao: Aprovado\n");
    }

    return 0;
}