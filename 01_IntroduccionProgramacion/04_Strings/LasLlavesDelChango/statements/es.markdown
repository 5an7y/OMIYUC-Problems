# Historia

Don Memo, el cerrajero del mercado, guarda en una repisa una secuencia de candados. Cada candado tiene grabada una de dos figuras: una **llave izquierda** `(` o una **llave derecha** `)`.

Don Memo puede hacer **una sola operación** (o ninguna):

1. Elige un **substring** de la repisa, es decir, un tramo de **posiciones consecutivas** $s_l, s_{l+1}, \ldots, s_r$ (con $1 \leq l \leq r \leq N$).
2. Saca TODOS los candados de ese substring (los demás se quedan en su lugar).
3. Va metiendo esos candados, **uno por uno**, en cualquier posición de la repisa que él quiera. Cada vez que mete uno, los demás se recorren para hacerle espacio.

Don Memo dice que la repisa quedó "bonita" si la secuencia final de figuras forma **paréntesis balanceados**: a cada llave izquierda `(` le corresponde una llave derecha `)` que está más a la derecha, y los pares no se cruzan entre sí. Por ejemplo, `()()` y `(())` son bonitas; `)(`, `(()` y `())` no lo son.

# Problema

Dada la secuencia inicial de la repisa, determina si Don Memo puede dejarla bonita haciendo a lo más una operación.

# Entrada

En la primera línea, un entero $N$: la cantidad de candados en la repisa.

En la segunda línea, una cadena $s$ de longitud $N$ formada únicamente por los caracteres `(` y `)`.

# Salida

Imprime `SI` si Don Memo puede dejar la repisa bonita; `NO` en caso contrario.

# Ejemplos

||input
2
()
||output
SI
||description
La repisa ya es bonita, Don Memo no hace nada.
||input
2
)(
||output
SI
||description
Don Memo saca los 2 candados y los vuelve a meter en orden: `()`.
||input
3
(((
||output
NO
||description
No importa cómo los acomode, siempre habrá llaves izquierdas sin pareja.
||input
6
())(()
||output
SI
||end

# Limites

- $1 \leq N \leq 2 \cdot 10^5$
- $s$ contiene únicamente los caracteres `(` y `)`.

**Para un 50% de los casos**

- La cadena $s$ es **alternante** (los caracteres consecutivos siempre son distintos), o bien **todos los caracteres son iguales**.
