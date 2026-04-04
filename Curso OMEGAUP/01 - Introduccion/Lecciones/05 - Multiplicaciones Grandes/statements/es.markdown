*Este problema es una* ***lección*** *diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.*

# Problema

Dados dos números enteros $A$ y $B$, imprime el resultado de multiplicarlos.

# Entrada

Dos enteros $A$ y $B$ en la misma línea separados por un espacio.

# Salida

Un entero con el resultado de $A \times B$.

# Ejemplos

||input
3 4
||output
12
||description
$3 \times 4 = 12$.
||input
100000 100000
||output
10000000000
||description
$100000 \times 100000 = 10{,}000{,}000{,}000$. Este resultado no cabe en un `int` (que llega solo hasta $\approx 2 \times 10^9$). ¿Qué tipo de variable necesitas usar?
||input
1 1
||output
1
||end

# Limites

- $1 \leq A, B \leq 100{,}000$
