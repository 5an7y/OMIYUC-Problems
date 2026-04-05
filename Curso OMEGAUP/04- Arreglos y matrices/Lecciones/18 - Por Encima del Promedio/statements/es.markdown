*Este problema es una* ***lección*** *diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.*

# Problema

El maestro de ciencias tiene las calificaciones de $N$ alumnos. Para repartir el apoyo del grupo, quiere saber quiénes están **por encima del promedio** para reconocerlos, y quiénes están **en el promedio o por debajo** para apoyarlos.

Imprime primero las calificaciones estrictamente mayores al promedio (en orden original), y luego las que son menores o iguales al promedio (en orden original).

El promedio se calcula como $\lfloor \text{suma} / N \rfloor$ (división entera, redondeando hacia abajo).

# Entrada

Un entero $N$. En la siguiente línea, las $N$ calificaciones.

# Salida

Dos líneas. La primera con las calificaciones **estrictamente por encima** del promedio, la segunda con las que están **en el promedio o por debajo**, ambas en orden original.

Si no hay calificaciones en algún grupo, esa línea va vacía.

# Ejemplos

||input
5
80 60 90 70 100
||output
80 90 100
60 70
||description
Suma = 400, $N = 5$, promedio = 80. Por encima de 80: 90 y 100. En 80 o por debajo: 80, 60 y 70. Nota que 80 no está estrictamente por encima del promedio, así que va en la segunda línea.
||input
4
50 50 50 50
||output

50 50 50 50
||description
Promedio = 50. Ninguna calificación está estrictamente por encima de 50, así que la primera línea va vacía.
||input
1
75
||output

75
||end

# Limites

- $1 \leq N \leq 100$
- $0 \leq c_i \leq 100$
