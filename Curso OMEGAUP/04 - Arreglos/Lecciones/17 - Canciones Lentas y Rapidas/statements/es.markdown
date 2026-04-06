*Este problema es una* ***lección*** *diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.*

# Problema

Camila tiene una playlist de $N$ canciones. Cada canción tiene un tempo medido en BPM (beats por minuto). Camila clasifica las canciones en dos grupos: las que tienen tempo **menor que $K$** son lentas, y las demás son rápidas.

Ayúdala a separar su playlist: imprime primero todos los tempos de las canciones lentas en orden original, luego todos los tempos de las canciones rápidas en orden original.

# Entrada

Un entero $K$. En la siguiente línea, un entero $N$. En la siguiente línea, los $N$ tempos de las canciones $x_i$.

# Salida

Dos líneas. La primera con los tempos **menores que $K$**, la segunda con los tempos **mayores o iguales a $K$**, ambas en el orden en que aparecen en la entrada.

Si no hay canciones en alguno de los grupos, imprime una línea vacía para ese grupo.

# Ejemplos

||input
120
5
90 140 80 130 110
||output
90 80 110
140 130
||description
$K = 120$. Las canciones con tempo menor que 120 son: 90, 80 y 110. Las de tempo 140 y 130 son rápidas (≥ 120).
||input
100
4
100 200 100 50
||output
50
100 200 100
||description
$K = 100$. Solo 50 es menor que 100, así que va en la primera línea. Los valores 100, 200 y 100 son mayores o iguales a $K$.
||input
200
3
60 90 150
||output
60 90 150

||description
Todas las canciones tienen tempo menor que 200, así que van todas en la primera línea. La segunda línea queda vacía.
||end

# Limites

- $1 \leq N \leq 100$
- $1 \leq x_i \leq 300$
- $1 \leq K \leq 300$
