*Este problema es una* ***lección*** *diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.*

Fecha de creación: 31 de octubre de 2022.

# Agregando dimensiones

El 99% de los problemas que debemos resolver no van a pasar de pensar en dos dimensiones. Sin embargo, existen problemas donde si tenemos que lidiar con 3 o más dimensiones. Por ejemplo, un cubo Rubik se tiene que representar como algo de $3 \times 3 \times 3$.

Para hacer esto simplemente basta con agregar las dimensiones de igual forma que lo hicimos con las matrices.

```cpp
tipo_de_variable nombre[dim1][dim2][dim3][dim4]...;
```

```cpp
int cubo[3][3][3];
```

Nuevamente recordemos que el límite que tenemos en las matrices es de la cantidad de variables que podemos tener. Por lo que, el producto de las dimensiones no debe pasarse de nuestro límite de $10^6$. 

$$
dim1 \times dim2 \times dim3 \times dim4 ... \leq 10^6.
$$

A pesar de que pensar en más de dos dimensiones no sea una tarea común, algo que si suele sucede es tener matrices de más de dos dimensiones ¿Como? ¿No es eso contradictorio? Muchas veces se deja de pensar en las matrices como espacios dimensionales y se piensan más como estados. En programación dinámica es muy común utilizar matrices de más dimensiones donde estas pasan a representar estados y no tanto un objeto dimensional. Pero esto es un tema avanzado para el punto en el que nos encontramos.

---

# Problema

Se te darán $N$ matrices cuadradas de $M \times M$. En la salida deberás imprimir primero las matrices cuyo primer elemento es par y luego aquellas cuyo primer elemento es impar. Esto en el orden en el que se te son dadas.

# Entrada

En la primera línea dos enteros $N$ y $M$ descritos anteriormente. Durante las siguientes líneas recibirás $N$ matrices de $M \times M$ con elemento $a_{i, j}$.

# Salida

Las matrices separadas por un salto de línea como se te pide en el problema.

# Ejemplo

||input
4 2

1 3
5 2

4 6
3 2

6 4 
1 2

9 0
2 1
||output
4 6
3 2

6 4 
1 2

1 3
5 2

9 0
2 1
||input
2 3

1 9 0
8 3 2
0 2 1

2 9 0
8 3 2
0 2 1
||output
2 9 0
8 3 2
0 2 1

1 9 0
8 3 2
0 2 1
||input
4 3

2 1 1
1 1 1
1 1 1

1 2 2
2 2 2
2 2 2

4 3 3
3 3 3
3 3 3

3 4 4
4 4 4
4 4 4
||output
2 1 1
1 1 1
1 1 1

4 3 3
3 3 3
3 3 3

1 2 2
2 2 2
2 2 2

3 4 4
4 4 4
4 4 4
||end

# Limites

- $0 < N \leq 10$
- $0 < M \leq 20$
- $0 \leq a_{i, j} \leq 100$

# Nota

Al momento de leer no te preocupes de los saltos de línea. Al hacer `cin >>` el programa lee el siguiente elemento aun si esta después de $x$ saltos de línea.
