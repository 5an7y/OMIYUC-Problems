*Este problema es una* ***lección*** *diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.*

Fecha de creación: 30 de octubre de 2022.

# Guardando múltiples variables

Como mencionamos en la Lección de ciclos, hasta ahora somos capaces de resolver problemas con pérdida de memoria. Es decir, no necesitamos guardar todos los datos de entrada que nos dan para dar la respuesta. Un ejemplo, donde esto **NO** sucede es el que dimos justamente en esa lección

## Problema

Se te dan $N$ números y debes imprimirlos en el orden inverso al que se te fueron dados.

## Ejemplo

||input
4
3 2 1 4
||output
4 1 2 3
||end

## Limites

- $0 < N \leq 100$
- $0 < x_i < 1000$

En este problema pareciera que debemos crear de cierta forma una variable que guarde cada número que se nos dan. Por ejemplo, tener variables `a`, `b`, `c` y `d` que guarden a los números `3`, `2`, `1` y `4` respectivamente. Entonces, solo deberíamos imprimir estas variables en el orden inverso. El problema radica en que no sabemos de antemano cuantas variables vamos a necesitar.

Bien sabemos que $N$ a los más llega a $100$. Sin embargo, deberíamos declarar $100$ variables y además no podemos usar un ciclo para leerlas ya que cada entrada va a un variable distinta. Sin duda parece que necesitamos de una herramienta nueva para esta clase de tareas.

# Arreglos

Los arreglos surgen justamente para solucionar la problemática anterior. Un arreglo es un espacio en memoria donde internamente *contiene muchas variables*. La forma de declarar un arreglo es la siguiente

```cpp
tipo_de_dato nombres[tamaño];
```

Por ejemplo, si queremos declarar un arreglo que contenga $100$ variables enteras, haríamos lo siguiente.

```cpp
int santiago[100];
```

Esto se le suele decir de forma más común que el arreglo es de tamaño $100$ ya que puede almacenar $100$ números enteros. ¿Ahora como usamos esas $100$ variables que tiene por dentro? Un arreglo lo podemos ver como una fila de variables, donde cada variable tiene una posición empezando en $0$.

![](Arreglo.png)

