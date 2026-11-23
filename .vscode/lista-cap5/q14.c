#include <stdio.h>

int somaDigitos(int n) {
    // CASO BASE: Quando o numero chega a 0, as chamadas recursivas param
    if (n == 0) {
        return 0;
    }
    // PASSO RECURSIVO: pega o ultimo digito (n % 10) e soma com a proxima chamada sem esse digito (n / 10)
    return (n % 10) + somaDigitos(n / 10);
}

int main() {
    int numero;
    
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);
    
    printf("A soma dos digitos de %d e: %d\n", numero, somaDigitos(numero));
    
    return 0;
}