# Historia

Eres parte del **escuadrón antibombas**. Acabas de llegar al edificio donde está la bomba y el reloj corre: en el panel de la bomba aparece un número de $K$ dígitos sin ceros. El protocolo dice:

> La bomba se desactiva cuando el número del panel **NO es primo** (es decir, es **compuesto** o igual a $1$).

El panel tiene un botón que te permite **borrar dígitos** uno por uno: cuando borras un dígito, los demás se juntan y conservan el orden original. Quieres borrar la **mayor cantidad de dígitos posible**, de modo que el número final NO sea primo (y la bomba se desactive).

# Problema

Dado el número del panel, encuentra el **mínimo de dígitos** con los que te puedes quedar para que el resultado no sea primo. Está garantizado que siempre existe alguna forma de hacerlo (no es necesario quedarte sin dígitos).

# Entrada

En la primera línea, un entero $K$, la cantidad de dígitos del número del panel.

En la segunda línea, el número escrito como una cadena de exactamente $K$ caracteres, cada uno del $1$ al $9$ (no hay ceros).

# Salida

Un único entero: el mínimo número de dígitos con los que te puedes quedar para que el resultado no sea primo.

# Ejemplos

||input
3
237
||output
2
||description
Los dígitos del panel son 2, 3 y 7, los tres son primos por sí solos. Pero si borras el 3, te quedan 2 dígitos formando $27 = 3 \times 9$, que es compuesto. Mínimo: 2 dígitos.
||input
5
44444
||output
1
||description
El dígito 4 es compuesto. Borra cuatro dígitos y te queda un solo $4$. Mínimo: 1 dígito.
||input
3
221
||output
1
||description
El dígito 1 no es primo. Borra los otros dos y te queda solo el $1$. Mínimo: 1 dígito.
||input
2
35
||output
2
||description
Los dígitos $3$ y $5$ son primos por separado. Pero $35 = 5 \times 7$ es compuesto, así que conservas los 2 dígitos. Mínimo: 2 dígitos.
||end

# Limites

- $1 \leq K \leq 50$
- El número del panel contiene únicamente dígitos del $1$ al $9$ (no hay ceros).
- Está garantizado que existe alguna forma de borrar dígitos para que el resultado no sea primo.

**Para un 50% de los casos**

- $1 \leq K \leq 5$
