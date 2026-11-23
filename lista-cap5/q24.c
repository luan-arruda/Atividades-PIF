#include <stdio.h>

// Comente ou descomente a linha abaixo para testar os dois comportamentos
#define DEBUG

int somaAteN(int n) {
    int soma = 0;
    for (int i = 1; i <= n; i++) {
        soma += i;
        #ifdef DEBUG
            printf("[DEBUG] Iteracao %d -> soma parcial = %d\n", i, soma);
        #endif
    }
    return soma;
}

int main() {
    int n;
    
    printf("Digite o valor de N: ");
    scanf("%d", &n);
    
    int total = somaAteN(n);
    printf("Soma total de 1 ate %d: %d\n", n, total);
    
    /*
       DIFERENCA DE COMPORTAMENTO:
       - COM #define DEBUG: O pre-processador inclui o bloco do printf dentro do laco,
         fazendo o programa exibir o passo a passo da soma parcial a cada iteracao.
       - SEM #define DEBUG: O bloco dentro do #ifdef DEBUG eh totalmente ignorado/removido
         antes da compilacao, entao o programa roda limpo e mostra apenas a soma final.
    */
    
    return 0;
}