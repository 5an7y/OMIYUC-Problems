*Este problema es una* ***tarea*** *diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.*


# Problema

Es la época del año donde participantes de todo el mundo vienen a concursar a la OMI Yucatán. Sin embargo, para este concurso tenemos ciertas restricciones de edad. Los concursantes deben tener una edad entre $a$ y $b$ años.

Este año contamos con $N$ solicitudes de participantes y es tu tarea determinar cuántos de ellos pueden participar dada su edad.

# Entrada

En la primera línea se te darán 3 enteros $N$, $a$ y $b$. Que son la cantidad de participantes, la edad mínima y máxima respectivamente.

En la siguiente línea tendrás $N$ enteros $x_i$ que representan la edad de los participantes.

# Salida

Un entero representando la cantidad de participantes que cumplen las restricciones de edad.

# Ejemplos

||input
5 12 17
1 15 10 17 12
||output
3
||description
En este caso solo 3 participantes de los 5 que tenemos cumplen tener una edad entre los 12 y 17 años.
||input
3 50 80
20 45 90
||output
0
||input
10 4 7
1 2 3 4 5 6 7 8 9 10
||output
4
||end

# Limites

- $1 \leq N \leq 100$
- $1 \leq a \leq b \leq 100$
- $1 \leq x_i \leq 100$
