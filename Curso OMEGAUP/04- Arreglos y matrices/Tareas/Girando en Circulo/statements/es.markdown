*Este problema es una* ***tarea*** *diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.*

# Problema

La rueda de San Miguel es un juego clásico donde las personas se acomodan en círculo. Originalmente, cada persona está en una posición numerada del $0$ al $N-1$.

Al dar una vuelta, todas las personas se mueven $K$ posiciones a la derecha. Por ejemplo, si el arreglo es `10 5 4 1 32 2` y $K = 2$, después de la vuelta queda `32 2 10 5 4 1`.

Determina cómo queda el arreglo después de una vuelta.

# Entrada

Dos enteros $N$ y $K$. En la siguiente línea, los $N$ números del arreglo.

# Salida

El arreglo después de rotar $K$ posiciones a la derecha.

# Ejemplos

||input
5 2
9 47 2 89 0
||output
89 0 9 47 2
||description
Los últimos 2 elementos (89 y 0) pasan al frente.
||input
10 5
1 2 3 4 5 6 7 8 9 10
||output
6 7 8 9 10 1 2 3 4 5
||input
4 0
634 53 62 744
||output
634 53 62 744
||end

# Limites

- $1 \leq N \leq 100$
- $0 \leq K \leq N - 1$
- $1 \leq a_i \leq 1000$
