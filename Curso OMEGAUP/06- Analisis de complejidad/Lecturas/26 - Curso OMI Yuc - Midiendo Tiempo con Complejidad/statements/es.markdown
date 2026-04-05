**Este problema es una lección diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.**

Fecha de creación: 2 de noviembre de 2023.

# Midiendo el tiempo

El análisis de complejidad no es una ciencia exacta, como podemos notar. Los códigos

```cpp
for (int i = 0; i < N*N; i++) {
    r++;
}
```

```cpp
for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
        if (mat[i][j] % 4 == 0) {
            mat[i][j] += i * j;
            mat[i][j] *= 2;
        } else if (mat[i][j] % 4 == 1) {
            mat[i][j] += (N - i) * j;
            mat[i][j] *= 5;
        } else if (mat[i][j] % 4 == 2) {
            mat[i][j] += i * (N - j);
            mat[i][j] *= 3;
        } else {
            mat[i][j] += (N - i) * (N - j);
            mat[i][j] *= 4;
        }
    }
}
```

tienen la misma complejidad $O(N^2)$. Sin embargo, a simple vista podemos notar que el primer código se va a ejecutar mucho más rápido, ya que en realidad está haciendo más operaciones.

Uno a este punto se pregunta ¿De qué sirve todo esto que estamos aprendiendo? Lo bueno del análisis de complejidades es que nos da una idea bastante buena para saber si nuestra solución a un problema entra en el tiempo que nos dan, y la regla resulta bastante sencilla. Digamos que tenemos un algoritmo con complejidad $O(f(E))$ donde $E$ son todas las variables de entrada. Resulta que una buena aproximación se basa en que si $f(E) = 10^8$, entonces tu algoritmo corre en $1$ segundo. Por ejemplo, si tengo un código con complejidad $O(N^2)$ y $N$ vale $10^4$, entonces nuestro código seguro entra en $1$ segundo.

# Deducir la Complejidad por los Límites

La siguiente pregunta natural es ¿cómo sé qué valor darle a $N? y es allí donde entran en juego los límites de los problemas. Hasta ahora hemos visto los límites simplemente como una forma de determinar el tamaño de nuestros arreglos y el tipo de variables que vamos a utilizar. Pero además de eso, los límites nos sirven para determinar si nuestra solución es lo suficientemente eficaz para resolver el problema en el tiempo que nos dan.

Normalmente en el apartado de límites tenemos algo como $1 \leq N \leq 10^6$. Entonces, nosotros vamos a evaluar $N$ **en el peor caso posible**, el cual en la mayoría de los casos suele ser el valor más grande que $N$ puede tomar. Digamos que nuestra solución es $O(N \log N)$ y nos dicen que $1 \leq N \leq 1000$, entonces si nosotros evaluamos

$$
N \log N = 1000 \times \log (1000) \approx 10^4 < 10^8.
$$

entonces nuestra solución entra en el tiempo que nos piden.

No obstante, podemos verlo al revés, lo cual resulta aún más interesante. Imagina que los límites del problema son $1 \leq N \leq 10^3$, entonces sabemos que una complejidad de $O(N^2 \log N)$ **o menor** entraría en tiempo. Entonces cosas de $O(N), O(N \log N), O(N^2)$ serían igual soluciones válidas, pero $O(N^3), O(N^2 \sqrt{N}), O(2^N)$ ya no son soluciones válidas. Por lo que podemos deducir la complejidad que queremos por medio de los límites igual.

Como decimos, esto no es una ciencia exacta y a veces al calcular complejidades puede que te dé muy justo en tiempo y cuando envías tu solución no es la correcta por detalles de implementación. Igual puede ser que el resultado de evaluar tu complejidad te dé algo como $3 \times 10^8$, lo cual sigue siendo razonable y es probable que la solución te dé.

# Complejidades Comunes

A continuación presentamos una tabla con complejidades comunes y su máximo valor de entrada que soportan.

| Complejidad $O(f(N))$ | Máximo valor de $N$ para $1$ segundo (aproximado) |
| --- | --- |
| $O(1)$ | $\infty$ |
| $O(\log N)$ | $2^{10^8}$ |
| $O(\sqrt{N})$ | $10^{16}$ |
| $O(N)$ | $10^{8}$ |
| $O(N \log N)$ | $10^{6}$ |
| $O(N \sqrt{N})$ | $10^{5}$ |
| $O(N^2)$ | $10^{4}$ |
| $O(N^3)$ | $500$ |
| $O(2^N)$ | $26$ |
| $O(N!)$ | $11$ |