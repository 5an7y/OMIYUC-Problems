*Este problema es una* ***tarea*** *diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.*

# Problema

El maestro Balam es muy estricto con la puntualidad. Tiene $N$ alumnos, y de cada uno conoce dos cosas: sus puntos de participación y cuántos minutos llegaron tarde a clases.

Su regla es simple: a todo alumno que llegó **más de 30 minutos tarde** se le restan **10 puntos** de participación.

Dado el arreglo de puntos y el arreglo de tardanza de los $N$ alumnos, imprime los puntos finales de todos, en el orden original.

# Entrada

Un entero $N$. En la siguiente línea, los $N$ puntos de participación. En la siguiente línea, los $N$ minutos de tardanza.

# Salida

Los $N$ puntos finales en una línea, en el orden original.

# Ejemplos

||input
4
80 70 90 60
10 40 0 35
||output
80 60 90 50
||description
El alumno 2 llegó 40 min tarde (70−10=60) y el alumno 4 llegó 35 min tarde (60−10=50). Los demás no se modifican.
||input
3
50 60 70
5 10 15
||output
50 60 70
||description
Nadie llegó más de 30 minutos tarde, así que los puntos no cambian.
||input
2
100 80
31 0
||output
90 80
||description
El alumno 1 llegó exactamente 31 minutos tarde (>30), así que pierde 10 puntos.
||end

# Limites

- $1 \leq N \leq 100$
- $0 \leq \text{puntos}_i \leq 100$
- $0 \leq \text{tardanza}_i \leq 120$
