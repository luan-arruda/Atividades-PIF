#include <stdio.h>

int ehPar(int n) {
    if (n % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int numero;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    
    if (ehPar(numero) == 1) {
        printf("O numero e PAR!\n");
    } else {
        printf("O numero e IMPAR!\n");
    }
    
    return 0;
}