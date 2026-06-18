# Historia

En el **Mundial 2026**, **Brasil** llegó con todos los reflectores encima: cinco copas, el ataque más temido del torneo, los pronósticos los ponían como favoritos para llevarse el grupo sin despeinarse. Del otro lado del campo: **Marruecos**, una selección de la que casi nadie hablaba.

El partido terminó en **empate sin goles**. Brasil disparó, encaró, organizó jugada tras jugada... y Marruecos cortó **todo** con una defensa que se sintió como un muro. El analista táctico de Marruecos quiere entender cuántas de las jugadas peligrosas de Brasil pudo neutralizar idealmente con la plantilla disponible.

# Problema

Brasil ejecutó $M$ **jugadas ofensivas** durante el partido. La jugada $j$ tiene un nivel de peligro $B_j$ (un número que estima qué tan complicada era de detener).

Marruecos tiene $N$ **defensas** disponibles. El defensa $i$ tiene una capacidad de marcaje $A_i$.

Un defensa con capacidad $A_i$ logra **neutralizar** una jugada de peligro $B_j$ si:

$$B_j \leq 2 \cdot A_i$$

(es decir, el defensa aguanta jugadas hasta el doble de su capacidad antes de ser superado). Cada defensa solo puede neutralizar **a lo más una jugada**, y cada jugada solo puede ser neutralizada **a lo más una vez**.

Te dan ambas listas **ya ordenadas de menor a mayor**. Encuentra el número **máximo** de jugadas que Marruecos puede neutralizar.

# Entrada

La primera línea contiene dos enteros $N$ y $M$.

La segunda línea contiene $N$ enteros $A_1, A_2, \ldots, A_N$ en orden no decreciente (capacidades de los defensas).

La tercera línea contiene $M$ enteros $B_1, B_2, \ldots, B_M$ en orden no decreciente (niveles de peligro de las jugadas).

# Salida

Imprime un solo entero: el número máximo de jugadas neutralizadas.

# Ejemplos

||input
4 5
1 2 4 8
2 3 9 9 14
||output
3
||description
Las capacidades son $(1, 2, 4, 8)$ y los peligros $(2, 3, 9, 9, 14)$. Una forma de neutralizar $3$ jugadas: defensa $1$ contra la jugada de peligro $2$ (válido, $2 \leq 2 \cdot 1$), defensa $2$ contra la jugada de peligro $3$ ($3 \leq 2 \cdot 2$), defensa $8$ contra una jugada de peligro $9$ ($9 \leq 2 \cdot 8$). Sobran el defensa $4$ (no aguanta ninguna de las jugadas restantes $9$, $9$, $14$) y dos jugadas. No se pueden neutralizar $4$.
||end

||input
3 3
3 5 5
11 1000 1000
||output
0
||description
La capacidad máxima de un defensa es $5$, y como $2 \cdot 5 = 10 < 11$, ninguna jugada se puede neutralizar. Marruecos queda anulado.
||end

||input
8 7
2 2 3 3 3 4 4 4
1 5 5 7 8 9 9
||output
5
||end

# Limites

- $1 \leq N, M \leq 2 \cdot 10^5$
- $1 \leq A_i, B_j \leq 10^9$
- $A_1 \leq A_2 \leq \cdots \leq A_N$
- $B_1 \leq B_2 \leq \cdots \leq B_M$

**Para un 50% de los casos**

- $1 \leq N, M \leq 100$
