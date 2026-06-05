# Historia

Eres **DJ** y armaste una **playlist** de $N$ canciones para tu próximo programa. Cada canción $i$ es de una **banda** identificada con un número $b_i$.

Tienes $M$ bandas favoritas, numeradas del $1$ al $M$. Como buen DJ quieres que **todas** tus bandas favoritas suenen al menos cierto número de veces durante el programa.

Sea $c_j$ la cantidad de canciones de la banda $j$ que hay en la playlist (donde $1 \leq j \leq M$). Define:

$$x = \min(c_1, c_2, \ldots, c_M)$$

Quieres que $x$ sea lo **más grande posible**. Para lograrlo puedes **cambiar** la banda de algunas canciones (cualquier canción puede pasar a ser de cualquier banda del $1$ al $M$). Pero quieres hacer la menor cantidad de cambios posible.

# Problema

Dada la playlist original, determina:

1. El **máximo valor de $x$** que puedes lograr.
2. La **mínima cantidad de canciones** que tienes que cambiar para lograr ese $x$.
3. Una playlist final que cumpla con esos dos valores.

# Entrada

En la primera línea, dos enteros $N$ y $M$ separados por espacios.

En la segunda línea, $N$ enteros $b_1, b_2, \ldots, b_N$ separados por espacios.

# Salida

En la primera línea, dos enteros separados por un espacio: el máximo $x$ y la mínima cantidad de cambios.

En la segunda línea, $N$ enteros separados por espacios: la playlist final (cada uno debe ser un entero entre $1$ y $M$).

Si hay varias respuestas con el mismo $x$ y el mismo número de cambios, imprime cualquiera.

# Ejemplos

||input
4 2
1 1 2 1
||output
2 1
2 1 2 1
||description
Con $N = 4$ canciones y $M = 2$ bandas, el máximo $x$ posible es $\lfloor 4 / 2 \rfloor = 2$. Hay $3$ canciones de la banda $1$ y $1$ de la banda $2$. Cambiando una canción de la banda $1$ por la $2$ obtenemos $c_1 = c_2 = 2$ con un solo cambio.
||input
7 3
1 3 2 2 2 2 1
||output
2 1
1 3 3 2 2 2 1
||input
4 4
1000000000 100 7 1
||output
1 3
2 3 4 1
||end

# Limites

- $1 \leq M \leq N \leq 2 \cdot 10^5$
- $1 \leq b_i \leq 10^9$

**Para un 50% de los casos**

- $N = M$
