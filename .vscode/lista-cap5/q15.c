#include <stdio.h>

float mediaPonderada(float n1, float n2, float n3) {
    return (n1 * 2 + n2 * 3 + n3 * 5) / 10.0;
}

void exibeSituacao(float media) {
    if (media >= 5.0) {
        printf("Aprovado\n");
    } else if (media >= 3.0 && media <= 4.9) {
        printf("Em Recuperacao\n");
    } else {
        printf("Reprovado\n");
    }
}

int main() {
    float nota1, nota2, nota3, media;
    
    printf("Digite as tres notas: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    
    media = mediaPonderada(nota1, nota2, nota3);
    printf("Media: %.2f - Situacao: ", media);
    exibeSituacao(media);
    
    return 0;
}