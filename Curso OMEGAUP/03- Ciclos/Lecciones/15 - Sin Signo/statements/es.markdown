*Este problema es una* ***lección*** *diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.*

# Problema

En clase de ciencias, el maestro llenó un frasco con canicas y los $N$ alumnos intentaron adivinar cuántas había. El maestro anotó la diferencia entre cada intento y el número real: positiva si el alumno se pasó, negativa si se quedó corto.

Para el podio solo importa qué tan lejos estuvo cada quien — sin importar si se pasó o no llegó. Imprime el valor absoluto de cada diferencia.

# Entrada

Un entero $N$. En la siguiente línea las $N$ diferencias.

# Salida

El valor absoluto de cada diferencia, uno por línea, en el mismo orden.

# Ejemplos

||input
5
-1 1 2 -2 4
||output
1
1
2
2
4
||input
3
-3 2 -1
||output
3
2
1
||input
1
0
||output
0
||end

# Limites

- $0 < N \leq 100$
- $-100 \leq x_i \leq 100$
