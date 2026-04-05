*Este problema es una* ***lección*** *diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.*

# Problema

En el salón de clases, los alumnos están sentados en $N$ filas y $M$ columnas. El maestro llama la lista pasillo por pasillo: primero llama a todos los de la columna 0 (de la fila 0 a la fila $N-1$), luego a todos los de la columna 1, y así sucesivamente.

Dado el número de lista de cada alumno, imprime el orden en que el maestro los llamará.

# Entrada

Dos enteros $N$ y $M$. En las siguientes $N$ líneas, los $M$ números de lista de los alumnos por fila.

# Salida

Los $N \times M$ números de lista en el orden en que el maestro los llama, separados por espacios en una sola línea.

# Ejemplos

||input
3 3
1 2 3
4 5 6
7 8 9
||output
1 4 7 2 5 8 3 6 9
||description
Columna 0: alumnos 1, 4, 7. Columna 1: alumnos 2, 5, 8. Columna 2: alumnos 3, 6, 9.
||input
2 4
10 20 30 40
50 60 70 80
||output
10 50 20 60 30 70 40 80
||input
1 3
5 6 7
||output
5 6 7
||end

# Limites

- $1 \leq N, M \leq 10$
- $1 \leq a_{i,j} \leq 100$
