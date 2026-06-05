# Problema

Se te dan tres enteros positivos $l$, $r$ y $d$. Encuentra el **mínimo entero positivo** $x$ que cumpla **las dos** condiciones siguientes:

- $x$ es **divisible** por $d$.
- $x$ **no** pertenece al intervalo $[l, r]$ (es decir, $x < l$ o $x > r$).

# Entrada

Una única línea con tres enteros $l$, $r$ y $d$ separados por espacios.

# Salida

Un único entero: el mínimo $x$ que cumple las dos condiciones.

# Ejemplos

||input
2 4 2
||output
6
||description
Los múltiplos positivos de $2$ son $2, 4, 6, 8, \ldots$. Los primeros dos ($2$ y $4$) están dentro de $[2, 4]$. El primero fuera del intervalo es $6$.
||input
5 10 4
||output
4
||description
$4$ es divisible por $4$ y no está en $[5, 10]$ (porque $4 < 5$), así que $x = 4$.
||input
3 10 1
||output
1
||end

# Limites

- $1 \leq l \leq r \leq 10^{15}$
- $1 \leq d \leq 10^{15}$

**Para un 50% de los casos**

- $1 \leq l \leq r \leq 10^4$
- $1 \leq d \leq 10^4$
