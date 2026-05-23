# Historia

En el mercado Lucas de Gálvez, Lupita vende boletos de una rifa especial. Cada boleto tiene un número $N$ impreso, y su **valor especial** se calcula restándole la suma de sus dígitos:

$$\text{valor especial} = N - (d_1 + d_2 + \cdots + d_k)$$

donde $d_1, d_2, \ldots, d_k$ son los dígitos de $N$.

Por ejemplo, el boleto $23$ tiene valor especial $23 - (2 + 3) = 18$, y el boleto $100$ tiene valor especial $100 - (1 + 0 + 0) = 99$.

Un cliente llega y pregunta: "¿cuántos boletos diferentes tienen exactamente el valor especial $X$?"

# Problema

Dado $X$, determina cuántos enteros positivos $N$ satisfacen $N - S(N) = X$, donde $S(N)$ es la suma de los dígitos de $N$.

# Entrada

Un único entero $X$.

# Salida

La cantidad de enteros positivos $N$ que satisfacen $N - S(N) = X$.

# Ejemplos

||input
9
||output
10
||description
Los boletos con valor especial 9 son: 10, 11, 12, 13, 14, 15, 16, 17, 18, 19.
||input
5
||output
0
||input
18
||output
10
||input
90
||output
0
||input
999999999
||output
10
||end

# Limites

- $1 \leq X < 10^9$

**Para un 50% de los casos**

- $X < 100$
