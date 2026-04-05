*Este problema es una* ***tarea*** *diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.*

# Problema

Sofía quiere comprarse unos audífonos que cuestan $C$ pesos. Actualmente tiene $A$ pesos en su alcancía y cada semana ahorra $S$ pesos más.

¿Cuántas semanas necesita esperar para poder comprarlos?

# Entrada

Tres enteros $A$, $S$ y $C$: el dinero que tiene ahora, cuánto ahorra por semana, y cuánto cuestan los audífonos.

# Salida

Un entero: el número mínimo de semanas que debe esperar. Si ya puede comprarlos sin esperar, imprime $0$.

# Ejemplos

||input
100 80 500
||output
5
||description
Sofía tiene $100. Necesita $500. Ahorra $80 por semana: después de 5 semanas tiene $100 + 5×80 = $500.
||input
300 50 300
||output
0
||description
Ya tiene exactamente el dinero que necesita.
||input
0 1 1000000
||output
1000000
||end

# Limites

- $0 \leq A \leq 10^9$
- $1 \leq S \leq 10^9$
- $1 \leq C \leq 10^9$

**Para un 50% de los casos**

- $A < C \leq 10^5$
