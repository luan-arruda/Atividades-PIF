#include <stdio.h>

int main() {
    float comprimento, largura, preco_metro;
    float perimetro, metros_arame, custo_total;

    printf("Digite o comprimento do terreno (m): ");
    scanf("%f", &comprimento);

    printf("Digite a largura do terreno (m): ");
    scanf("%f", &largura);

    printf("Digite o preco por metro de arame (R$): ");
    scanf("%f", &preco_metro);

    // Perimetro = 2 * (comprimento + largura)
    perimetro = 2.0 * (comprimento + largura);
    
    // Exige 3 fios de arame ao longo do perimetro
    metros_arame = perimetro * 3.0;
    custo_total = metros_arame * preco_metro;

    printf("\nMetros de arame necessarios: %.2f m\n", metros_arame);
    printf("Custo total do cercamento: R$ %.2f\n", custo_total);

    return 0;
}