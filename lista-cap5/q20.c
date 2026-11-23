#include <stdio.h>

int ehPrimo(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int num;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    
    if (ehPrimo(num) == 1) {
        printf("%d eh um numero primo.\n", num);
    } else {
        printf("%d nao eh primo.\n", num);
    }
    
    printf("\nNumeros primos de 1 ate 50:\n");
    for (int i = 1; i <= 50; i++) {
        if (ehPrimo(i) == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
    
    return 0;
}