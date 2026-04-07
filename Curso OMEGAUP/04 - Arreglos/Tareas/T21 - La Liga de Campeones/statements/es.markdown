*Este problema es una* ***tarea*** *diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.*

# Problema

La temporada de fútbol llegó a su fase final. Hay $N$ equipos, y cada uno tiene una cierta cantidad de puntos acumulados. Los equipos que empaten el **primer lugar** (es decir, los que tengan exactamente el máximo de puntos) se clasifican al siguiente torneo. Los demás quedan eliminados.

Dado el arreglo de puntos de los $N$ equipos, imprime primero los que se **clasificaron** y luego los que **quedaron eliminados**, en el orden original en que aparecen.

# Entrada

Un entero $N$. En la siguiente línea, los $N$ puntos de los equipos.

# Salida

Dos líneas. La primera con los puntos de los equipos clasificados, la segunda con los puntos de los eliminados. Si no hay equipos en algún grupo, esa línea debe ir vacía.

# Ejemplos

||input
5
30 20 30 10 25
||output
30 30
20 10 25
||description
El máximo es 30. Los equipos con 30 puntos se clasifican; los demás quedan eliminados.
||input
3
15 15 15
||output
15 15 15

||description
Todos empatan el primer lugar, así que todos se clasifican. La segunda línea va vacía.
||input
1
42
||output
42

||description
Un solo equipo siempre se clasifica.
||end

# Limites

- $1 \leq N \leq 100$
- $0 \leq p_i \leq 100$
