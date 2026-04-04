# Problema

Cuando una estación de radio opera, usa un rango continuo de frecuencias. La franquicia "Mejores Casters Universales" (MCU) opera en el rango $[a, b]$, y "Destructores de Casters" (DC) opera en el rango $[c, d]$.

Tu tarea es determinar si los rangos de ambas estaciones se traslapan, es decir, si comparten alguna frecuencia en común.

# Entrada

Cuatro enteros $a$, $b$, $c$ y $d$: los rangos de frecuencia de MCU y DC.

# Salida

Imprime `Si` si los rangos se traslapan, o `No` si no.

# Ejemplos

||input
1 3 8 10
||output
No
||description
MCU usa [1, 3] y DC usa [8, 10]. No comparten frecuencias.
||input
1 10 5 15
||output
Si
||input
1 2 1 1
||output
Si
||end

# Limites

- $1 \leq a \leq b \leq 10^6$
- $1 \leq c \leq d \leq 10^6$
