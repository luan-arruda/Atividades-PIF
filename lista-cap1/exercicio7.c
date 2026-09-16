#include <stdio.h>

int main()
{
    // a) primeiro pula uma linha (\n), depois dá um tab (\t) e escreve o texto
    printf("\n\tBom dia! Shirley.");

    // b) escreve o texto normal e no final pula uma linha
    printf("Voce ja tomou cafe? \n");

    // c) pula duas linhas (fica uma linha em branco), escreve a primeira frase,
    // pula mais uma linha e escreve a segunda frase
    printf("\n\nA solucao nao existe!\nNao insista.");

    // d) escreve palavras separadas por tab, depois pula linha e escreve mais duas separadas por tab
    printf("Duas\tlinhas\tde\tsaida\nou\tuma?");

    // e) cada %s vira uma palavra, e cada uma termina pulando uma linha
    printf("%s\n%s\n%s\n", "um", "dois", "tres");

    return 0;
}