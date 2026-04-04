*Este problema es una* ***tarea*** *diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.*

# Problema

En un torneo de programación, los equipos acumulan puntos según sus resultados:

- Victoria: 3 puntos
- Empate: 1 punto
- Derrota: 0 puntos

Dado el número de victorias, empates y derrotas de un equipo, calcula su puntaje total.

# Entrada

Tres enteros en una sola línea: $v$, $e$ y $d$ — victorias, empates y derrotas respectivamente.

# Salida

Un entero: el puntaje total del equipo.

# Ejemplos

||input
3 1 2
||output
10
||description
$3 \times 3 + 1 \times 1 + 2 \times 0 = 10$
||input
0 0 5
||output
0
||input
10 0 0
||output
30
||end

# Limites

- $0 \leq v, e, d \leq 100$
