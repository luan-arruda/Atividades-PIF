#include <stdio.h>
#include <stdlib.h>

int main()
{
    // %c espera um caractere (entre aspas simples ' '), não uma string 
    // '\n' = pula linha, '\t' = da um tab, '\"' = imprime uma aspa de verdade na tela
    printf("%c%c%cPrimeiro programa", '\n', '\t', '\"');

    // aqui tem um erro: "\"" ta entre aspas DUPLAS, ou seja, é uma string, nao um char
    // como %c só aceita char, o compilador avisa que o tipo ta errado
    // isso da comportamento imprevisivel (pode imprimir lixo, um caractere aleatorio, etc)
    printf("%c", "\"");

    system("PAUSE");
    return 0;
}