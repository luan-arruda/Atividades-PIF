#include <stdio.h>
#include <stdlib.h>   // tirei o ";" que tava sobrando aqui (include não usa ponto e vírgula)

int main()             // era "Main" com M maiúsculo, tem que ser tudo minúsculo
                        // e os parênteses tavam trocados por chaves, então corrigi pra "()"
{                       // aqui tinha um "(" no lugar do "{" que abre a função
    printf("Existem %d semanas no ano.\n", 52);
    // faltavam as aspas na frase do printf, toda frase precisa ficar entre " "

    // apaguei a linha "cout << endl", isso é de C++ e não funciona em C

    system("PAUSE");
    return 0;
}                       // aqui fechava com ")" e tinha que fechar com "}"