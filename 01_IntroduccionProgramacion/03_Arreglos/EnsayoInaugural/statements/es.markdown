# Historia

Falta una semana para el **Mundial 2026** y México va a inaugurar. El show de apertura se va a transmitir en vivo desde el Estadio Azteca, y la directora artística está vuelta loca: el espectáculo tiene $N$ **bloques** distintos (una intro con mariachi, una coreografía azteca, un homenaje a las leyendas del fútbol, etc.), y cada bloque tiene su propia lista de canciones que sonarán en orden.

Como buena directora, la señora ensaya cada bloque **una y otra vez** antes de soltarlo: el bloque $1$ se ensaya $C_1$ veces seguidas, luego se pasa al bloque $2$ que se ensaya $C_2$ veces, y así hasta el bloque $N$. Solo entonces va al baño.

A las $3$ de la mañana, un asistente con cara de zombi entra al backstage y pregunta:

> "Llevamos $K$ canciones ensayadas en total... ¿qué canción está sonando en este momento?"

Tu trabajo es contestarle antes de que la directora se entere.

# Problema

Hay $N$ bloques. El bloque $i$ tiene $L_i$ canciones, que suenan en el orden $A_{i,1}, A_{i,2}, \ldots, A_{i,L_i}$ (cada $A_{i,j}$ es el identificador de la canción).

El ensayo procede así:

1. Se ensaya el bloque $1$ completo (en orden), $C_1$ veces seguidas. Luego se pasa al bloque $2$.
2. Se ensaya el bloque $2$ completo, $C_2$ veces. Luego al bloque $3$.
3. ...y así hasta el bloque $N$.

Si numeramos $1, 2, 3, \ldots$ a **todas** las canciones que van sonando en orden (contando repeticiones), dime el identificador de la canción número $K$.

# Entrada

La primera línea contiene dos enteros $N$ y $K$.

La segunda línea contiene $N$ enteros $C_1, C_2, \ldots, C_N$.

Las siguientes $N$ líneas describen los bloques. La línea $i$-ésima (de esas) empieza con $L_i$, seguido de los $L_i$ identificadores $A_{i,1}, A_{i,2}, \ldots, A_{i,L_i}$.

# Salida

Imprime un solo entero: el identificador de la canción número $K$.

# Ejemplos

||input
3 9
1 3 2
3 1 3 2
1 3
2 4 3
||output
4
||description
Los tres bloques son: bloque 1 con canciones $[1, 3, 2]$, bloque 2 con $[3]$, bloque 3 con $[4, 3]$. Las repeticiones son $C = (1, 3, 2)$. La directora ensaya en orden: bloque 1 una vez → $[1, 3, 2]$; bloque 2 tres veces → $[3, 3, 3]$; bloque 3 dos veces → $[4, 3, 4, 3]$. La lista completa es $[1, 3, 2, 3, 3, 3, 4, 3, 4, 3]$. La canción en posición $9$ es $4$.
||end

||input
3 1
1 100 10000
1 7
1 111
1 5
||output
7
||description
La primera canción que se ensaya es la única del bloque $1$, con identificador $7$.
||end

||input
3 3163812
87043 908415 9814
5 1 2 3 4 5
4 9 8 7 6
2 10 11
||output
9
||end

# Limites

- $1 \leq N$
- $1 \leq L_i$ y $\displaystyle \sum_{i=1}^{N} L_i \leq 2 \cdot 10^5$
- $1 \leq A_{i,j} \leq 10^9$
- $1 \leq C_i \leq 10^9$
- $1 \leq K \leq \displaystyle \sum_{i=1}^{N} C_i \cdot L_i$

**Para un 50% de los casos**

- Todos los $C_i = 1$ (es decir, cada bloque se ensaya exactamente una vez).
