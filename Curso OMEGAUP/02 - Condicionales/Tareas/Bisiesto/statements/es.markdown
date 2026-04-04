# Problema

Mucha gente cree que un año bisiesto es simplemente aquel que es múltiplo de 4. Sin embargo, las reglas reales son un poco más específicas:

- Un año es bisiesto si es **múltiplo de 4**...
- ...excepto si también es **múltiplo de 100**, en cuyo caso **no es bisiesto**...
- ...a menos que además sea **múltiplo de 400**, en cuyo caso **sí es bisiesto**.

Dado un año, determina si es bisiesto o no.

# Entrada

Un entero $a$ que indica el año.

# Salida

Imprime `Si` si el año es bisiesto, o `No` si no lo es.

# Ejemplos

||input
2024
||output
Si
||description
Múltiplo de 4, y no es múltiplo de 100. Es bisiesto.
||input
2200
||output
No
||description
Múltiplo de 4 y de 100, pero no de 400. No es bisiesto.
||input
2400
||output
Si
||description
Múltiplo de 4, de 100 y de 400. Sí es bisiesto.
||end

# Limites

- $0 \leq a \leq 10^5$
