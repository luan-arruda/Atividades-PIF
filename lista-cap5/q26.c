#include <stdio.h>

long fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int quantidade;
    
    printf("Quantos termos da sequencia de Fibonacci voce quer ver? ");
    scanf("%d", &quantidade);
    
    printf("Sequencia: ");
    for (int i = 0; i < quantidade; i++) {
        printf("%ld ", fibonacci(i));
    }
    printf("\n");
    
    /*
       COMENTÁRIO SOBRE A LENTIDÃO:
       A versão recursiva do Fibonacci se torna muito lenta para valores grandes 
       de 'n' porque ela não "lembra" os valores que já calculou. Para calcular 
       fibonacci(5), por exemplo, ela calcula fibonacci(3) várias vezes repetidas. 
       Isso cria uma árvore de chamadas gigantesca que cresce de forma exponencial, 
       fazendo o computador recalcular as mesmas coisas milhões de vezes. Obs. Logicamente eu precisei de ajuda do claude nessa (rsrs)
    */
    
    return 0;
}