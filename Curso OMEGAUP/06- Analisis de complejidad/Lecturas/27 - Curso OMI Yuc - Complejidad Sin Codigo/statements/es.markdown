**Este problema es una lección diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.**

Fecha de creación: 2 de noviembre de 2023.

# Midiendo Complejidad sin Código

Hasta ahora hemos presentado códigos y hemos estado deduciendo su complejidad a través de lo que vemos. Pero honestamente no creo que haya alguien con el tiempo y las ganas de programar una solución para ver si la complejidad nos da solución. Para eso, mejor enviamos el código y vemos si nos da "tiempo límite excedido" o no.

![TLE](TLE.png)

Entonces, el verdadero poder y la razón por la cual tenemos tantas reglas de simplificación es para poder deducir la complejidad de un algoritmo sin tener que programarlo.

Honestamente, la única forma de adquirir esta habilidad es programando y resolviendo varios problemas. Después de programar unos cuantos problemas, uno puede tener una idea de los ciclos que va a usar solo teniendo la idea de lo que va a hacer. Entonces, de ahora en adelante, intenta pensar cuál es la complejidad de mi algoritmo cada vez que intentes resolver un problema.

# Suma en un arreglo (Ejemplo)

Imagina que tenemos el siguiente problema.

---

## Problema

Se te darán dos arreglos, uno de tamaño $N$ y otro de tamaño $M$. Deberás sumar cada elemento de $M$ a todo el arreglo de tamaño $N$ e imprimir el resultado final.

## Entrada

En la primera línea tendrás dos enteros $N$ y $M$ que son los tamaños de los arreglos.

En la segunda línea tendrás $N$ números que representan el primer arreglo.

En la tercera línea se te darán los $M$ números que representan el segundo arreglo.

## Salida

El primer arreglo modificado.

## Ejemplos

||input
5 4
9 3 2 4 4
1 3 2
||output
15 9 8 10 10
||description
El primer elemento del segundo arreglo es $1$, entonces debemos agregarle $1$ a todo el primer arreglo y nos queda 

- $[10, 4, 3, 5, 5]$.

Luego debemos agregarle $3$

- $[13, 7, 6, 8, 8]$.

Finalmente le agregamos $2$.

- $[15, 9, 8, 10, 10]$.
||end

## Límites

- $1 \leq N, M \leq 10^6$.
- $1 \leq a_i, b_i \leq 100$

**Para el 50% de los casos**

- $1 \leq N, M \leq 10^4$.

--- 

## Solución 1 

La primera solución que se nos puede venir a la mente es hacer justamente lo que el problema nos describe: *por cada elemento del segundo arreglo, voy a recorrer el primer arreglo y sumarle a todos los elementos dicho número*. Así, sin hacer código ni nada, ¿podrías deducir qué complejidad tiene esa solución?

Si el segundo arreglo tiene tamaño $M$ y por cada elemento estamos recorriendo el primer arreglo de tamaño $N$, entonces la solución tiene una complejidad de $O(NM)$, lo cual, para los límites del problema, nos daría que $NM = 10^6 \times 10^6 = 10^{12} > 10^8$. Sin embargo, para un conjunto del 50% de los casos, podemos ver que $NM = 10^4 \times 10^4 = 10^8$, y nos daría en tiempo. Por lo que, si enviamos esta solución, podríamos esperar al menos 50 puntos, que es mejor que nada en caso de que no se nos ocurra una mejor solución. Si fuéramos a hacer el código, vemos cómo, en efecto, la complejidad es la que planteamos anteriormente.

```cpp
#include <bits/stdc++.h>
using namespace std;

int N, M;
int ar1[1000000], ar2[1000000];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        cin >> ar1[i];
    }
    for (int i = 0; i < M; i++) {
        cin >> ar2[i];
    }

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            ar1[j] += ar2[i];
        }
    }

    for (int i = 0; i < N; i++) {
        cout << ar1[i] << " ";
    }

    return 0;
}
```

Muy bien, hemos podido descartar una solución sin siquiera tener que programarla. Pero se te ocurre ¿qué podemos hacer para obtener los 100 puntos?

## Solución 2

Si nos damos cuenta, sumar cada elemento del segundo arreglo es lo mismo que sumar la suma de todos los elementos del segundo arreglo. Es decir, si yo voy a hacer $+1, +2, +3$, eso es lo mismo que hacer $+6 = +(1+2+3)$. Entonces, en lugar de estar sumando cada elemento, **primero** calculamos la suma total de los elementos del segundo arreglo y **luego** sumamos eso a todos los elementos del primer arreglo. Así, sin programar, ¿qué complejidad tendría eso?

Primero haremos un ciclo para sumar todos los elementos del segundo arreglo, eso es $O(M)$ y luego el resultado de eso se lo sumamos a todos los del primer arreglo, que es $O(N)$. Nota que son procesos separados, por lo que la complejidad es $O(M + N)$. Si vemos los límites $N + M = 10^6 + 10^6 = 10^6 < 10^8$ (recuerda que en complejidad la suma toma el máximo nada más, si quieres ser más exacto con cómo la mides, sí puedes sumar directamente igual). Entonces, esta solución nos daría 100 puntos. Si la programamos, quedaría como:

```cpp
#include <bits/stdc++.h>
using namespace std;

int N, M, suma;
int ar1[1000000], ar2[1000000];

int main() {


    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        cin >> ar1[i];
    }
    for (int i = 0; i < M; i++) {
        cin >> ar2[i];
    }

    for (int i = 0; i < M; i++) {
        suma += ar2[i];
    }

    for (int i = 0; i < N; i++) {
        ar1[i] += suma;
    }

    for (int i = 0; i < N; i++) {
        cout << ar1[i] << " ";
    }

    return 0;
}
```