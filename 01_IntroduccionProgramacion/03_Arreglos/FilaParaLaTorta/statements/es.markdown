# Historia

En la pastelería **La Sirena** de Mérida, doña Lupita atiende a sus clientes en estricto orden por edad. Si los clientes llegan formados en una fila donde sus edades van de menor a mayor (de adelante hacia atrás), ella los atiende a todos sin reproches.

Pero si la fila no está ordenada, doña Lupita es muy estricta. En cada turno revisa la fila:

- Si la fila ya está ordenada de menor a mayor (no estrictamente), termina.
- Si no, **saca de la fila a un cliente** (el que ella quiera) y lo manda a la panadería de al lado.

Doña Lupita quiere irse pronto, así que decide sacar clientes de tal forma que al final queden **lo menos posible** en la fila.

# Problema

Dada la fila inicial de $N$ clientes con sus edades, determina el **mínimo número de clientes** que pueden quedar en la fila cuando esta ya esté ordenada de menor a mayor (no estrictamente).

# Entrada

En la primera línea, un entero $N$, la cantidad de clientes formados.

En la segunda línea, $N$ enteros separados por espacios: las edades $a_1, a_2, \ldots, a_N$ en el orden en que están formados.

# Salida

Un único entero: el mínimo número de clientes que pueden quedar al final.

# Ejemplos

||input
4
1 4 2 3
||output
1
||description
Doña Lupita saca al 1, luego al 2 y luego al 3, dejando solo al cliente de edad 4. (Si en algún turno la fila quedara ya ordenada, el juego terminaría y no podría seguir sacando.)
||input
1
100
||output
1
||description
Un solo cliente ya está "ordenado" por sí mismo, así que nadie sale.
||input
2
6 7
||output
2
||description
La fila ya está ordenada, así que doña Lupita no saca a nadie.
||end

# Limites

- $1 \leq N \leq 10^5$
- $1 \leq a_i \leq 10^9$

**Para un 50% de los casos**

- La fila ya está ordenada de menor a mayor (no estrictamente).
