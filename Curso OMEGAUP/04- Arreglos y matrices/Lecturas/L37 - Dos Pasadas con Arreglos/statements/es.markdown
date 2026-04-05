# ¿Cuándo no basta con una pasada?

En la lección anterior separaste canciones según un umbral $K$ que venía directo del input. Fácil — lees $K$, lees el arreglo, y haces dos pasadas sobre él.

Pero imagina este nuevo problema:

> Se te dan $N$ calificaciones. Separa las que están **por encima del promedio** de las que están **igual o por debajo**.

El truco aquí es que para saber qué calificaciones están por encima del promedio, primero **necesitas calcular el promedio**. Y para calcular el promedio, necesitas leer todas las calificaciones. Pero si las lees, tienes que guardarlas (si no, cuando quieras clasificarlas ya las olvidaste).

Eso lleva a un patrón muy común: **dos pasadas**.

# El patrón

```
Pasada 1: leer todo el arreglo y calcular algo (suma, máximo, etc.)
Pasada 2: recorrer el arreglo usando ese resultado
```

```cpp
// Pasada 1: leer y acumular
int suma = 0;
for (int i = 0; i < N; i++) {
    cin >> arr[i];
    suma += arr[i];
}

// Calcular el umbral
int promedio = suma / N;

// Pasada 2: clasificar
for (int i = 0; i < N; i++) {
    if (arr[i] > promedio) {
        cout << arr[i] << " ";
    }
}
```

# División entera

`suma / N` en C++ hace **división entera**: el resultado es siempre un entero y se trunca el decimal.

- `7 / 2` da `3` (no `3.5`)
- `10 / 3` da `3` (no `3.33...`)

Para el promedio de calificaciones eso es exactamente lo que queremos — el `floor` del promedio real. No tienes que hacer nada especial, C++ lo hace automáticamente cuando divides dos enteros.

# Código completo

```cpp
#include <bits/stdc++.h>
using namespace std;

int N, arr[100];

int main() {
    int suma = 0;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        suma += arr[i];
    }

    int promedio = suma / N;

    // Por encima del promedio
    for (int i = 0; i < N; i++) {
        if (arr[i] > promedio) cout << arr[i] << " ";
    }
    cout << '\n';

    // Igual o por debajo
    for (int i = 0; i < N; i++) {
        if (arr[i] <= promedio) cout << arr[i] << " ";
    }

    return 0;
}
```

Este patrón aparece muchísimo en programación competitiva. Cada vez que el resultado de procesar los datos depende de información que solo tienes cuando los lees todos, necesitas dos pasadas.
