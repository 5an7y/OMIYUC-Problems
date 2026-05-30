# Historia

Hace años, un amigo nuestro **construyó** un mensaje siguiendo un proceso muy curioso:

1. Empezó con una cadena $T$ de longitud $N$ que iba alternando `a` y `b`: $T_1 = a$, $T_2 = b$, $T_3 = a$, ..., así sucesivamente.
2. Inicializó su mensaje $S$ como una cadena vacía.
3. Mientras $T$ no estaba vacía: tomaba **una** letra (la primera o la última de $T$, **a su elección**), la agregaba al final de $S$, y la quitaba de $T$.
4. Cuando $T$ quedaba vacía, terminaba con su mensaje $S$.

El amigo guardó $S$ escrito en un papel y se olvidó. Años después encontró el papel, pero el tiempo lo desgastó: **algunas letras se borraron** y aparecen como `?`. Además sospecha que alguien pudo cambiar otras letras a propósito.

# Problema

Te dan la cadena desgastada $X$ de longitud $N$ formada por `a`, `b` y `?`. Determina si existe alguna cadena $A$ de longitud $N$ (formada solo por `a` y `b`) tal que:

- $A_i = X_i$ para toda posición $i$ donde $X_i \neq$ `?` (las letras que aún se leen no se pueden cambiar).
- $A$ **se pueda construir** con el proceso descrito arriba.

# Entrada

En la primera línea, un entero $N$, la longitud de la cadena.

En la segunda línea, la cadena $X$ de longitud $N$ formada solo por los caracteres `a`, `b` y `?`.

# Salida

Imprime `SI` si existe alguna cadena $A$ válida; `NO` en caso contrario.

# Ejemplos

||input
5
ababa
||output
SI
||description
$T = $ `ababa`. Tomas siempre la **primera** letra de $T$ y la agregas a $S$. Al final $S = $ `ababa`.
||input
5
baaba
||output
NO
||input
5
?b?ab
||output
SI
||description
Una posible reconstrucción: $A = $ `ababa`, que coincide en las posiciones $2$, $4$, $5$ con `?b?ab`.
||input
6
aa?b?b
||output
NO
||end

# Limites

- $1 \leq N \leq 2 \cdot 10^5$
- $X$ contiene únicamente los caracteres `a`, `b` y `?`.

**Para un 50% de los casos**

- $X$ no contiene ningún `?` (todas las letras se leen, solo `a` y `b`).
