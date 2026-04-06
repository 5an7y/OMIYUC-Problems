*Este problema es una* ***lección*** *diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.*

# Problema

En una baraja mágica de $N$ cartas, cada carta tiene un valor entre 1 y 99. Cada carta tiene su **complementaria**: la carta con la que suma exactamente 100. Por ejemplo, la carta de valor 30 está emparejada con la carta de valor 70 (porque $30 + 70 = 100$).

Todas las cartas tienen su complementaria en la baraja... menos una. Encuéntrala e imprime su valor.

# Entrada

Un entero $N$. En la siguiente línea, los $N$ valores de las cartas.

# Salida

El valor de la única carta que no tiene su complementaria en la baraja.

# Ejemplos

||input
5
30 70 30 20 70
||output
20
||description
El complementario de 20 es 80. Como 80 no está en la baraja, 20 es la carta solitaria.
||input
3
10 90 15
||output
15
||description
El complementario de 15 es 85. Como 85 no aparece, 15 es la carta sin pareja.
||input
1
42
||output
42
||description
Con una sola carta no hay forma de tener complementaria.
||end

# Limites

- $1 \leq N \leq 99$ ($N$ siempre impar)
- Los valores están en el rango $[1, 49] \cup [51, 99]$ (no aparece el 50)
- Siempre existe exactamente una carta sin complementaria
