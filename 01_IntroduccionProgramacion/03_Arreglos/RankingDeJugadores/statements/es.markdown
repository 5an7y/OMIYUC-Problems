# Historia

En un **torneo de videojuegos**, $N$ jugadores llegaron uno por uno y se sentaron en el orden en que fueron llegando. Cada jugador tiene un número de **rating** $a_i$ (puede ser positivo, negativo o cero).

El torneo se desarrolla de la siguiente forma: el jugador $j$ se enfrenta a **todos los jugadores que llegaron después de él**, es decir, a todos los jugadores $i$ con $i > j$.

Antes de jugar, el jugador $j$ **elige un mapa** con dificultad $K$ ($K$ puede ser cualquier número entero, incluso negativo).

Los jugadores saben que la dificultad del mapa es muy importante: **mientras más cercano sea tu rating a la dificultad $K$, mejor juegas ese mapa**. En particular, el jugador $j$ **le gana** al jugador $i$ en un mapa de dificultad $K$ si su rating está más cerca de $K$ que el de $i$, es decir, si

$$|a_j - K| < |a_i - K|$$

Si las dos distancias son iguales, la partida queda en **empate** (no cuenta como victoria para nadie).

# Problema

Para cada jugador $j$, calcula la **máxima cantidad de partidas que puede ganar** si elige la dificultad $K$ de la forma más conveniente para él. Recuerda que el jugador $j$ solo se enfrenta a los jugadores que llegaron después de él.

Formalmente, para cada $j$ debes calcular:

$$\max_{K \in \mathbb{Z}} \; \big| \, \{ i : i > j \text{ y } |a_j - K| < |a_i - K| \} \, \big|$$

# Entrada

En la primera línea, un entero $N$, la cantidad de jugadores.

En la segunda línea, $N$ enteros $a_1, a_2, \ldots, a_N$ separados por espacios.

# Salida

En una sola línea, $N$ enteros separados por espacios: la máxima cantidad de partidas que puede ganar cada jugador, en orden de $1$ a $N$.

# Ejemplos

||input
1
1092
||output
0
||description
Solo hay un jugador, así que no hay nadie con quien enfrentarse.
||input
2
105 -105
||output
1 0
||description
Para el jugador $1$ con rating $105$: si elige $K = 105$, entonces $|105 - 105| = 0$ y $|(-105) - 105| = 210$. Su rating está más cerca de $K$ que el del jugador $2$, así que le gana. Total: $1$ victoria. Para el jugador $2$ no hay nadie a quien enfrentarse.
||input
5
1 2 93 84 2
||output
4 2 2 1 0
||description
Para el jugador $1$ con rating $1$: si elige $K = 1$, su distancia a $K$ es $0$, mientras que los $4$ jugadores posteriores tienen distancias $1, 92, 83$ y $1$. Todas son mayores que $0$, así que les gana a los $4$.
||end

# Limites

- $1 \leq N \leq 5000$
- $-10^9 \leq a_i \leq 10^9$

**Para un 50% de los casos**

- $1 \leq N \leq 10$
- $1 \leq a_i \leq 10$
