*Este problema es una* ***tarea*** *diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.*

# Problema

En el cine local, el precio del boleto depende de la edad del cliente:

| Edad | Tipo de boleto |
|------|---------------|
| Menos de 4 años | Gratis |
| De 4 a 11 años | Nino |
| De 12 a 17 años | Joven |
| De 18 a 64 años | Adulto |
| 65 años o más | Adulto Mayor |

Dado la edad de un cliente, imprime el tipo de boleto que le corresponde.

# Entrada

Un entero $E$ que representa la edad del cliente.

# Salida

El tipo de boleto correspondiente, exactamente como aparece en la tabla.

# Ejemplos

||input
3
||output
Gratis
||input
10
||output
Nino
||input
17
||output
Joven
||input
35
||output
Adulto
||input
70
||output
Adulto Mayor
||end

# Limites

- $0 \leq E \leq 120$
