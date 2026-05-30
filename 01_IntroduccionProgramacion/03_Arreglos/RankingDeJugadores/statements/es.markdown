# Historia

En un **torneo de videojuegos**, $N$ jugadores llegaron uno por uno y se sentaron en el orden en que fueron llegando. Cada jugador tiene un número de **miedo** $a_i$ (puede ser positivo, negativo o cero) que mide cuánto le asusta cierto tipo de monstruo.

El torneo se desarrolla **por rondas**. La **ronda de $i$** consiste en que el jugador $i$ se enfrenta, una por una, contra **todos los jugadores que llegaron después de él** (es decir, contra todos los $j > i$).

Al comienzo de la ronda de $i$, alguien elige un **único tipo de monstruo** $K$ ($K$ puede ser cualquier número entero, incluso negativo) y **ese mismo $K$ se usa en TODAS las partidas de esa ronda** (contra cada uno de los $j > i$).

La **valentía** de un jugador con miedo $a$ frente a un monstruo de tipo $K$ se define como

$$\text{valentía} = |a - K|$$

(qué tan lejos está su nivel de miedo del tipo del monstruo).

> El jugador con **mayor valentía** es el que **destruye al monstruo primero**, ganando la partida.

Si dos jugadores tienen exactamente la misma valentía, hay empate (no cuenta como victoria para ninguno).

# Problema

Para cada jugador $i$, considera **su ronda** (las partidas contra todos los $j > i$, usando un único $K$ para toda la ronda). Si tú pudieras escoger el tipo de monstruo $K$ de la forma más conveniente para esa ronda, **¿cuántos jugadores posteriores podrían ganarle a $i$** (es decir, tener mayor valentía que él)?

Formalmente, para cada $i$ debes calcular:

$$\max_{K \in \mathbb{Z}} \; \big| \, \{ j : j > i \text{ y } |a_j - K| > |a_i - K| \} \, \big|$$

# Entrada

En la primera línea, un entero $N$, la cantidad de jugadores.

En la segunda línea, $N$ enteros $a_1, a_2, \ldots, a_N$ separados por espacios.

# Salida

En una sola línea, $N$ enteros separados por espacios: para cada $i$ (en orden de $1$ a $N$), la cantidad máxima de jugadores posteriores que podrían ganarle.

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
Para el jugador $1$ (miedo $105$): si $K = 105$, su valentía es $|105 - 105| = 0$ y la del jugador $2$ es $|-105 - 105| = 210$. El jugador $2$ tiene mayor valentía, así que le gana. Total: $1$ jugador posterior puede ganarle.
||input
5
1 2 93 84 2
||output
4 2 2 1 0
||description
Para el jugador $1$ (miedo $1$): si $K = 1$, su valentía es $0$ y las valentías de los $4$ jugadores posteriores son $1, 92, 83$ y $1$. Todas son mayores que $0$, así que los $4$ pueden ganarle.
||end

# Limites

- $1 \leq N \leq 5000$
- $-10^9 \leq a_i \leq 10^9$

**Para un 50% de los casos**

- $1 \leq N \leq 10$
- $1 \leq a_i \leq 10$
