#include <stdio.h>
#include <math.h>

int main() {
    float altura_degrau_cm, altura_total_m, altura_total_cm;
    int qtd_degraus;

    printf("Digite a altura de cada degrau (em cm): ");
    scanf("%f", &altura_degrau_cm);

    printf("Digite a altura total a alcançar (em metros): ");
    scanf("%f", &altura_total_m);

    // Conversao de metros para centimetros
    altura_total_cm = altura_total_m * 100.0;

    // Arredondamento para cima com ceil() para garantir a altura total
    qtd_degraus = (int) ceil(altura_total_cm / altura_degrau_cm);

    printf("Numero minimo de degraus necessarios: %d\n", qtd_degraus);

    return 0;
}