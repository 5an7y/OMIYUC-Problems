*Este problema es una* ***tarea*** *diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.*

# Problema

Se te dará una matriz de $N \times M$. Debes imprimir la matriz rotada **90 grados en sentido antihorario**.

# Entrada

Dos enteros $N$ y $M$. En las siguientes $N$ líneas, los $M$ enteros de cada fila.

# Salida

La matriz rotada 90° antihorario: tendrá $M$ filas y $N$ columnas.

# Ejemplos

||input
4 4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
||output
4 8 12 16
3 7 11 15
2 6 10 14
1 5 9 13
||input
3 2
9 4
8 3
0 1
||output
4 3 1
9 8 0
||input
2 3
4 3 1
9 8 0
||output
1 0
3 8
4 9
||end

# Limites

- $1 \leq N, M \leq 20$
- $1 \leq a_{i,j} \leq 100$
