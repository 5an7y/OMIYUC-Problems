# Historia

En un **torneo de videojuegos**, $N$ jugadores llegaron uno por uno y se sentaron en el orden en que fueron llegando. Cada jugador tiene un número de **miedo** $a_i$ (puede ser positivo, negativo o cero) que mide cuánto le asusta cierto tipo de monstruo.

El torneo se desarrolla **por rondas**. La **ronda de $i$** la juegan **todos los jugadores con índice $\geq i$** (es decir, el jugador $i$ y todos los que llegaron después de él).

Al inicio de la ronda de $i$, **el jugador $i$ elige un tipo de monstruo** $K$ ($K$ puede ser cualquier número entero, incluso negativo). Luego, **todos los jugadores de esa ronda se enfrentan al mismo monstruo**.

La **valentía** de un jugador con miedo $a$ frente a un monstruo de tipo $K$ se define como:

$$\text{valentía} = |a - K|$$

(qué tan lejos está su nivel de miedo del tipo del monstruo).

> Entre **mayor** sea la valentía de un jugador frente al monstruo, **menos tiempo** tarda en destruirlo.

Al terminar la ronda, cada jugador gana **puntos** iguales a la cantidad de jugadores de su ronda que **derrotaron al monstruo DESPUÉS que él**. Si dos jugadores tienen exactamente la misma valentía, derrotan al monstruo al mismo tiempo (no se suman puntos entre ellos).

**Ejemplo de una ronda**: supongamos que participan jugadores con miedos $\{4, 9, 15\}$ y se enfrentan a un monstruo de tipo $K = 11$. Las valentías son:

- $|4 - 11| = 7$
- $|9 - 11| = 2$
- $|15 - 11| = 4$

Como mayor valentía $\Rightarrow$ derrota más rápido, el orden de derrota es: primero el de miedo $4$ (valentía $7$), después el de miedo $15$ (valentía $4$) y al final el de miedo $9$ (valentía $2$). Por tanto, en esta ronda:

- El de miedo $4$ gana **$2$ puntos** (los otros dos derrotan después).
- El de miedo $15$ gana **$1$ punto**.
- El de miedo $9$ gana **$0$ puntos**.

# Problema

En la ronda de $i$, el jugador $i$ es quien elige al monstruo y quiere maximizar **sus propios puntos** en esa ronda. Para cada $i$ entre $1$ y $N$, determina la **cantidad máxima de puntos** que el jugador $i$ puede obtener en su ronda, eligiendo $K$ de la forma más conveniente.

# Entrada

En la primera línea, un entero $N$, la cantidad de jugadores.

En la segunda línea, $N$ enteros $a_1, a_2, \ldots, a_N$ separados por espacios.

# Salida

En una sola línea, $N$ enteros separados por espacios: para cada $i$ (en orden de $1$ a $N$), la cantidad máxima de puntos que el jugador $i$ puede obtener en su ronda.

# Ejemplos

||input
1
1092
||output
0
||description
En la ronda del único jugador solo participa él, así que no hay nadie que pueda derrotar al monstruo después que él.
||input
2
105 -105
||output
1 0
||description
Para el jugador $1$ (miedo $105$): si elige $K = -105$, su valentía es $|105 - (-105)| = 210$ y la del jugador $2$ es $|-105 - (-105)| = 0$. El jugador $1$ tiene mayor valentía, así que derrota al monstruo primero; el jugador $2$ derrota después. Total: $1$ punto.
||input
5
1 2 93 84 2
||output
4 2 2 1 0
||end

# Limites

- $1 \leq N \leq 5000$
- $-10^8 \leq a_i \leq 10^8$

**Para un 50% de los casos**

- $1 \leq N \leq 20$
- $-10 \leq a_i \leq 10$
