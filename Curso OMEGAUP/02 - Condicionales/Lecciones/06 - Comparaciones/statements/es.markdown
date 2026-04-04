# Problema

Se te dan dos números enteros $a$ y $b$. Debes imprimir **todos** los mensajes que apliquen de la siguiente lista, en el mismo orden en que aparecen:

- `a es mayor que b`
- `a es menor que b`
- `a es mayor o igual que b`
- `a es menor o igual que b`
- `a es igual que b`
- `a es diferente que b`

Si varios mensajes aplican, imprime todos ellos (uno por línea), en el orden de la lista.

# Entrada

Dos enteros $a$ y $b$ en una sola línea.

# Salida

Todos los mensajes que apliquen, cada uno en su propia línea.

# Ejemplos

||input
23 84
||output
a es menor que b
a es menor o igual que b
a es diferente que b
||input
728 23
||output
a es mayor que b
a es mayor o igual que b
a es diferente que b
||input
55 55
||output
a es menor o igual que b
a es mayor o igual que b
a es igual que b
||end

# Limites

- $0 < a, b \leq 10^7$
