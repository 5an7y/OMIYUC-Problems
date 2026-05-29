# Historia

¡Llegaste a una **convención de anime**! Para el panel principal hay $N$ sillas numeradas $1, 2, \ldots, N$ alineadas en una fila. Quieres tomarte una foto en cada silla en la que te sientes (para tus stories), así que vas a recorrer la fila silla por silla, en orden, desde la $1$ hasta la $N$.

El problema es que cargas una **mochila enorme** llena de accesorios de cosplay. Te dieron una lista de números $p_1, p_2, \ldots, p_N$ (una permutación de $1$ a $N$) que cumple algo curioso: si te sientas en la silla $i$, al pararte tu mochila queda en la silla $p_i$.

Las reglas del recorrido son:

1. Empiezas en la silla $1$ y avanzas en orden.
2. Al llegar a la silla $i$:
   - Si la silla **ya tiene una mochila tuya**, no te puedes sentar, te das la vuelta y el recorrido termina.
   - Si la silla está libre, decides **sentarte** (cuenta $+1$ y dejas tu mochila en la silla $p_i$) o **saltarla** (no cuenta).
3. Después avanzas a la silla $i+1$, si existe.
4. Cuando ya visitaste la silla $N$, el recorrido termina.

# Problema

Encuentra el **número máximo** de veces que puedes sentarte durante todo el recorrido.

# Entrada

En la primera línea, un entero $N$, la cantidad de sillas.

En la segunda línea, $N$ enteros distintos $p_1, p_2, \ldots, p_N$ con $1 \leq p_i \leq N$ (una permutación de $1$ a $N$).

# Salida

Un único entero: el máximo número de veces que puedes sentarte.

# Ejemplos

||input
3
3 2 1
||output
2
||description
Una jugada óptima: te sientas en la silla 1 (mochila va a la 3), saltas la silla 2, llegas a la silla 3 que ya tiene mochila → terminas. Sentadas = 1. ¡Pero hay mejor!: saltas la silla 1, te sientas en la 2 (mochila a 2), te sientas en la 3 (mochila a 1) → terminas. Sentadas = 2.
||input
4
4 2 1 3
||output
3
||input
4
2 3 4 1
||output
1
||end

# Limites

- $1 \leq N \leq 10^5$
- $p_1, p_2, \ldots, p_N$ es una permutación de $1$ a $N$.

**Para un 50% de los casos**

- $1 \leq N \leq 100$
