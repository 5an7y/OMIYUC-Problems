*Este problema es una* ***lección*** *diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.*

# El árbitro distraído

El árbitro de la liga de fútbol anota la diferencia de goles de cada partido: positiva si ganó el equipo local, negativa si perdió. Al final del torneo necesita reportar cuántos goles "se movieron" en cada partido — sin importar quién ganó, solo la magnitud.

Dado el registro de $N$ partidos, imprime el valor absoluto de cada diferencia.

# Entrada

Un entero $N$. En la siguiente línea las $N$ diferencias de goles (pueden ser negativas).

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
- $|x_i| \leq 100$
