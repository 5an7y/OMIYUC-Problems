*Este problema es una* ***lección*** *diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.*

# Problema

En el torneo de ajedrez de la escuela, los jugadores se emparejan en orden: el jugador 0 con el 1, el 2 con el 3, y así sucesivamente. A cada pareja le asignan como puntaje la suma de los puntajes individuales de sus dos integrantes.

Dado el arreglo de puntajes individuales (con $N$ par), imprime el puntaje de cada pareja.

# Entrada

Un entero $N$ (siempre par). En la siguiente línea, los $N$ puntajes de los jugadores.

# Salida

Los $N/2$ puntajes de las parejas, separados por espacios.

# Ejemplos

||input
6
1 5 4 3 2 9
||output
6 7 11
||description
Pareja 0: $1+5=6$. Pareja 1: $4+3=7$. Pareja 2: $2+9=11$.
||input
4
10 20 30 40
||output
30 70
||input
2
7 7
||output
14
||end

# Limites

- $2 \leq N \leq 100$ ($N$ siempre es par)
- $0 \leq x_i \leq 100$
