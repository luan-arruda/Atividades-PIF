#include <stdio.h>    // faltava esse include, é ele que deixa usar o printf
#include <stdlib.h>   // faltava esse tambem, é ele que deixa usar o system

int main()             // faltava dizer que o main devolve um "int"
{
    printf("Linguagem C");
    system("pause");
    return 0;          // faltava esse return, já que o main foi declarado como int
}