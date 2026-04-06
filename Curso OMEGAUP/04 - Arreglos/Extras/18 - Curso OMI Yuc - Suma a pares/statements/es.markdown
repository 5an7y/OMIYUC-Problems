*Este problema es una* ***lección*** *diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.*

Fecha de creación: 31 de octubre de 2022.

No hay mucho más que decir acerca de los arreglos y matrices por el momento. Dominar estos objetos requiere de estar practicando y resolviendo problemas. Es por eso por lo que las siguientes dos lecciones resolveremos dos problemas de forma conjunta.

# Problema 

Se te da un arreglo de tamaño par. Deberás imprimir un arreglo en donde cada elemento se forma de la suma de pares de elemento. Por ejemplo, si tenemos el arreglo

$$
\[1, 5, 4, 3, 2, 9\].
$$

Deberemos imprimir el arreglo

$$
\[1 + 5, 4 + 3, 2 + 9\] = \[6, 7, 11\].
$$

Nota que el elemento $0$ se forma de la suma del elemento $0$ y $1$. El elemento $1$ de los números en la posición $2$ y $3$.

# Entrada

Un entero par $N$. En la siguiente línea los $N$ enteros $x_i$ de los elementos que conforman el arreglo. 

# Salida

$N / 2$ enteros de los elementos del nuevo arreglo formado.

# Ejemplo

||input
4
6 7 2 3
||output
13 5
||input
6
1 2 8 9 3 2
||output
3 17 5
||end

# Limites 

- $0 < N \leq 200$
- $0 \leq x_i \leq 100$

Puedes intentar solucionar el problema sin ayuda.

---

# Solucion 1

Para empezar, notemos que a lo más tenemos $200$ elementos. Por lo tanto, basta declarar un arreglo de tamaño $200$.

```cpp
int ar[200];
```

Además, podemos llevar un segundo arreglo donde almacenaremos la respuesta. Este es de tamaño a lo más $100$ que es $200/2$.

```cpp
int ar[200], ar2[100];
```

Una solución posible es llevar dos iteradores, uno que se mueva a lo largo de `ar` y otro a lo largo de `ar2`. Como ya somos todos unos maestros de los ciclos, sabemos que podemos hacer esto con un único ciclo `for`. El iterador de `ar2` se moverá de uno en uno, mientras que el de `ar` se moverá de dos en dos.

```cpp
for (int i = 0, j = 0; i < N; i += 2, j++)
```

En este caso `i` corresponde a `ar`, mientras que `j` corresponde a `ar2`. Nota que solo es necesario verificar que `i < N` ya que cuando se deje de cumplir esto hemos acabado. En cuanto al contenido del ciclo solo debemos hacer que el elemento en `ar2[j]` corresponda a la suma de `ar[i]` con `ar[i + 1]`.

Por lo que el código al final quedaría como

```cpp
#include <bits/stdc++.h>
using namespace std;

int ar[200], ar2[100];
int N;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> ar[i];
    }

    for (int i = 0, j = 0; i < N; i += 2, j++) {
        ar2[j] = ar[i] + ar[i + 1]; 
    }

    for (int i = 0; i < N/2; i++) {
        cout << ar2[i] << " ";
    }

    return 0;
}
```

# Solución 2

La solución anterior es suficiente para el problema. Sin embargo, aquí presentaremos una alternativa de una idea que a veces resulta útil. Imagina como resolveríamos el problema usando únicamente un iterador en lugar de dos. 

Observemos que a la posición $0$ de `ar2` tenemos asociada la posición $0$ y $1$ de `ar`. A la posición $1$ le asociamos la $2$ y $3$, a la $2$ la $4$ y $5$. Muchas veces nos vamos a enfrentar a esta clase de problemas donde tenemos que asignarle a cada posición alguna otra, esto se le dice que hacemos un mapeado de los números. El estar llevando dos iteradores a veces no será posible y tenemos que hacer uso de algunos patrones.

En este caso, el patrón que podemos observar es que a la posición $i$ se le asignan las posiciones $2 * i$ y $2 * i + 1$ del otro arreglo. Entonces, en lugar de llevar dos iteradores podemos llevar solo uno y hacer lo siguiente.

```cpp
for (int i = 0; i < N/2; i++) {
    ar2[i] = ar[2 * i] + ar[2 * i + 1]; 
}
```

Muchas veces es útil pensar en que operaciones matemáticas podemos hacer para ahorrarnos código y variables.

```cpp
#include <bits/stdc++.h>
using namespace std;

int ar[200], ar2[100];
int N;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> ar[i];
    }

    for (int i = 0; i < N/2; i++) {
        ar2[i] = ar[2 * i] + ar[2 * i + 1]; 
    }

    for (int i = 0; i < N/2; i++) {
        cout << ar2[i] << " ";
    }

    return 0;
}
```

# Perdida de memoria

Este problema a pesar de que diga la palabra *arreglo* no quiere decir que se necesita de un arreglo para resolverlo. Imagina el siguiente problema. Se te dan $N$ parejas de números y por cada pareja deberás imprimir la suma.

||input
2
6 7
2 3
||output
13
5
||input
3
1 2
8 9
3 2
||output
3
17
5
||end

¿Notas alguna relación con el problema original? Mira los casos de ejemplo del problema original. ¡Es exactamente lo mismo! Lo único que cambia es la forma en la que se nos da la entrada y salida. Si vemos este problema no quiere un arreglo, podemos hacerlo usando pérdida de memoria con solo ciclos. Basta leer la pareja de números y sacar su suma y luego ir a la siguiente pareja.

Entonces, en realidad podemos resolver este problema usando un único ciclo.

```cpp
#include <bits/stdc++.h>
using namespace std;

int N, a, b;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> N;

    for (int i = 0; i < N / 2; i++) {
        cin >> a >> b;
        cout << a + b << ' ';
    }

    return 0;
}
```

# Nota final

Lo que se quiere ejemplificar aquí es que existen muchas formas de resolver y pensar un problema. No debemos quedarnos con lo que nos dice el problema. Mientras tenga sentido podemos ir transformando el problema en uno más sencillo y que podamos resolver de forma más fácil. 

La ventaja que tienen los problemas que resolvemos en la olimpiada es que no hay una forma concreta o única de resolver un problema. Mientras la salida que demos corresponda a la entrada que se nos proporciona podemos hacer volar nuestra imaginación e intuición.