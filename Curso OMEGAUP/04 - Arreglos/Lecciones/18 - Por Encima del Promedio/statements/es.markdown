*Este problema es una* ***lección*** *diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.*

# Problema

El maestro de matemáticas quiere reconocer a los alumnos que sacaron más que el promedio del grupo. Dado el arreglo de $N$ calificaciones, imprime en orden original las que son **estrictamente mayores** al promedio del grupo.

El promedio se calcula como $\lfloor \text{suma} / N \rfloor$ (redondeado hacia abajo).

# Entrada

Un entero $N$. En la siguiente línea, las $N$ calificaciones.

# Salida

Una línea con las calificaciones estrictamente mayores al promedio, en el orden en que aparecen en la entrada. Si ninguna calificación supera el promedio, imprime una línea vacía.

# Ejemplos

||input
5
80 60 90 70 100
||output
90 100
||description
Suma = 400, $N = 5$, promedio = 80. Estrictamente por encima de 80: 90 y 100. El 80 no cuenta porque no es estrictamente mayor.
||input
4
50 50 50 50
||output

||description
Promedio = 50. Ninguna calificación es estrictamente mayor a 50, así que la salida es una línea vacía.
||input
3
30 70 100
||output
70 100
||description
Suma = 200, promedio = 66 (redondeado hacia abajo). Por encima de 66: 70 y 100.
||end

# Limites

- $1 \leq N \leq 100$
- $0 \leq c_i \leq 100$
