*Este problema es una* ***tarea*** *diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.*

# Problema

La biblioteca de la escuela registra el número de folio de cada libro prestado durante el día. Como algunos libros se prestan varias veces, hay folios que aparecen repetidos en la lista.

Dado el arreglo de $N$ folios, imprime los folios que aparecen **más de una vez**, en el orden en que aparecen por primera vez, y sin repetirlos en la salida.

# Entrada

Un entero $N$. En la siguiente línea, los $N$ folios.

# Salida

Los folios duplicados, en orden de primera aparición, sin repetir. Si ningún folio se repite, imprime una línea vacía.

# Ejemplos

||input
7
10 20 10 30 20 10 40
||output
10 20
||description
El folio 10 aparece 3 veces y el 20 aparece 2 veces. Se imprimen en el orden en que aparecen por primera vez.
||input
3
1 2 3
||output

||description
Ningún folio se repite, así que la salida es vacía.
||input
4
5 5 5 5
||output
5
||description
El único folio es 5 y aparece 4 veces. Se imprime una sola vez.
||end

# Limites

- $1 \leq N \leq 100$
- $1 \leq \text{folio}_i \leq 1000$
