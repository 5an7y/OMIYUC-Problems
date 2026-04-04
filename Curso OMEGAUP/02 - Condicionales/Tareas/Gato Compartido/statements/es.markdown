# Problema

Santiago y Paulina adoptaron un gato juntos, aunque viven en casas distintas sobre la misma calle. Podemos imaginar la calle como una línea recta: Santiago vive en la coordenada $x$ y Paulina en la coordenada $y$, con $x < y$.

El gato es mañoso y a veces se escapa a dar una vuelta. Al final del día aparece en la posición $z$ de la calle y decide irse con quien le quede más cerca. Si está exactamente a la misma distancia de ambos, prefiere a Santiago porque le tiene más cariño.

Tu tarea es determinar con quién termina el gato al final del día.

# Entrada

Tres enteros $x$, $y$ y $z$: la posición de la casa de Santiago, la de Paulina y la del gato, respectivamente.

# Salida

Imprime `Santiago` o `Paulina` según corresponda.

# Ejemplos

||input
10 45 38
||output
Paulina
||description
El gato está en 38. Distancia a Santiago (10): 28. Distancia a Paulina (45): 7. Va con Paulina.
||input
20 40 30
||output
Santiago
||description
El gato está exactamente en el centro. Va con Santiago.
||input
1 2 1
||output
Santiago
||end

# Limites

- $1 \leq x \leq z \leq y \leq 10^6$
- $x < y$
