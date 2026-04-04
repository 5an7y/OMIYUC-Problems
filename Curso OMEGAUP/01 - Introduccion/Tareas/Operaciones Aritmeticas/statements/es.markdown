*Este problema es una* ***tarea*** *diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.*

Fecha de creación: 06 de enero de 2022.

# Problema

Estas aprendiendo las operaciones que se pueden hacer con enteros. Por esta razon se te daran dos numeros $a$ y $b$ y deberas imprimir el resultado de las operaciones

1. Suma
2. Resta
3. Multiplicacion
4. Division entera
5. Modulo

en ese orden. Las operaciones son $a$ aplicada a $b$; por ejemplo, la division es `a / b` y no `b / a`.

# Entrada

Dos numeros enteros $a$ y $b$ separados por un espacio.

# Salida

El resultado de las operaciones mencionadas antes en ese orden.

# Ejemplos

||input
27 5
||output
32
22
135
5
2
||input
11 13
||output
24
-2
143
0
11
||input
10 10
||output
20
0
100
1
0
||end

# Limites

- $1 \leq a, b \leq 10^6$

**Pista:** piensa en qué tan grande puede ser el resultado de cada operación. ¿Caben todos en un `int`?