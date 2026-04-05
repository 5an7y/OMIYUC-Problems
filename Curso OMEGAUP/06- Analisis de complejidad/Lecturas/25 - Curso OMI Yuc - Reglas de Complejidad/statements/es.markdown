**Este problema es una lección diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.**

Fecha de creación: 2 de noviembre de 2023.

# Introducción

Dentro del análisis de complejidad tenemos ciertas reglas que nos facilitan el cálculo de las mismas.

# Regla de la multiplicación por constantes

Si tenemos un algoritmo que tarda $O(X)$ y dentro de él se ejecutan $O(C)$ operaciones donde $C$ es una constante, el algoritmo resultante es de complejidad $O(X).

Piensa en el siguiente código.

```cpp
cin >> N;
for (int i = 0; i < N; i++) {
    for (int j = 0; j < 10; j++) {
        r++;
    }
```

Uno podría pensar que este código tiene complejidad $O(10N)$, pero aplicando la regla anterior nos queda que la complejidad en realidad es $O(N)$. Lo cual tiene sentido ya que el código anterior es equivalente a algo como

```cpp
cin >> N;
for (int i = 0; i < N; i++) {
    int j = 0;
    r++; j++;
    r++; j++;
    r++; j++;
    r++; j++;
    r++; j++;
    r++; j++;
    r++; j++;
    r++; j++;
    r++; j++;
    r++; j++;
}
```

Que sabemos que tiene complejidad $O(N)$.

# Regla de la multiplicación

Si tenemos un algoritmo con complejidad $O(X)$ que se ejecuta dentro de otro con complejidad $O(Y)$, entonces la complejidad total del algoritmo es $O(XY)$. Por ejemplo, el siguiente código

```cpp
cin >> N >> M;
for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
        r++;
    }
```

tiene complejidad $O(NM)$. Por otro lado,

```cpp
cin >> N;
con = 0;

for (int i = 0; i < N; i++) {
    int a = N;
    while (a > 0) {
        a /= 2;
        con++;
    }
}
cout << con;
```

tiene complejidad $O(N \log N)$, ya que el ciclo de adentro (el `while`) tiene complejidad $O(\log N)$ pero se hace dentro de un ciclo con complejidad de $O(N)$.

# Regla de la suma

Si tenemos un algoritmo que se ejecuta $O(X)$ y otro que se ejecuta justo después de ese con complejidad $O(Y)$, entonces la complejidad resultante es $O(\max(X, Y))$. Eso implica que si tenemos un código como el siguiente

```cpp
for (int i = 0; i < N; i++) {
    r++;
}
for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
        r += j % 3;
    }
}
```

La complejidad sería $O(N^2)$ en lugar de $O(N + N^2)$, que es lo que uno podría pensar. Esta regla nos permite **enfocarnos en la parte más tardada del algoritmo**. Es decir, al momento de preocuparnos por la complejidad, únicamente debemos ver cuál es la parte que más tarda para poder determinar la complejidad.

Cuando se tienen dos variables de por medio en una suma, es común dejar expresada la complejidad como la suma, entendiendo que en realidad se tomará el de mayor valor. Por ejemplo,

```cpp
for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
        r += j % 3;
    }
    for (int j = 0; j < M; j++) {
        r += j % 27;
    }
}
```

tiene complejidad $O(\max(N^2, NM))$, pero podemos dejarlo expresado como $O(N^2 + NM)$ y sería lo mismo.

# Imaginar el Peor Caso

Siempre que estemos analizando complejidad, hay que imaginarnos que el peor caso siempre es el que sucede. Por ejemplo, si tenemos un código como el siguiente

```cpp
for (int i = 0; i < N; i++) {
    for (int j = 0; j < vec[j] % N; j++) {
        r += vec[i] * j;
    }
}
```

¿Cuál sería su complejidad? Ciertamente el ciclo de afuera tiene una complejidad de $O(N)$, pero el de adentro depende de los valores en el arreglo es lo que va a suceder. Si no tenemos información a priori del arreglo, debemos esperar que suceda el peor de los casos, y eso es que el ciclo se haga $O(N)$ veces. Ya que justamente el valor más grande que puede tomar ese módulo es $N-1$, que en términos de complejidad es $O(N)$. Entonces, en el peor de los casos, este algoritmo es $O(N^2)$.

# Acotando por Arriba

El verdadero significado de la $O$ es mucho más profundo que solo un símbolo para denotar complejidad. En realidad, tiene un significado matemático que lo podemos entender como *$O(f)$: la cantidad de operaciones que hará nuestro código crece a lo más tanto como $f$*. La parte clave de eso es, **a lo más tanto**, esto quiere decir que lo que hacemos en realidad es dar la mejor estimación posible y si nos pasamos por arriba, en realidad seguimos en lo correcto. Por ejemplo,

```cpp
for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
        r += j % 3;
    }
```

Ciertamente el código es $O(N^2)$, sin embargo, no estaríamos mal al decir que igual es $O(N^3)$ o $O(N^{10})$ o $O(2^N)$, ya que todas estas funciones crecen al menos tan rápido como $O(N^2)$. Obviamente, hacer un buen cálculo de complejidad es encontrar la menor función posible (en este caso $O(N^2)$). Pero hay casos donde el cálculo se complica y a veces hay que recurrir a acotar la complejidad por arriba. Por ejemplo, imagina que tenemos el siguiente código.

```cpp
for (int i = 1; i <= N; i++) {
    int a = i;
    while (a > 0) {
        a /= 2;
        r++;
    }
}
```

Intenta calcular la complejidad de eso. Ciertamente no queda una expresión bonita, matemáticamente nos queda algo como

$$
\log (1) + \log (2) + ... + \log (N)
$$

Que en realidad no nos dice mucho para lo que nosotros nos interesa (que es tener una expresión sencilla). Pero nosotros sabemos que 

$$
    \log (a) \leq \log (N)
$$

entonces, no es tan descabellado pensar en tener algo como

$$
\log (1) + \log (2) + ... + \log (N) \leq \log(N) + ... + \log(N) = N \log N.
$$

y por tanto, podemos decir que este algoritmo tiene complejidad $O(N \log N)$, ya que es la mejor cota sencilla que podemos dar.