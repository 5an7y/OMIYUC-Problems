# Problema

Un profesor tiene un criterio especial para aprobar su materia. La calificación se basa en 2 exámenes. Un alumno aprueba si se cumple **alguna** de estas dos condiciones:

1. Aprobó **ambos** exámenes (70 o más en cada uno).
2. El promedio de ambos exámenes es **mayor a 75**.

Si el alumno no aprueba con ese criterio, se le suman 3 puntos extras a **cada** examen y se vuelve a evaluar con el mismo criterio.

Dadas las calificaciones en ambos exámenes, determina si el alumno aprueba o no.

# Entrada

Dos enteros separados por un espacio: las calificaciones $C_1$ y $C_2$.

# Salida

Imprime `Aprobado` si el alumno aprueba, o `No aprobado` si no.

# Ejemplos

||input
70 70
||output
Aprobado
||description
Aprobó ambos exámenes.
||input
65 95
||output
Aprobado
||description
No aprobó ambos, pero el promedio es 80 (mayor a 75).
||input
30 60
||output
No aprobado
||description
Con los 3 puntos extras (33 y 63) sigue sin cumplir ninguna condición.
||end

# Limites

- $0 \leq C_1, C_2 \leq 100$
