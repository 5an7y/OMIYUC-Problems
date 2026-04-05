*Este problema es una* ***tarea*** *diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.*

Fecha de creación: 6 de noviembre de 2022.

# Problema

En una escuela se tienen $N$ materias y $M$ estudiantes en total. Cada materia reporta los resultados en orden alfabético de los alumnos. Tu tarea será calcular el promedio total de cada alumno. Esta escuela es un poco estricta y siempre redondea el promedio hacia abajo.

# Entrada

Dos enteros $N$ y $M$ que indican la cantidad de materias y alumnos.

Las siguiente $N$ líneas son $M$ enteros que son los resultados de cada alumno en la materia. Es decir, el elemento $a_{i, j}$ es la calificación del alumno $j$ en la materia $i$.

# Salida

$M$ enteros indicando el promedio de cada alumno.

# Ejemplos

||input
3 5
83 92 12 32 45
94 23 21 84 75
11 34 58 93 83
||output
37 29 18 41 40
||description
El primer alumno tiene las calificaciones $[83, 94, 11]$ cuyo promedio es $37$ y para los demás alumnos se calcula de forma similar.
||input
2 3
1 2 3
3 2 1
||output
2 2 2
||input
4 4
83 23 12 31
98 43 23 12
9 84 32 25
90 87 86 100
||output
70 59 38 42
||end

# Limites

- $1 \leq N, M \leq 10^3$.
- $1 \leq a_{i, j} \leq 100$.