# Problema

Una empresa quiere dar aumentos de sueldo a sus empleados según los años trabajados y su calificación. Las reglas son:

| Años trabajados | Calificación | Aumento |
|---|---|---|
| Menos de 5 | Menor a 70 | Sin aumento |
| Menos de 5 | 70 o más | 10% |
| 5 o más | Menor a 60 | 20% |
| 5 o más | 60 o más | 30% |

Dado el salario inicial, los años trabajados y la calificación de un empleado, calcula su nuevo salario.

# Entrada

Tres enteros en una sola línea: el salario inicial $S$, los años trabajados $T$ y la calificación $C$.

# Salida

Un entero: el nuevo salario del empleado.

# Ejemplos

||input
1000 6 90
||output
1300
||input
500 2 69
||output
500
||input
800 4 82
||output
880
||end

# Limites

- $10 \leq S \leq 10^5$
- $1 \leq T \leq 10$
- $1 \leq C \leq 100$
- $S$ siempre será múltiplo de 10.
