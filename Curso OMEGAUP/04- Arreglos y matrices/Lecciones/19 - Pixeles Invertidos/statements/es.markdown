*Este problema es una* ***lección*** *diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.*

# Problema

Sofía diseñó una imagen de $N \times M$ píxeles. Cada píxel tiene un color representado por un número entero. Sofía quiere verla invertida **verticalmente**: la fila de abajo queda arriba y la de arriba queda abajo.

# Entrada

Dos enteros $N$ y $M$ que indican las filas y columnas de la imagen. En las siguientes $N$ líneas, los $M$ enteros que representan el color de cada píxel.

# Salida

La imagen invertida verticalmente: $N$ líneas con $M$ enteros cada una.

# Ejemplos

||input
4 5
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
||output
16 17 18 19 20
11 12 13 14 15
6 7 8 9 10
1 2 3 4 5
||input
2 1
5
4
||output
4
5
||input
1 3
7 8 9
||output
7 8 9
||end

# Limites

- $1 \leq N, M \leq 10$
- $0 \leq p_{i,j} \leq 100$
