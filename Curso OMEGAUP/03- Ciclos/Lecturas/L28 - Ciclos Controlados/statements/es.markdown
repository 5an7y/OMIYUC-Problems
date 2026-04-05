*Esta es una* ***lectura*** *diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.*

# Repetir una acción N veces

¿Cómo imprimes "Hola Mundo!" 100 veces? Podrías escribir `cout` 100 veces... pero eso no es programar, es copiar. La solución es un ciclo que cuente las vueltas.

La idea: llevar una variable `i` que empiece en `0` y aumente en `1` cada vuelta. Cuando llega a `100`, paramos.

```cpp
int i = 0;
while (i < 100) {
    cout << "Hola Mundo!\n";
    i++;
}
```

Esto funciona. Pero es tan común necesitar este patrón (variable que cuenta, condición, aumento) que C++ tiene una sintaxis más compacta para escribirlo todo en un lugar.

# For

La clausula `for` permite poner el inicio de la variable, la condición y el incremento en una sola línea:

```cpp
for (declaracion; condicion; operacion) {
    codigo
}
```

El ejemplo anterior queda así:

```cpp
for (int i = 0; i < 100; i++) {
    cout << "Hola Mundo!\n";
}
```

Si en lugar de `100` quieres ejecutarlo `N` veces (donde `N` es una variable), simplemente la pones ahí:

```cpp
for (int i = 0; i < N; i++) {
    cout << "Hola Mundo!\n";
}
```

Además, la variable `i` está disponible dentro del ciclo — puedes usarla para saber en qué vuelta vas:

```cpp
for (int i = 0; i < N; i++) {
    cout << "Iteracion " << i << "\n";
}
```

# Localidad de las variables

La variable `i` que declaras en el `for` solo existe **dentro** de ese ciclo. Cuando termina, desaparece. Por eso si tienes dos ciclos seguidos, debes declarar `i` en cada uno:

```cpp
for (int i = 0; i < 100; i++) {
    cout << "Hola\n";
}

for (int i = 0; i < 100; i++) {
    cout << "Mundo\n";
}
```

Esto también aplica cuando tienes ciclos anidados (un `for` dentro de otro). Las dos variables deben tener nombres distintos — por convención se usa `i` para el externo y `j` para el interno. Esto lo veremos en detalle en la siguiente lectura.

El programa completo que imprime `N` veces "Hola Mundo!" sería:

```cpp
#include <bits/stdc++.h>
using namespace std;

int N;

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cout << "Hola Mundo!\n";
    }
    return 0;
}
```
