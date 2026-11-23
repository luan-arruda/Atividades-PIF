#include <stdio.h>

long potencia(int base, int expoente) {
    // CASO BASE: qualquer numero elevado a 0 eh igual a 1
    if (expoente == 0) {
        return 1;
    }
    // PASSO RECURSIVO: multiplica a base pelo resultado da base elevada a (expoente - 1)
    return base * potencia(base, expoente - 1);
}

int main() {
    int base, expoente;
    
    printf("Digite a base e o expoente: ");
    scanf("%d %d", &base, &expoente);
    
    if (expoente < 0) {
        printf("Erro: O expoente deve ser nao negativo.\n");
    } else {
        printf("Resultado: %ld\n", potencia(base, expoente));
    }
    
    return 0;
}