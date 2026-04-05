*Este problema es una* ***tarea*** *diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.*

# Problema

En una escuela hay $N$ materias y $M$ estudiantes. Cada materia reporta las calificaciones en orden alfabético. Tu tarea es calcular el promedio total de cada alumno.

La escuela redondea hacia abajo: si el promedio no es entero, se toma el piso.

# Entrada

Dos enteros $N$ y $M$ que indican la cantidad de materias y alumnos. Las siguientes $N$ líneas contienen $M$ enteros cada una: $a_{i,j}$ es la calificación del alumno $j$ en la materia $i$.

# Salida

$M$ enteros indicando el promedio de cada alumno, separados por espacios.

# Ejemplos

||input
3 5
83 92 12 32 45
94 23 21 84 75
11 34 58 93 83
||output
62 49 30 69 67
||description
El alumno 0 tiene calificaciones [83, 94, 11], suma = 188, promedio = $\lfloor 188/3 \rfloor = 62$.
||input
2 3
1 2 3
3 2 1
||output
2 2 2
||input
1 4
80 70 90 60
||output
80 70 90 60
||end

# Limites

- $1 \leq N, M \leq 20$
- $1 \leq a_{i,j} \leq 100$
