# Historia

En un **torneo de videojuegos**, $N$ jugadores se sentaron uno detrás del otro a esperar su turno. Cada jugador tiene un número de **rating** $a_i$ (puede ser positivo, negativo o cero).

El **director** del torneo va a armar equipos. Antes de cada ronda, elige un número entero $K$ (el llamado **rating ideal** de la ronda). Una vez fijado $K$, dice:

> Un jugador $j$ es **más fácil** que un jugador $i$ si su rating está **más cerca** de $K$, es decir, si $|a_j - K| < |a_i - K|$.

Para cada jugador $i$ de la fila, el director quiere armar el **lote más grande posible** de "rivales más fáciles" eligiendo solamente entre los jugadores que están **detrás** de $i$ (índice $j > i$). Puede elegir el valor de $K$ libremente para cada jugador (es decir, optimiza $K$ por separado para cada $i$).

# Problema

Para cada jugador $i$, calcula el tamaño máximo del lote de rivales más fáciles que el director puede armar, considerando **todos los valores enteros posibles** de $K$.

Formalmente, para cada $i$ debes calcular:

$$\max_{K \in \mathbb{Z}} \; \big| \, \{ j : j > i \text{ y } |a_j - K| < |a_i - K| \} \, \big|$$

# Entrada

En la primera línea, un entero $N$, la cantidad de jugadores.

En la segunda línea, $N$ enteros $a_1, a_2, \ldots, a_N$ separados por espacios.

# Salida

En una sola línea, $N$ enteros separados por espacios: el tamaño máximo del lote para cada jugador, en orden de $1$ a $N$.

# Ejemplos

||input
1
1092
||output
0
||description
Solo hay un jugador, así que no hay nadie a quien comparar.
||input
2
105 -105
||output
1 0
||description
Para el jugador $1$ con rating $105$: el director puede elegir $K = -105$, entonces $|105 - (-105)| = 210$ y $|(-105) - (-105)| = 0$. El jugador $2$ está más cerca de $K$, así que el lote tiene tamaño $1$. Para el jugador $2$ no hay nadie detrás.
||input
5
1 2 93 84 2
||output
4 2 2 1 0
||description
Para el jugador $1$ con rating $1$: si el director elige $K = 1000000000$, los $4$ jugadores posteriores tienen ratings $2, 93, 84, 2$, todos más cercanos a $K$ que el rating $1$. Lote de tamaño $4$.
||end

# Limites

- $1 \leq N \leq 5000$
- $-10^9 \leq a_i \leq 10^9$

**Para un 50% de los casos**

- $1 \leq N \leq 10$
- $1 \leq a_i \leq 10$
