*Este problema es una* ***tarea*** *diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.*

# Problema

En un concurso de matemáticas, $N$ estudiantes participaron en dos rondas. El puntaje final de cada estudiante es el promedio de sus dos rondas, redondeado hacia abajo.

El maestro quiere reconocer a los estudiantes que obtuvieron un puntaje final **estrictamente mayor** al promedio del grupo (promedio de todos los puntajes finales, redondeado hacia abajo).

Imprime los **números** de esos estudiantes (del 1 al $N$), en orden.

# Entrada

Un entero $N$. En la siguiente línea, los $N$ puntajes de la primera ronda. En la siguiente línea, los $N$ puntajes de la segunda ronda.

# Salida

Los números de los estudiantes cuyo puntaje final es estrictamente mayor al promedio del grupo, en orden. Si ninguno lo supera, imprime una línea vacía.

# Ejemplos

||input
4
80 60 90 70
60 80 70 90
||output
3 4
||description
Puntajes finales: (80+60)/2=70, (60+80)/2=70, (90+70)/2=80, (70+90)/2=80. Promedio del grupo: (70+70+80+80)/4=75. Los estudiantes 3 y 4 tienen 80 > 75.
||input
3
50 50 50
50 50 50
||output

||description
Todos tienen puntaje final 50 y el promedio del grupo es 50. Nadie supera estrictamente el promedio.
||input
2
100 40
80 60
||output
1
||description
Puntajes finales: (100+80)/2=90, (40+60)/2=50. Promedio del grupo: (90+50)/2=70. Solo el estudiante 1 supera el promedio.
||end

# Limites

- $1 \leq N \leq 100$
- $0 \leq \text{puntaje}_i \leq 100$
