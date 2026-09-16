a) i < j + 3Soma primeiro: j + 3 $\rightarrow$ 2 + 3 = 5.Comparação: 1 < 5 (Verdadeiro).Resultado: 1

b) 2 * i - 7 <= j - 8Lado esquerdo: 2 * 1 - 7 $\rightarrow$ 2 - 7 = -5.Lado direito: j - 8 $\rightarrow$ 2 - 8 = -6.Comparação: -5 <= -6 (Falso).Resultado: 0

c) -x + y >= 2.0 * y

Lado esquerdo: -3.3 + 4.4 = 1.1.

Lado direito: 2.0 * 4.4 = 8.8.

Comparação: 1.1 >= 8.8 (Falso).

Resultado: 0

d) x == y

Comparação: 3.3 == 4.4 (Falso).

Resultado: 0

e) !(n - j)Parênteses primeiro: n - j $\rightarrow$ 2 - 2 = 0.Negação lógica: !0 (Em C, 0 é falso, logo sua negação é verdadeiro).Resultado: 1

f) !n - jNegação tem precedência sobre a subtração: !n $\rightarrow$ !2 (qualquer valor diferente de 0 é verdadeiro, então !2 vira 0).Subtração: 0 - j $\rightarrow$ 0 - 2 = -2.Obs: O resultado aritmético final é -2 (que em contexto lógico equivale a verdadeiro, mas como valor de retorno da expressão é -2).Resultado: -2

g) i && j && k

Como i=1, j=2 e k=3 são todos diferentes de zero, todos são considerados verdadeiros.

1 && 1 && 1 (Verdadeiro).

Resultado: 1

h) i || j - 3 && k

Devido à regra de curto-circuito do operador ||: como i = 1 (verdadeiro), C não precisa avaliar o restante da expressão para saber que o resultado final é verdadeiro.

Resultado: 1

i) i < j && 2 >= kLado esquerdo: 1 < 2 (Verdadeiro $\rightarrow$ 1).Lado direito: 2 >= 3 (Falso $\rightarrow$ 0).Avaliação: 1 && 0 (Falso).Resultado: 0

j) i == 2 || j == 4 || k == 5i == 2 $\rightarrow$ 1 == 2 (Falso).j == 4 $\rightarrow$ 2 == 4 (Falso).k == 5 $\rightarrow$ 3 == 5 (Falso).Avaliação: 0 || 0 || 0 (Falso).Resultado: 0

Resumo das Respostas
a) 1

b) 0

c) 0

d) 0

e) 1

f) -2

g) 1

h) 1

i) 0

j) 0