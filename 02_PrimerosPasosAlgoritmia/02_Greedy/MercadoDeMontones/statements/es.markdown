# Historia

Don Eligio cosechó $N$ tomates de su huerta en Hocabá y los acomodó en una banda transportadora en cierto orden. Tiene que empacarlos **todos**, pero la empresa que le compra le impuso una regla curiosa para los empaques.

Un empaque toma una **subsecuencia** de los tomates que aún estén en la banda. Una subsecuencia es un grupo de posiciones $i_1 < i_2 < \cdots < i_k$ (no necesariamente vecinas) de la banda actual. El empaque es válido **si y solo si** los pesos de la subsecuencia ya están en orden **no-decreciente**:

$$a_{i_1} \leq a_{i_2} \leq \cdots \leq a_{i_k}$$

El costo del empaque es el **producto** de esos pesos:

$$\text{costo} = a_{i_1} \cdot a_{i_2} \cdot \ldots \cdot a_{i_k}$$

Don Eligio puede hacer cuantos empaques quiera; al final del día todos los tomates deben estar empacados. Quiere gastar lo menos posible en costos totales.

# Problema

Dada la secuencia de pesos de los tomates, determina el **costo mínimo total** para empacarlos a todos.

# Entrada

En la primera línea, un entero $N$, la cantidad de tomates.

En la segunda línea, $N$ enteros $a_1, a_2, \ldots, a_N$ separados por espacios: los pesos en el orden en que están en la banda.

# Salida

Un único entero: el costo mínimo total.

# Ejemplos

||input
5
1 2 1 2 3
||output
7
||description
Empaque 1: tomates en posiciones 1, 3 y 5 con pesos 1, 1, 3 (no-decreciente) → costo $1 \cdot 1 \cdot 3 = 3$.
Empaque 2: tomates en posiciones 2 y 4 con pesos 2, 2 → costo $2 \cdot 2 = 4$.
Total: $3 + 4 = 7$.
||input
4
1 1 1 1
||output
1
||description
Todos los tomates en un solo empaque: $1 \cdot 1 \cdot 1 \cdot 1 = 1$.
||end

# Limites

- $1 \leq N \leq 100$
- $1 \leq a_i \leq 100$

**Para un 50% de los casos**

- Todos los $a_i$ son iguales.
