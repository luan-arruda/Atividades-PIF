#include <stdio.h>
#include <math.h>

int main() {
    char op;
    float n1, n2, res;

    printf("Escolha a operacao (+, -, *, /, ^): ");
    scanf(" %c", &op);

    printf("Digite dois numeros: ");
    scanf("%f %f", &n1, &n2);

    switch (op) {
        case '+':
            res = n1 + n2;
            printf("Resultado: %.2f\n", res);
            break;
        case '-':
            res = n1 - n2;
            printf("Resultado: %.2f\n", res);
            break;
        case '*':
            res = n1 * n2;
            printf("Resultado: %.2f\n", res);
            break;
        case '/':
            if (n2 != 0) {
                res = n1 / n2;
                printf("Resultado: %.2f\n", res);
            } else {
                printf("Erro: Divisao por zero!\n");
            }
            break;
        case '^':
            res = pow(n1, n2);
            printf("Resultado: %.2f\n", res);
            break;
        default:
            printf("Operacao invalida!\n");
            break;
    }

    return 0;
}