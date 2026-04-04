# Problema

Se te dan una opción y dos números enteros $a$ y $b$. Dependiendo de la opción, calcula lo siguiente:

1. El mayor entre $a$ y $b$.
2. El menor entre $a$ y $b$.
3. El menor entre $a + b$ y $a - b$.
4. El mayor entre $a + b$ y $a - b$.

# Entrada

Tres enteros en una sola línea: la opción $O$, y los números $a$ y $b$.

# Salida

Un entero: el resultado según la opción elegida.

# Ejemplos

||input
1 4 3
||output
4
||description
Opción 1: mayor entre 4 y 3 → 4.
||input
2 4 3
||output
3
||input
3 4 3
||output
1
||description
Opción 3: menor entre 4+3=7 y 4-3=1 → 1.
||input
4 4 3
||output
7
||end

# Limites

- $0 \leq |a|, |b| \leq 10^5$
- $1 \leq O \leq 4$