Lo podemos entender como en las escuelas o trabajos donde a cada persona se le asigna una matrícula; incluso cuando hay una larga fila de espera muchas veces tenemos un numero en la posición que nos toca. Entonces, estos lugares en vez de referirse a nosotros por nuestro nombre, simplemente nos convertimos en un numero para ellos :(. Lo mismo sucede aquí, como tenemos muchas variables no le asignamos un nombre a cada variable, solo tenemos un número que indica la posición de la variable y de esta forma podemos usarla.


# Acceso a las posiciones

¿Como usamos cada una de las variables? Para entender esto de una forma clara, resolvamos el problema donde todo inicio `A + B` pero usando arreglos. El problema de sumar dos números normalmente usamos 3 variables para su solución. Dos que son la entrada y una que resulta la suma de las otras dos.

```cpp
#include <bits/stdc++.h>
using namespace std;

int a, b, c;

int main() {
    cin >> a >> b;
    c = a + b;
    cout << c;
    return 0;
}
```

Muy bien, ahora intentemos lograr lo mismo, pero usando un arreglo. En este caso necesitamos 3 variables entonces lo natural será declarar un arreglo de tamaño 3.

```cpp
int hola[3];
```

Para acceder a cada una de las variables del arreglo lo que hacemos es usar el nombre del arreglo y entre corchetes la posición. Por tanto, si queremos usar la variable en la posición $0$ haríamos

```cpp
hola[0];
```

Y esta es una variable entera que podemos hacer con ella exactamente lo mismo que con cualquier otra variable entera.

```cpp
cin >> hola[0];
c = a + hola[0];
hola[0] += 2;
cout << hola[0];
```

Entonces, podemos remplazar `a` con `hola[0]` a `b` con `hola[1]` y `c` con `hola[2]`. Obteniendo el siguiente resultado.

```cpp
#include <bits/stdc++.h>
using namespace std;

int hola[3];

int main() {
    cin >> hola[0] >> hola[1];
    hola[2] = hola[0] + hola[1];
    cout << hola[2];
    return 0;
}
```

**Nota importante:** Es muy muy importante darse cuenta de que la forma de *declarar* un arreglo es muy distinto a como lo *usamos*. Una variable típicamente le ponemos un nombre y la usamos con ese nombre en el código. Un arreglo **lo declaramos con su tamaño** pero al momento de **usarlo accedemos a sus posiciones**.

Otro punto importante por mencionar es que el arreglo inicia en $0$ y tamaño que tiene es aquel que declaramos al inicio. Por lo que, las posiciones a las que podemos acceder son desde $0$ hasta $N-1$ donde $N$ es la longitud del arreglo. Es decir, en nuestro ejemplo anterior no podemos usar `hola[3]` ya que esa posición no existe. Si lo hacemos el código dará un error de ejecución. Tampoco podemos hacer `hola[-1]` por la misma razón.

Es muy importante asegurar que siempre estemos accediendo a posiciones validas del arreglo de caso contrario nos dará un error de ejecución.

# Variables en las posiciones

Muy bien, tenemos una forma de declarar $100$ variables sin tener la necesidad de declarar una por una. Pero ahora surge el problema de como rayos usarlas dentro del código. Imagina tener que leer las $100$ variables.

```cpp
cin >> hola[0] >> hola[1] >> hola[2] >> hola[3] >> hola[4] >> hola[5] ...;
```

Seamos honestos, hasta parece ridículo hacer algo así. La ventaja de los arreglos es que si bien debe ir un numero entero dentro de la posición. Este número no debe ser necesariamente una constante. Podemos tener una variable entera como la posición del arreglo.

```cpp
int a;
...
a = 0;
hola[a + 2] = hola[a] + hola[a + 1];
a += 2;
cout << hola[a];
```

Esto la ventaja que nos da es que podemos utilizar variables para irnos moviendo a lo largo del arreglo. De esta forma podemos leer todo un arreglo usando una variable. Bien podemos hacer algo como

```cpp
a = 0;
cin >> hola[a];
a++:
cin >> hola[a];
a++:
cin >> hola[a];
a++:
cin >> hola[a];
a++:
cin >> hola[a];
a++:
cin >> hola[a];
...
```

Pero nosotros somos más inteligentes que eso y ya hemos visto una herramienta que nos permite hacer esto de una forma mucha más conveniente.

```cpp
for (int i = 0; i < 100; i++) {
    cin >> hola[i];
}
```

¡Justamente! Podemos usar un ciclo `for` donde la variable `i` lo que hace es pasar todos los números desde $0$ hasta $N - 1$. Aprovechamos ese iterador para recorrer todo el arreglo y de esta forma en cada vuelta del ciclo leemos un numero nuevo y lo guardamos en una posición distinta.

# Invirtiendo el arreglo 

Resolviendo el problema planteado al inicio, podemos hacer uso de los arreglos para esto. 

Lo primero que debemos pensar es la longitud que debe tener nuestro arreglo. De antemano no sabemos en realidad cuantos números se nos van a dar, eso es una variable $N$. Pero si nos fijamos en los limites vemos que a lo más son $100$ números los que nos darán. Por lo que podemos declarar un arreglo de esa longitud y en los casos donde tengamos solo $5$ números, por ejemplo, simplemente no haremos uso de todo el arreglo y solo usaremos las primeras $5$ posiciones.

```cpp
int N;
int arr[100];
```

Suelo llamar los arreglos como `arr` o `ar` pero eso ya es decisión propia. Ahora debemos leer $N$ y los $N$ números. Para eso bastan usar el siguiente ciclo como vimos antes.

```cpp
cin >> N;

for (int i = 0; i < N; i++) {
    cin >> arr[i];
}
```

Ahora solo falta invertirlo, o, mejor dicho, imprimirlo de forma inversa. Podemos cumplir esta tarea sin la necesidad de modificar el arreglo que tenemos. Para esto solo debemos invertir el ciclo, en lugar de ir desde $0$ hasta $N-1$, vamos en el orden inverso.

```cpp
for (int i = N-1; i >= 0; i--) {
    cout << arr[i] << " ";
}
```

Nota que debemos imprimir el espacio para que no salgan todos los números juntos. Y todo el código nos quedará como sigue.

```cpp
#include <bits/stdc++.h>
using namespace std;

int N, arr[100];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    for (int i = N-1; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    return 0;
}
```

*Ligera nota:* El optimizador solo reluce cuando debemos leer y enviar muchos datos. Para problemas donde esto suceda no es necesario. Es por eso que en los códigos anteriores no se puso, pero en este sí.

# Limites

Como todo en este ámbito, tenemos limites en los arreglos. No podemos hacer un arreglo de la longitud que nosotros queramos. Por ejemplo,

```cpp
int hola[1000000000000];
```

muy probablemente de un error. La capacidad de un arreglo depende de las limitaciones que el propio compilador impone y las que tiene implementadas el evaluador. Como regla general, intentemos que la dimensión (tamaño) no se pase de $10^6$. Aunque en realidad, tengamos en mente el límite $10^7$. Esto quiere decir que siempre intentemos que nuestros arreglos sean a lo más $10^6$ pero si para un problema requerimos $3 \times 10^6$ pues lo podemos hacer. Es decir $10^6$ sería como un límite con cierta flexibilidad para ciertos problemas.

---
# Problema

Se te dará un arreglo de $N$ números y deberás imprimir primero aquellos que se encuentren en posiciones pares y luego en otra línea los que se encuentran en posiciones impares.

# Entrada

Un entero $N$ indicando la cantidad de números. En la siguiente línea $N$ números indicando el elemento $x_i$ del arreglo.

# Salida

La salida consiste en dos líneas de números. La primera línea consiste en aquellos elementos que se encuentren en **posiciones pares**. La segunda línea los elementos en **posiciones impares**. Ambas listas con el orden en el que aparecen en el arreglo original.

# Ejemplo

||input
6
4 2 1 3 6 5
||output
4 1 6
2 3 5
||description
El $4$ se encuentra en la posición $0$. El $1$ en la posición $2$. El $6$ en la posición $4$. Por tanto, la primera línea consiste en los numero en las posiciones pares en el orden del arreglo original.

Para la segunda línea sucede lo mismo, pero para las posiciones impares
||input
4
1 2 3 4
||output
1 3
2 4
||input
5
2 1 4 3 6
||output
2 4 6
1 3
||end

# Limites

- $0 < N \leq 100$
- $0 < x_i \leq 1000$

---

# Atajos

Al igual que las variables, podemos declarar múltiples arreglos solo con una palabra clave (tipo de variable).

```cpp
int hola[10], mundo[100];
```

Incluso podemos declarar arreglos y variables en conjunto.

```cpp
int Hola[100], a, b, Mundo[10];
```

Sin embargo, por cuestiones de estilo preferimos que los arreglos se declaran en una línea distinta que las variables.
