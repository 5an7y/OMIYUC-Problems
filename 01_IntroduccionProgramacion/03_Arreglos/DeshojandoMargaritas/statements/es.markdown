# Historia

Marina quiere saber si Sasha la ama. Para averiguarlo recurre al juego de las margaritas: **deshoja una flor pétalo por pétalo** y por cada pétalo dice "**me ama**" o "**no me ama**", alternándolas y empezando siempre con "**me ama**". El veredicto final es lo que diga al deshojar el **último** pétalo.

Marina puede hacer un **ramo** combinando varias margaritas y deshojarlas todas seguidas (es como si tuviera una sola flor con la suma de los pétalos del ramo).

En el campo hay $N$ margaritas con $a_1, a_2, \ldots, a_N$ pétalos respectivamente. Marina quiere armar un ramo con la **mayor cantidad de pétalos posible** y que el veredicto al final sea "**me ama**".

# Problema

Encuentra el número **máximo** de pétalos que puede tener el ramo de Marina para que, al deshojarlo, termine en "**me ama**". Si no es posible armar ningún ramo así, imprime $0$.

Observa que el ramo puede tener una sola margarita.

# Entrada

En la primera línea, un entero $N$, la cantidad de margaritas en el campo.

En la segunda línea, $N$ enteros $a_1, a_2, \ldots, a_N$ separados por espacios.

# Salida

Un único entero: el máximo número de pétalos en el ramo, o $0$ si es imposible.

# Ejemplos

||input
1
1
||output
1
||description
Una margarita con $1$ pétalo. Al deshojarla, Marina dice "me ama" y ahí termina. Ramo válido.
||input
1
2
||output
0
||description
Una margarita con $2$ pétalos. "Me ama", "no me ama". Termina en "no me ama". Y no hay otra opción.
||input
3
5 6 7
||output
13
||description
El ramo con las margaritas de $6$ y $7$ pétalos suma $13$ pétalos, que es impar, así que termina en "me ama".
||end

# Limites

- $1 \leq N \leq 100$
- $1 \leq a_i \leq 100$

**Para un 50% de los casos**

- Todos los $a_i = 1$ (todas las margaritas tienen exactamente un pétalo).
