#include <stdio.h>

int main() {
    float nota, soma = 0.0, media = 0.0;
    float maior, menor;
    int total_alunos = 0;

    printf("Digite as notas dos alunos (ou -1.0 para encerrar):\n");

    while (1) {
        printf("Nota: ");
        scanf("%f", &nota);

        if (nota == -1.0) {
            break;
        }

        if (nota < 0.0 || nota > 10.0) {
            printf("Nota invalida! Digite um valor entre 0.0 e 10.0 ou -1.0 para sair.\n");
            continue;
        }

        if (total_alunos == 0) {
            maior = nota;
            menor = nota;
        } else {
            if (nota > maior) maior = nota;
            if (nota < menor) menor = nota;
        }

        soma += nota;
        total_alunos++;
    }

    if (total_alunos > 0) {
        media = soma / total_alunos;
        printf("\n--- ESTATISTICAS DA TURMA ---\n");
        printf("a) Total de alunos avaliados: %d\n", total_alunos);
        printf("b) Maior nota da turma: %.1f\n", maior);
        printf("c) Menor nota da turma: %.1f\n", menor);
        printf("d) Media geral da turma: %.2f\n", media);
    } else {
        printf("\nNenhum aluno foi registrado.\n");
    }

    return 0;
}