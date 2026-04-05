*Este problema es una* ***tarea*** *diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.*

# Problema

¡Santy ha empezado su caza de pokemones! Hasta ahora ha visto un total de $N$ pokemones. Curiosamente la pokedex te muestra una lista de los pokemones que has visto de una forma un tanto rara. Cada Pokémon se representa con un entero $x_i$ y **se te muestran en orden (del número)**. Por ejemplo,

$$
1, 2, 2, 4, 5, 5, 5
$$

si la pokedex te muestra lo anterior significa que viste $2$ veces al pokemon $2$, $3$ veces al pokemon $5$ y a los demas $1$ vez.

Santy quiere saber cual es el pokemon que mas veces ha visto. En caso, de que varios pokemones hayan sido vistos la misma cantidad de veces quiere saber el de menor numero.

# Entrada

Un entero $N$ indicando los pokemones que has visto.

# Salida

El número del Pokémon que más veces fue visto. Si hay empate, imprime el de menor número.

# Ejemplos

||input
7
1 2 2 4 5 5 5
||output
5
||description
En este caso al pokemon $5$ se le vio $3$ veces y a los demás se les vio menos que eso.
||input
6
1 1 2 2 2 10
||output
2
||input
9
4 4 7 7 7 8 10 10 10
||output
7
||end

# Limites

- $1 \leq N \leq 100$
- $1 \leq x_i \leq 100$
