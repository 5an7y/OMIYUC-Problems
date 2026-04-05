*Este problema es una* ***tarea*** *diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.*

Fecha de creación: 6 de noviembre de 2022.

# Problema

La rueda de San Miguel es un juego de niños super clásico donde las personas se acomodan en un círculo y se ponen a hacer muchas cosas. Entre las opciones, las personas rotan el circulo en cualquier sentido.

Originalmente, cada persona se encuentra en una posición que podemos numerar desde $1$ hasta $N$. La persona en la posición $2$ está a un lado de la posición $3$ y la $1$. Al ser un círculo la persona en la posición $1$ está a un lado de la posición $2$ y $N$.

En un congreso decidieron jugar a la rueda de San Miguel para revivir la infancia. Cada persona tiene un numero asignado por el propio evento. Entonces al inicio se encuentran algo similar a 

$$
10, 5, 4, 1, 32, 2.
$$

donde el orden es por la posición en la que se encuentran. Después de realizar una vuelta se mueven $K$ posiciones a la derecha. Si $K = 2$ entonces, después de dar la vuelta quedarían como

$$
    32, 2, 10, 5, 4, 1.
$$

Tu tarea será determina como quedan las personas después de una vuelta.

# Entrada

Dos enteros $N$ y $K$ indicando la cantidad de personas y el movimiento causado por una vuelta.

En la siguiente línea tendrás $N$ enteros que son las personas en cada posición.

# Salida

Una lista de enteros representando como quedan las personas después de la vuelta.

# Ejemplos

||input
5 2
9 47 2 89 0
||output
89 0 2 47 9
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

- $1 \leq N, a_i \leq 10^5$.
- $0 \leq K \leq N - 1$.
