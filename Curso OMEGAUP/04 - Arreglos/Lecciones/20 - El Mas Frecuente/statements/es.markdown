*Este problema es una* ***lección*** *diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.*

# Problema

En un examen de opción múltiple, las respuestas son números del 1 al 5. El maestro quiere saber cuántas veces se repitió la respuesta más popular entre los $N$ estudiantes.

Dado el arreglo de $N$ respuestas, imprime cuántas veces aparece el número que más se repite.

# Entrada

Un entero $N$. En la siguiente línea, las $N$ respuestas de los estudiantes.

# Salida

Un entero: la cantidad de veces que aparece el valor más frecuente.

# Ejemplos

||input
6
3 1 3 2 3 1
||output
3
||description
El 3 aparece 3 veces, el 1 aparece 2 veces, el 2 aparece 1 vez. La mayor frecuencia es 3.
||input
4
5 5 5 5
||output
4
||description
El 5 aparece 4 veces — todos los estudiantes eligieron la misma respuesta.
||input
3
1 2 3
||output
1
||description
Cada respuesta aparece exactamente 1 vez.
||end

# Limites

- $1 \leq N \leq 100$
- $1 \leq a_i \leq 100$
