# Historia

Esperanza tiene vacaciones de verano y decidió que va a hacer una maratón épica con sus $N$ series favoritas. Las va a ver **en orden**: primero termina la serie $1$, luego la $2$, luego la $3$, y así hasta la $N$.

Para empeorarlo (¿o mejorarlo?), Esperanza es un poco obsesiva: en cuanto termina de ver una serie, **la repite desde el principio** un número específico de veces antes de pasarse a la siguiente. Cada serie tiene su propio "número de relecturas" $C_i$, que ella decidió de antemano.

Su mamá entra al cuarto a las $3$ de la mañana, ve a Esperanza con los ojos rojos y le pregunta:

> "Ya llevas $K$ episodios vistos... ¿qué episodio estás viendo en este momento?"

Esperanza no se acuerda. Tu trabajo es decírselo.

# Problema

Tienes $N$ series. La serie $i$ tiene $L_i$ episodios, y los episodios de esa serie aparecen en el orden $A_{i,1}, A_{i,2}, \ldots, A_{i,L_i}$ (cada $A_{i,j}$ es el identificador del episodio).

Esperanza ve las series en este orden:

1. Ve la serie $1$ completa (en orden), y al terminar la repite hasta haberla visto $C_1$ veces en total. Luego pasa a la serie $2$.
2. Ve la serie $2$ completa, la repite hasta verla $C_2$ veces. Luego pasa a la serie $3$.
3. ...y así hasta la serie $N$.

Si numeramos $1, 2, 3, \ldots$ a **todos** los episodios que ella va viendo en orden (contando repeticiones), tu tarea es decir cuál es el identificador del episodio número $K$.

# Entrada

La primera línea contiene dos enteros $N$ y $K$.

Las siguientes $N$ líneas describen las series. La línea $i$-ésima (de esas) empieza con $L_i$, seguido de los $L_i$ identificadores $A_{i,1}, A_{i,2}, \ldots, A_{i,L_i}$.

La última línea contiene $N$ enteros $C_1, C_2, \ldots, C_N$.

# Salida

Imprime un solo entero: el identificador del episodio número $K$.

# Ejemplos

||input
3 9
3 1 3 2
1 3
2 4 3
1 3 2
||output
4
||description
Las tres series son: serie 1 con episodios $[1, 3, 2]$, serie 2 con $[3]$, serie 3 con $[4, 3]$. Las relecturas son $C = (1, 3, 2)$. Entonces Esperanza ve, en orden: la serie 1 una vez → $[1, 3, 2]$; la serie 2 tres veces → $[3, 3, 3]$; la serie 3 dos veces → $[4, 3, 4, 3]$. La lista completa es $[1, 3, 2, 3, 3, 3, 4, 3, 4, 3]$. El episodio en posición $9$ es $4$.
||end

||input
3 1
1 7
1 111
1 5
1 100 10000
||output
7
||description
El primer episodio que Esperanza ve es el único episodio de la serie 1, que tiene identificador $7$.
||end

||input
3 3163812
5 1 2 3 4 5
4 9 8 7 6
2 10 11
87043 908415 9814
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

- Todos los $C_i = 1$ (es decir, Esperanza ve cada serie exactamente una vez).
