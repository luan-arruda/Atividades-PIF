#include <stdio.h>     // faltava esse include pra poder usar o printf
#include <stdlib.h>    // faltava esse pra poder usar o system

int main()              // faltava o "int" antes do main
{
    int a = 1, b = 2, c = 3;  
    // aqui só o "a" tava declarado como int, o "b" e o "c" ficaram soltos sem tipo
    // também tinha um ":" no final da linha, mas o certo é ";"

    printf("Os numeros sao: %d %d %d\n", a, b, c);
    // faltava fechar as aspas antes da virgula (a citação tinha ficado aberta)
    // e tinha um "d" a mais depois do "c", uma variável que nem existe
    // coloquei espaço entre os %d só pra ficar mais fácil de ler no console

    system("pause");
    return 0;            // faltava esse return, já que agora o main é do tipo int
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 1, b = 2, c = 3;
    printf("Os numeros sao: %d %d %d\n", a, b, c);
    system("pause");
    return 0;
}