*Este problema es una* ***lección*** *diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.*

# Problema

Al terminar un partido de fútbol, el sistema revisa si desbloqueaste alguno de estos logros:

- Si anotaste más de 3 goles: imprimir `Logro: Goleador!`
- Si no te metieron ningún gol: imprimir `Logro: Valla invicta!`
- Si la diferencia de goles a tu favor es mayor a 2: imprimir `Logro: Goleada!`

Cada logro se evalúa de forma independiente — puedes desbloquear varios al mismo tiempo.

Al final, si desbloqueaste al menos uno, imprime `Partida epica!`. Si no desbloqueaste ninguno, imprime `Sigue intentando.`

# Entrada

Dos enteros en una línea: $G_t$ y $G_r$ — los goles que anotaste tú y los que te anotaron, respectivamente.

# Salida

Los logros desbloqueados (en el orden de la lista de arriba), seguidos del mensaje final.

# Ejemplos

||input
4 0
||output
Logro: Goleador!
Logro: Valla invicta!
Logro: Goleada!
Partida epica!
||description
Anotaste 4 (> 3), no recibiste goles, y ganaste por 4 de diferencia (> 2).
||input
2 1
||output
Sigue intentando.
||description
No cumples ningún logro: 2 no es mayor a 3, recibiste 1 gol, y la diferencia es 1 (no mayor a 2).
||input
1 0
||output
Logro: Valla invicta!
Partida epica!
||end

# Limites

- $0 \leq G_t, G_r \leq 20$
