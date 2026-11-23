#include <stdio.h>

long fatorialIterativo(int n) {
    long fat = 1;
    for (int i = 1; i <= n; i++) {
        fat = fat * i;
    }
    return fat;
}

long fatorialRecursivo(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * fatorialRecursivo(n - 1);
}

int main() {
    int num;
    long resIterativo, resRecursivo;
    
    printf("Digite um numero inteiro nao negativo: ");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("Numero invalido! Digite um valor positivo ou zero.\n");
    } else {
        resIterativo = fatorialIterativo(num);
        resRecursivo = fatorialRecursivo(num);
        
        printf("Fatorial Iterativo: %ld\n", resIterativo);
        printf("Fatorial Recursivo: %ld\n", resRecursivo);
        
        if (resIterativo == resRecursivo) {
            printf("Os resultados coincidem!\n");
        } else {
            printf("Os resultados sao diferentes.\n");
        }
    }
    
    return 0;
}