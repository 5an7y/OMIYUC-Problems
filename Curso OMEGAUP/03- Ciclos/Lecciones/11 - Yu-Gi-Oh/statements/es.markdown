*Este problema es una* ***lección*** *diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.*

# Problema

Estás jugando Yu-Gi-Oh con tu amigo. Este es un juego de cartas donde ambos jugadores tienen puntos de vida y el primero en llegar a $0$ pierde. En un punto del juego tú tienes $a$ de vida y tu amigo $b$. Juegas una carta mágica con el efecto:

> Duplica tu vida hasta tener más vida que tu oponente.

Dado $a$ y $b$, muestra tu vida final después de usar la carta.

# Entrada

Dos enteros $a$ y $b$: tu vida y la de tu contrincante.

# Salida

Un único entero: tu vida después de usar la carta mágica.

# Ejemplos

||input
10
20
||output
40
||description
Duplicas 10 → 20. Sigues con menos (20 no es mayor que 20), duplicas → 40. Ya tienes más que tu rival.
||input
78
123
||output
156
||input
748
23
||output
748
||description
Ya tienes más vida que tu rival desde el inicio, la carta no hace nada.
||end

# Limites

- $0 < a, b \leq 10^7$