#include <stdio.h>

// Função recursiva para calcular o MDC
int mdc(int a, int b) {
    if (b == 0) {
        return a;
    }
    return mdc(b, a % b);
}

// Procedimento para simplificar a fração
void simplifica(int num, int den) {
    int divisor = mdc(num, den);
    printf("Fracao simplificada: %d/%d\n", num / divisor, den / divisor);
}

int main() {
    int n1, n2;
    
    printf("Digite dois numeros inteiros positivos (numerador e denominador): ");
    scanf("%d %d", &n1, &n2);
    
    if (n1 > 0 && n2 > 0) {
        printf("O MDC de %d e %d eh: %d\n", n1, n2, mdc(n1, n2));
        simplifica(n1, n2);
    } else {
        printf("Por favor, digite apenas numeros positivos e maiores que zero.\n");
    }
    
    return 0;
}