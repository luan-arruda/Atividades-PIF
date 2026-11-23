#include <stdio.h>

// Macro original sem parenteses de protecao
// #define DOBRO(x) x*2

// Macro corrigida com parenteses de protecao
#define DOBRO(x) ((x) * 2)

int dobro(int x) {
    return x * 2;
}

int main() {
    printf("Resultado com macro: %d\n", DOBRO(2+3));
    printf("Resultado com funcao: %d\n", dobro(2+3));
    
    /* 
       EXPLICACAO DA DIFERENCA (antes da correcao):
       Na funcao dobro(2+3), a expressao 2+3 eh avaliada primeiro, virando 5,
       e depois multiplicada por 2, resultando em 10.
       Na macro sem parenteses (#define DOBRO(x) x*2), o pre-processador faz
       apenas substituicao de texto, transformando DOBRO(2+3) em 2+3*2.
       Pela precedencia matematica, ele multiplica 3*2 primeiro (6) e depois 
       soma 2, resultando em 8.
       Com os parenteses de protecao ((x)*2), vira ((2+3)*2) e ambos dao 10.
    */
    
    return 0;
}