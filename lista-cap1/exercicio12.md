Instrução             | Status     | Justificativa Teórica
---------------------- | ---------- | -----------------------------------------------------------
a) int a;              | Correto    | Declaração padrão de uma variável inteira, sem erro nenhum.

b) float b;             | Correto    | Declaração padrão de ponto flutuante de precisão simples.

c) double float c;      | Incorreto  | Não existe combinação "double float" em C. São dois
                        |            | especificadores de tipo diferentes e conflitantes; o correto
                        |            | seria escolher apenas um: "double c;" ou "float c;".

d) unsigned char d;     | Correto    | "unsigned" pode se combinar com "char" para indicar que o
                        |            | caractere armazena apenas valores positivos (0 a 255).

e) unsigned e;          | Correto    | Usado sozinho, "unsigned" é um atalho válido para
                        |            | "unsigned int".

f) long float f;        | Incorreto  | "long float" não é um tipo válido no padrão ANSI C (isso
                        |            | existia em versões antigas de K&R C como sinônimo de double,
                        |            | mas foi removido). O correto seria "double f;" ou
                        |            | "long double f;".

g) long g;              | Correto    | Usado sozinho, "long" é um atalho válido para "long int".

h) long double h;       | Correto    | Combinação válida, indica ponto flutuante de precisão
                        |            | estendida.