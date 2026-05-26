# Historia

En el restaurante "Tres por Mesa", junto al cenote de Cuzamá, los comensales se sientan en mesas redondas con espacio para exactamente 3 personas. Esta tarde llegarán $3N$ comensales con edades $1, 2, 3, \ldots, 3N$ (todas distintas).

Antes de pasar a las mesas, los meseros los forman en una **fila única**. Luego los acomodan en bloques contiguos: los primeros 3 de la fila van a la mesa 1, los siguientes 3 a la mesa 2, y así sucesivamente hasta llenar las $N$ mesas.

Doña Cuca, la dueña, escribe en su libreta la edad **de en medio** de cada mesa (la mediana de las 3 edades). Quiere que la **suma** de las edades anotadas sea lo MAYOR posible. Para lograrlo puede decidir el orden en que los $3N$ comensales se forman.

# Problema

Numera las mesas como $1, 2, \ldots, N$. Sean $m_1, m_2, \ldots, m_N$ las medianas (la edad del segundo más joven de cada mesa). Dado $N$, encuentra el valor **máximo** posible de

$$m_1 + m_2 + \cdots + m_N$$

eligiendo el orden óptimo de los $3N$ comensales en la fila.

# Entrada

Un único entero $N$, el número de mesas.

# Salida

Un único entero: la suma máxima de medianas.

# Ejemplos

||input
1
||output
2
||description
Solo una mesa con los comensales de edades 1, 2, 3. Sin importar el orden, la mediana siempre es 2.
||input
5
||output
50
||input
21
||output
882
||end

# Limites

- $1 \leq N \leq 10^9$

**Para un 50% de los casos**

- $1 \leq N \leq 10$
