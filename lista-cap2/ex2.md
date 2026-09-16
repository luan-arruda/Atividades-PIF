a) A biblioteca <conio.h> não faz parte do padrão ANSI/ISO C e é específica do ecossistema MS-DOS/Windows. Por não ser uma biblioteca padrão, ela não está disponível nativamente em compiladores para sistemas como Linux, macOS e servidores Unix. Usar funções como getch() compromete a portabilidade do código, impedindo que ele seja compilado nesses ambientes sem o uso de bibliotecas de terceiros ou adaptações específicas do sistema operacional.

b) As funções padrão fornecidas pela <stdio.h> para leitura e escrita de caracteres são:

Entrada: getchar() (ou fgetc(stdin) e scanf("%c", ...)).

Saída: putchar() (ou fputc(..., stdout)).

c)
#include <stdio.h>

int main() {
    char c;

    // O espaço antes do %c instrui o scanf a ignorar 
    // quaisquer caracteres de espaço em branco (como ' ', '\t' e '\n')
    printf("Digite um caractere: ");
    scanf(" %c", &c);

    printf("Caractere lido: %c\n", c);

    return 0;
}