# Historia

Eres parte del **escuadrón antibombas**. Acabas de llegar al edificio donde está la bomba y el reloj corre: en el panel de la bomba aparece un número de $K$ dígitos sin ceros. El protocolo dice:

> La bomba se desactiva cuando el número del panel **NO es primo** (es decir, es **compuesto** o igual a $1$).

El panel tiene un botón que te permite **borrar dígitos** uno por uno: cuando borras un dígito, los demás se juntan y conservan el orden original. Quieres borrar la **mayor cantidad de dígitos posible** (es decir, dejar la **menor cantidad de dígitos posible**) de modo que el número final NO sea primo y la bomba se desactive.

# Problema

Dado el número del panel, encuentra una forma de borrar dígitos para que el resultado **no sea primo**, dejando la **menor cantidad de dígitos posible**. Se garantiza que siempre existe alguna forma de lograrlo (no es necesario quedarte sin dígitos).

# Entrada

En la primera línea, un entero $K$, la cantidad de dígitos del número del panel.

En la segunda línea, el número escrito como una cadena de exactamente $K$ caracteres, cada uno del $1$ al $9$ (no hay ceros).

# Salida

En la primera línea, un entero $k'$: la cantidad mínima de dígitos con los que te puedes quedar.

En la segunda línea, una cadena de $k'$ dígitos que sea una **subsecuencia** del número original (los dígitos están en el mismo orden en que aparecen en el panel) y que forme un número **no primo**.

Si hay varias respuestas válidas, imprime cualquiera.

# Ejemplos

||input
3
237
||output
2
27
||description
Te quedas con los dígitos $2$ y $7$ (en ese orden), obteniendo $27 = 3 \times 9$, que es compuesto. Quedarte con un solo dígito no funciona: $2$, $3$ y $7$ son todos primos.
||input
5
44444
||output
1
4
||description
El dígito $4$ es compuesto. Te quedas con un solo $4$.
||input
3
221
||output
1
1
||description
El dígito $1$ no es primo. Te quedas con el $1$.
||input
2
35
||output
2
35
||description
Los dígitos $3$ y $5$ son primos por separado. Pero $35 = 5 \times 7$ es compuesto.
||end

# Limites

- $1 \leq K \leq 50$
- El número del panel contiene únicamente dígitos del $1$ al $9$ (no hay ceros).
- Está garantizado que existe alguna forma de borrar dígitos para que el resultado no sea primo.

**Para un 50% de los casos**

- $1 \leq K \leq 50$
- Si $K \geq 2$, el **último dígito** del número del panel es siempre un $5$.
