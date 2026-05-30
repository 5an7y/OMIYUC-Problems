# Historia

En una avenida muy larga hay $N$ casas alineadas, numeradas $0, 1, 2, \ldots, N-1$ de izquierda a derecha. Cada casa tiene un número entero pintado en la fachada (algo del catastro).

Las casas que tienen pintado el número $\mathbf{0}$ son **paradas de autobús** oficiales. Los vecinos quieren saber: para cada casa de la avenida, ¿qué tan lejos está la parada de autobús **más cercana**?

La **distancia** entre la casa $i$ y la casa $j$ es $|i - j|$ (cuántas casas hay que recorrer para ir de una a la otra).

# Problema

Para cada casa $i$ desde $0$ hasta $N - 1$, calcula la distancia a la parada de autobús más cercana.

# Entrada

En la primera línea, un entero $N$, la cantidad de casas.

En la segunda línea, $N$ enteros $a_0, a_1, \ldots, a_{N-1}$ separados por espacios: el número pintado en cada casa. Se garantiza que **al menos una** casa tiene el número $0$.

# Salida

En una sola línea, $N$ enteros separados por espacios: la distancia de cada casa a la parada de autobús más cercana, en orden de izquierda a derecha.

# Ejemplos

||input
9
2 1 0 3 0 0 3 2 4
||output
2 1 0 1 0 0 1 2 3
||description
Las casas $2$, $4$ y $5$ son paradas (tienen un $0$). Por ejemplo, la casa $0$ está a distancia $2$ de la parada más cercana (la casa $2$). La casa $8$ está a distancia $3$ (de la casa $5$).
||input
5
0 1 2 3 4
||output
0 1 2 3 4
||input
7
5 6 0 1 -2 3 4
||output
2 1 0 1 2 3 4
||end

# Limites

- $1 \leq N \leq 2 \cdot 10^5$
- $-10^9 \leq a_i \leq 10^9$
- Se garantiza al menos un valor igual a $0$ en el arreglo.

**Para un 50% de los casos**

- $1 \leq N \leq 100$
