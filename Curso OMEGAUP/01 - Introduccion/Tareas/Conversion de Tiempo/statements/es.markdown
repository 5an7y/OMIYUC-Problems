*Este problema es una* ***tarea*** *diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.*

# Problema

Luisa lleva la cuenta del tiempo que pasa estudiando programación. Hoy quiere saber cuántas horas, minutos y segundos estudió en total, pero solo tiene el conteo en segundos.

Dado el número total de segundos $S$, ayúdale a Luisa a convertirlo a horas, minutos y segundos.

# Entrada

Un entero $S$ representando el número total de segundos.

# Salida

Tres enteros separados por espacio: las horas, los minutos y los segundos.

# Ejemplos

||input
3661
||output
1 1 1
||description
$3661$ segundos son $1$ hora ($3600$ s), $1$ minuto ($60$ s) y $1$ segundo. En total: $3600 + 60 + 1 = 3661$.
||input
7200
||output
2 0 0
||description
$7200$ segundos son exactamente $2$ horas. Quedan $0$ minutos y $0$ segundos.
||input
90
||output
0 1 30
||description
$90$ segundos no llegan a una hora. Son $1$ minuto ($60$ s) y $30$ segundos sobrantes.
||input
0
||output
0 0 0
||end

# Limites

- $0 \leq S \leq 10^6$
