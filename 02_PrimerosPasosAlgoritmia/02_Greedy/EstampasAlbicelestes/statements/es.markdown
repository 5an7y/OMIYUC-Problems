# Historia

Argentina llegó al Mundial 2026 como **campeón vigente** y la fiebre del álbum oficial se desató en todo el continente. El álbum tiene $2N$ estampas: una por cada uno de los $N$ jugadores de la albiceleste, y **cada jugador aparece en exactamente $2$ estampas distintas**.

Mateo se gastó toda su mesada en un sobre gigante y, justo cuando lo iba a abrir, su perro le tiró las $2N$ estampas sobre la mesa y se revolvieron todas. Mateo tiene una memoria un poco rara y siempre las despega usando el mismo **algoritmo**:

> En cada **vuelta**, Mateo voltea exactamente dos estampas. Si las dos son del mismo jugador, las pega en el álbum (se las quita de la mesa). Si son de jugadores distintos, las regresa a su lugar boca abajo.

A Mateo no le sale voltear las dos al mismo tiempo, así que **primero ve la primera y después decide cuál tomar de segunda**. Su estrategia exacta en cada vuelta es:

1. Si entre las estampas que ya volteó alguna vez hay **dos de su memoria que son del mismo jugador**, las voltea esa vuelta (se las pega).

2. Si no, voltea **la primera estampa de la fila que nunca antes haya volteado** y mira de qué jugador es. Llamemos a ese jugador $x$.

   a. Si Mateo se acuerda de **otra estampa volteada antes que también era de $x$**, voltea esa (se las pega).

   b. Si no se acuerda de ninguna, voltea **la primera estampa de la fila que no haya volteado todavía** (contando como volteada la del inciso 2). Si por casualidad esa también es de $x$, se las pega.

El abuelo de Mateo dice que cierto número $K$ es **mágico**: si el álbum se llena en exactamente $K$ vueltas, Argentina vuelve a salir campeón. Tu trabajo es decirle a Mateo cómo acomodar las $2N$ estampas en fila (boca abajo) **al principio** para que su algoritmo tarde **exactamente $K$ vueltas**.

# Problema

Te dan $N$ y $K$. Construye una fila $a_1, a_2, \ldots, a_{2N}$ con $1 \leq a_i \leq N$ tal que cada valor de $1$ a $N$ aparezca **exactamente dos veces**, y que el algoritmo descrito arriba, aplicado a esa fila, termine en **exactamente $K$ vueltas**.

Si no existe ninguna fila válida, repórtalo.

Para que no haya ambigüedad: "la primera estampa" en las reglas siempre se refiere a **la posición con índice más chico** que cumpla la condición.

# Entrada

Una línea con dos enteros $N$ y $K$.

# Salida

Si existe una fila válida, imprime "YES" en la primera línea y luego los $2N$ valores $a_1, a_2, \ldots, a_{2N}$ en la segunda línea, separados por espacios.

Si no, imprime "NO" en una única línea.

Si hay varias filas válidas, imprime cualquiera.

# Ejemplos

||input
2 3
||output
YES
2 1 2 1
||description
$N = 2$, $K = 3$. Una fila válida es $[2, 1, 2, 1]$.

- Vuelta $1$: voltea pos $1$ ($=2$), voltea pos $2$ ($=1$). Distintos, las regresa. (Mateo recuerda: $2$ en pos $1$, $1$ en pos $2$.)
- Vuelta $2$: no hay dos recordadas iguales. Voltea pos $3$ ($=2$). Sí recuerda otro $2$ (en pos $1$): voltea pos $1$ y se las pega.
- Vuelta $3$: voltea pos $4$ ($=1$). Recuerda otro $1$ (en pos $2$): pega ambas. Listo.
||end

||input
3 4
||output
YES
1 3 2 2 1 3
||end

||input
3 2
||output
NO
||end

||input
6 10
||output
YES
2 1 3 4 5 4 1 2 6 5 6 3
||end

# Limites

- $1 \leq N \leq 3 \cdot 10^5$
- $1 \leq K \leq 10^6$

**Para un 50% de los casos**

- $K < 1.5 \cdot N$
