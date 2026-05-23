# Historia

En el Club de Programación, los estudiantes inventaron un juego con fichas numeradas. Tienen una secuencia de $N$ fichas, donde la ficha en la posición $i$ (contando desde $1$) tiene el número $a_i$ escrito.

Definen dos tipos de secuencias especiales:

- Una secuencia es **buena** si existe alguna posición $i$ donde la ficha tiene exactamente el número $i$ (es decir, $a_i = i$). Por ejemplo, la secuencia $[3, 2, 5, 4]$ es **buena** porque en la posición $2$ está el número $2$. En cambio, $[2, 1, 4, 3]$ **no** es buena: posición 1 tiene 2, posición 2 tiene 1, posición 3 tiene 4, posición 4 tiene 3, ninguno coincide.

- Una **subsecuencia** se forma quitando algunas fichas y dejando las demás en su lugar (sin moverlas ni reordenarlas). Por ejemplo, de $[2, 1, 4, 3]$ se puede quitar la ficha en posición 1 y la de posición 3, y queda la subsecuencia $[1, 3]$.

  Una secuencia es **bonita** si alguna de sus subsecuencias es **buena**. Por ejemplo, $[2, 1, 4, 3]$ es **bonita**: la subsecuencia $[1, 3]$ es buena porque su posición 1 tiene el número 1.

# Problema

Dada una secuencia de $N$ enteros $a_1, a_2, \ldots, a_N$, determina si la secuencia es **bonita**.

Imprime **SI** si la secuencia es bonita, **NO** en caso contrario.

# Entrada

La primera línea contiene $N$.
La segunda línea contiene los $N$ enteros $a_1, a_2, \ldots, a_N$.

# Salida

**SI** o **NO**.

# Ejemplos

||input
5
2 4 1 5 3
||output
SI
||input
3
3 1 2
||output
SI
||input
4
2 3 4 5
||output
NO
||input
1
1
||output
SI
||input
1
1000000000
||output
NO
||end

# Limites

- $1 \leq N \leq 10^4$
- $1 \leq a_i \leq 10^9$

**Para un 50% de los casos**

- Todas las secuencias **bonitas** tambien son **buenas**.
