# Historia

Para el desfile de la **Fiesta Patria**, los niños del kínder Pedro Infante colgaron una guirnalda de $N$ banderitas. Cada banderita es **blanca** (`B`) o **verde** (`V`).

A la maestra Lupita no le gustó cómo quedó. Quiere arreglarla con **a lo más una operación** (puede no hacer nada):

1. Elige un **substring** de la guirnalda, es decir, un substring de **posiciones consecutivas** $s_l, s_{l+1}, \ldots, s_r$ (con $1 \leq l \leq r \leq N$).
2. **(Paso opcional)** Le pide a un niño que cambie el color de cada banderita del substring: las blancas pasan a verdes y las verdes a blancas. Este paso puede o no realizarse.
3. **Voltea el substring**: la banderita en la posición $l$ se va a la posición $r$, la de la posición $l+1$ a la $r-1$, y así sucesivamente.

La maestra quiere que al final ninguna banderita tenga otra **del mismo color** justo a su lado, es decir, que la guirnalda quede **alternante**.

# Problema

Dada la guirnalda inicial, determina si la maestra puede dejarla alternante con a lo más una operación.

# Entrada

En la primera línea, un entero $N$, la cantidad de banderitas.

En la segunda línea, una cadena $s$ de longitud $N$ formada únicamente por los caracteres `B` y `V`.

# Salida

Imprime `SI` si la maestra puede dejar la guirnalda alternante; `NO` en caso contrario.

# Ejemplos

||input
4
VBVB
||output
SI
||description
La guirnalda ya es alternante, no hace falta ninguna operación.
||input
6
VBBVBV
||output
SI
||description
Elige el substring $[1, 2]$ = `VB`. Sin cambiar colores, lo voltea: queda `BV`. La guirnalda se vuelve `BVBVBV`.
||input
3
BBB
||output
SI
||description
Elige el substring $[2, 2]$ = `B`. Sí cambia el color (paso opcional): queda `V`. La guirnalda se vuelve `BVB`.
||input
4
BBBB
||output
NO
||end

# Limites

- $1 \leq N \leq 2 \cdot 10^5$
- $s$ contiene únicamente los caracteres `B` y `V`.

**Para un 50% de los casos**

- La cadena $s$ ya es alternante, o bien todos sus caracteres son iguales.
