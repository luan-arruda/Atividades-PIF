#include <stdio.h>

float soma(float a, float b) { return a + b; }
float subtrai(float a, float b) { return a - b; }
float multiplica(float a, float b) { return a * b; }
float divide(float a, float b) { return a / b; }

int main() {
    int opcao;
    float n1, n2;
    
    printf("--- CALCULADORA ---\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Opcao: ");
    scanf("%d", &opcao);
    
    printf("Digite os dois valores: ");
    scanf("%f %f", &n1, &n2);
    
    switch(opcao) {
        case 1:
            printf("Resultado: %.2f\n", soma(n1, n2));
            break;
        case 2:
            printf("Resultado: %.2f\n", subtrai(n1, n2));
            break;
        case 3:
            printf("Resultado: %.2f\n", multiplica(n1, n2));
            break;
        case 4:
            // Validacao de divisao por zero antes de chamar a funcao
            if (n2 == 0) {
                printf("Erro: Nao e possivel dividir por zero!\n");
            } else {
                printf("Resultado: %.2f\n", divide(n1, n2));
            }
            break;
        default:
            printf("Opcao invalida!\n");
    }
    
    return 0;
}