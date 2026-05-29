# Historia

¡Llegaste a una **convención de anime**! La organización tiene un **rally de sellos**: hay $N$ stands numerados $1, 2, \ldots, N$ alineados en fila y tú llevas una libreta para coleccionar sellos en orden. Cada sello en tu libreta cuenta $+1$.

El rally tiene una regla extraña, escrita en una lista $p_1, p_2, \ldots, p_N$ (una permutación de $1$ a $N$) que te dieron al entrar:

> Cada vez que pidas un sello en el stand $i$, la organización registra en su sistema que el stand $p_i$ queda **cerrado para ti** (no podrás sellarte ahí).

Vas a recorrer los stands del $1$ al $N$, en orden. Al llegar al stand $i$:

- Si el stand ya aparece **cerrado para ti** en el sistema, el encargado te pide salir del rally y tu recorrido termina.
- Si no aparece cerrado, decides: **pedir el sello** (suma $+1$ y el sistema cierra para ti el stand $p_i$) o **pasar de largo** sin sellar.

Si llegas hasta el stand $N$ sin que te detengan, tu recorrido también termina.

# Problema

Encuentra el **número máximo de sellos** que puedes coleccionar en todo el recorrido.

# Entrada

En la primera línea, un entero $N$, la cantidad de stands.

En la segunda línea, $N$ enteros distintos $p_1, p_2, \ldots, p_N$ con $1 \leq p_i \leq N$ (una permutación de $1$ a $N$).

# Salida

Un único entero: el máximo número de sellos que puedes coleccionar.

# Ejemplos

||input
3
3 2 1
||output
2
||description
Pasas de largo el stand 1. Sellas en el 2: suma $+1$ y se cierra para ti el stand $p_2 = 2$ (el mismo donde acabas de sellar). Sellas en el 3: suma $+1$ y se cierra el stand $p_3 = 1$. Llegaste al final con 2 sellos.
||input
4
4 2 1 3
||output
3
||description
Sellas en el 1: se cierra el stand 4. Sellas en el 2: se cierra el 2 (el mismo). Sellas en el 3: se cierra el 1. Llegas al stand 4 y ya está cerrado para ti → recorrido termina con 3 sellos.
||input
4
2 3 4 1
||output
1
||description
Si sellas en el 1, se cierra el 2 y al llegar ahí termina (solo 1 sello). Si pasas de largo y sellas en el 2, se cierra el 3 y termina (solo 1). Cualquier elección lleva a 1 sello: es lo máximo posible.
||end

# Limites

- $1 \leq N \leq 10^5$
- $p_1, p_2, \ldots, p_N$ es una permutación de $1$ a $N$.

**Para un 50% de los casos**

- $1 \leq N \leq 100$
