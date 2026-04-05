*Este problema es una* ***tarea*** *diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.*

# Problema

Se te dará una matriz de $N \times M$. Deberás imprimirla en **orden serpentina**: fila por fila, pero alternando la dirección en cada fila. La fila 0 va de izquierda a derecha, la fila 1 de derecha a izquierda, la fila 2 de izquierda a derecha, y así.

# Entrada

Dos enteros $N$ y $M$. En las siguientes $N$ líneas, los $M$ enteros de cada fila.

# Salida

Los $N \times M$ enteros en orden serpentina, en una sola línea separados por espacios.

# Ejemplos

||input
3 4
1 2 3 4
5 6 7 8
9 10 11 12
||output
1 2 3 4 8 7 6 5 9 10 11 12
||input
2 2
100 45
883 983
||output
100 45 983 883
||input
1 3
7 8 9
||output
7 8 9
||end

# Limites

- $1 \leq N, M \leq 20$
- $1 \leq a_{i,j} \leq 1000$
