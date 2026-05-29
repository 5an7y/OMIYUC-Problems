# Historia

Estás jugando un videojuego con $26$ niveles, etiquetados con las letras del **A** al **Z**. Cada nivel necesita un cierto tiempo total de juego para completarse:

- El nivel **A** se completa con $1$ minuto de juego.
- El nivel **B** se completa con $2$ minutos.
- ...
- El nivel **Z** se completa con $26$ minutos.

Lo importante es que el tiempo **NO** tiene que ser seguido: el juego va sumando todo el tiempo que dedicaste a cada nivel a lo largo de la sesión. Por ejemplo, si juegas el nivel B durante $1$ minuto, te cambias al nivel A, y después regresas al B por otro minuto más, ya completaste el nivel B (porque dedicaste $2$ minutos en total).

Tu sesión duró $N$ minutos. Al terminar, descargaste el **log** del juego: una cadena de $N$ letras donde la letra en la posición $i$ dice qué nivel estabas jugando durante el minuto $i$.

# Problema

Cuenta **cuántos niveles completaste** durante la sesión.

# Entrada

En la primera línea, un entero $N$, la cantidad de minutos que duró la sesión.

En la segunda línea, una cadena $s$ de longitud $N$ formada únicamente por letras mayúsculas de la A a la Z.

# Salida

Un único entero: la cantidad de niveles completados.

# Ejemplos

||input
6
ACBCBC
||output
3
||description
Niveles que jugaste: A (1 vez), B (2 veces), C (3 veces). El nivel A necesita 1 minuto → completado. El B necesita 2 minutos → completado. El C necesita 3 minutos → completado. Total: 3.
||input
7
AAAAFPC
||output
1
||description
A aparece 4 veces (necesita 1, ✓), F aparece 1 vez (necesita 6, ✗), P aparece 1 vez (necesita 16, ✗), C aparece 1 vez (necesita 3, ✗). Solo el nivel A se completó.
||input
22
FEADBBDFFEDFFFDHHHADCC
||output
4
||end

# Limites

- $1 \leq N \leq 500$
- $s$ contiene únicamente letras mayúsculas de la A a la Z.

**Para un 50% de los casos**

- $s$ contiene únicamente letras del conjunto $\{$A, B, C, D$\}$.
