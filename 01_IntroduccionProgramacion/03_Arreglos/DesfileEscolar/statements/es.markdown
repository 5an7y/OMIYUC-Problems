# Historia

Mañana es el **desfile escolar**. La escuela formó a sus estudiantes en $N$ **columnas**. La columna $i$ tiene $l_i$ estudiantes que empezarán a marchar con el **pie izquierdo** y $r_i$ estudiantes que empezarán con el **pie derecho**.

La maestra de Educación Física quiere que el desfile se vea **coordinado**, es decir, que la mayor cantidad de estudiantes empiecen con el **mismo pie**. La **belleza** del desfile se calcula así: si $L$ es el total de estudiantes que empiezan con el pie izquierdo y $R$ es el total que empiezan con el derecho, entonces

$$\text{belleza} = |L - R|$$

(la maestra quiere **maximizar** esa diferencia: que la mayoría empiece con el mismo pie).

La maestra puede hacer **a lo más una corrección**: elegir **una sola columna** y voltear sus pies (los que empezaban con izquierdo ahora empiezan con derecho, y viceversa). Es decir, en esa columna intercambia los valores de $l_i$ y $r_i$.

# Problema

Encuentra el **índice** de la columna que la maestra debe corregir para que la belleza del desfile sea **máxima**. Si la belleza actual ya es la máxima posible (ninguna corrección la mejora), imprime $0$. Las columnas se numeran de $1$ a $N$.

Si hay varias respuestas válidas, imprime cualquiera.

# Entrada

En la primera línea, un entero $N$, el número de columnas.

En las siguientes $N$ líneas, dos enteros $l_i$ y $r_i$ separados por un espacio.

# Salida

Un único entero: el índice $k$ (entre $1$ y $N$) de la columna a corregir, o $0$ si ninguna corrección mejora la belleza.

# Ejemplos

||input
3
5 6
8 9
10 3
||output
3
||description
Sin corregir: $L = 5 + 8 + 10 = 23$, $R = 6 + 9 + 3 = 18$, belleza $= 5$.
Si voltea la columna $3$: nueva columna queda $(3, 10)$, $L = 5 + 8 + 3 = 16$, $R = 6 + 9 + 10 = 25$, belleza $= 9$. Mejora.
||input
2
6 5
5 6
||output
1
||input
6
5 9
1 3
4 8
4 5
23 54
12 32
||output
0
||description
Sin corregir: $L = 49$, $R = 111$, belleza $= 62$. Ninguna corrección puede mejorar esa cifra.
||end

# Limites

- $1 \leq N \leq 10^5$
- $0 \leq l_i, r_i \leq 500$

**Para un 50% de los casos**

- En cada columna, $l_i = 0$ o $r_i = 0$ (todos los estudiantes de la columna empiezan con el mismo pie).
