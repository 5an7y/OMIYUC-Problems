*Este problema es una* ***lección*** *diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.*

# Problema

El maestro de física quiere apoyar a los alumnos que reprobaron (calificación menor a 60). Tiene $K$ puntos extras para **repartir equitativamente** entre todos los que reprobaron. Después de sumarles sus puntos, algunos alumnos aún siguen reprobando.

Imprime las calificaciones finales de los alumnos que, aún después de recibir sus puntos extra, siguen con calificación menor a 60.

# Entrada

Un entero $K$. En la siguiente línea, un entero $N$. En la siguiente línea, las $N$ calificaciones.

# Salida

Las calificaciones finales de los alumnos que siguen reprobando, en el orden en que aparecen en la entrada. Si nadie sigue reprobando, imprime una línea vacía.

# Ejemplos

||input
10
5
80 50 40 90 55
||output
53 43 58
||description
Reprueban: 50, 40, 55 (tres alumnos). Bonus = $\lfloor 10/3 \rfloor = 3$. Calificaciones finales de los reprobados: 53, 43, 58. Los tres siguen menores a 60.
||input
20
3
59 50 40
||output
56 46
||description
Reprueban los tres. Bonus = $\lfloor 20/3 \rfloor = 6$. Calificaciones: 65, 56, 46. El 65 ya no reprueba; los otros dos sí.
||input
100
2
30 80
||output

||description
Solo reprueba uno (el 30). Bonus = $\lfloor 100/1 \rfloor = 100$. Calificación final: 130 — ya no reprueba. Nadie sigue reprobando.
||end

# Limites

- $1 \leq N \leq 100$
- $0 \leq c_i \leq 100$
- $1 \leq K \leq 100$
- Se garantiza que al menos un alumno reprobó
