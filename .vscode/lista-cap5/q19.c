#include <stdio.h>

void contagem(int n) {
    if (n == 0) {
        printf("Fogo!\n");
        return;
    }
    printf("%d\n", n);
    contagem(n - 1);
}

// Segunda versao: imprime de 1 ate n
void contagemCrescente(int n) {
    if (n == 0) {
        return;
    }
    // Na contagem crescente, a chamada recursiva vem ANTES do printf.
    // Assim, ele empilha todas as chamadas ate chegar no 0 e so imprime
    // na volta (desempilhando), saindo do 1 ate o n.
    contagemCrescente(n - 1);
    printf("%d\n", n);
}

int main() {
    int n;
    
    printf("Digite um numero positivo: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("O numero precisa ser positivo!\n");
    } else {
        printf("--- Contagem Regressiva ---\n");
        contagem(n);
        
        printf("--- Contagem de 1 ate N ---\n");
        contagemCrescente(n);
    }
    
    return 0;
}