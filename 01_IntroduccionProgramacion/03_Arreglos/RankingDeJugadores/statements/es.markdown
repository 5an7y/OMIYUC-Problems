# Historia

En un **torneo de videojuegos**, $N$ jugadores se sentaron uno detrás del otro a esperar su turno. Cada jugador tiene un número de **rating** $a_i$ que mide su habilidad (puede ser positivo, negativo o cero).

Antes de empezar el torneo, cada jugador quiere armar la **alianza** más grande posible con los jugadores que están **detrás** suyo en la fila (es decir, con índice mayor). La regla de las alianzas es:

> Una alianza es válida si **todos sus miembros** tienen rating estrictamente **MAYOR** que el jugador que la arma, **o** todos sus miembros tienen rating estrictamente **MENOR** que él. No se pueden mezclar.

(Los jugadores con el mismo rating no pueden formar parte de la alianza.)

# Problema

Para cada jugador $i$, calcula el **tamaño máximo** de la alianza que puede armar entre los jugadores que están detrás suyo en la fila (índices $j > i$).

# Entrada

En la primera línea, un entero $N$, la cantidad de jugadores.

En la segunda línea, $N$ enteros $a_1, a_2, \ldots, a_N$ separados por espacios.

# Salida

En una sola línea, $N$ enteros separados por espacios: el tamaño máximo de la alianza para cada jugador, en orden de $1$ a $N$.

# Ejemplos

||input
1
1092
||output
0
||description
Solo hay un jugador; nadie está detrás, así que su alianza tiene tamaño $0$.
||input
2
105 -105
||output
1 0
||description
El jugador $1$ tiene a su derecha al jugador $2$ con rating menor → alianza de tamaño $1$. El jugador $2$ no tiene a nadie detrás.
||input
5
1 2 93 84 2
||output
4 2 2 1 0
||description
Para el jugador $1$ ($a_1 = 1$): los 4 jugadores detrás tienen rating mayor → alianza de tamaño $4$. Para el jugador $3$ ($a_3 = 93$): a su derecha hay $84$ y $2$, ambos menores → alianza de tamaño $2$.
||end

# Limites

- $1 \leq N \leq 5000$
- $-10^9 \leq a_i \leq 10^9$

**Para un 50% de los casos**

- $1 \leq N \leq 10$
- $1 \leq a_i \leq 10$
