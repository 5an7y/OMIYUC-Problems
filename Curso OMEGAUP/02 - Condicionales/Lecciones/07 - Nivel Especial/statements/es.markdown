# Problema

En un videojuego, un personaje tiene cierta cantidad de puntos de vida al llegar a un nivel especial. En ese momento ocurre lo siguiente:

- Si tiene **500 o más** puntos de vida, su vida se reduce a la mitad (redondeado hacia abajo).
- Si tiene **menos de 500** puntos de vida, su vida se duplica.

Dado el número de puntos de vida antes de llegar al nivel especial, calcula cuántos puntos de vida tendrá después.

# Entrada

Un entero $N$: los puntos de vida antes del nivel especial.

# Salida

Un entero: los puntos de vida después del nivel especial.

# Ejemplos

||input
200
||output
400
||input
901
||output
450
||input
500
||output
250
||end

# Limites

- $1 \leq N \leq 1000$
