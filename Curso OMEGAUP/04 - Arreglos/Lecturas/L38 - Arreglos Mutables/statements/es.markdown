# Los arreglos pueden cambiar

Hasta ahora llenabas el arreglo y lo imprimías tal como estaba. Pero los valores de un arreglo se pueden **modificar** después de leerlos — exactamente igual que cualquier variable normal.

```cpp
arr[2] = 100;           // reemplazar el valor en la posición 2 por 100
arr[i] = arr[i] + 5;   // sumarle 5 al valor en la posición i
arr[i] += 5;            // lo mismo, forma corta
```

Cuando después imprimas `arr[i]`, verás el valor nuevo, no el original.

# Problema de ejemplo: Subiendo puntos

Imagina que tienes $N$ calificaciones. El maestro decide aplicar el siguiente ajuste: cada alumno que esté **por debajo del promedio** recibe 5 puntos extra. Después del ajuste, ¿cuáles calificaciones siguen siendo menores a 60?

Por ejemplo, si las calificaciones son `70 50 80 40 60` y el promedio es 60:
- El 50 está por debajo del promedio → se convierte en 55.
- El 40 está por debajo del promedio → se convierte en 45.
- Los demás no cambian.
- Después del ajuste: `70 55 80 45 60`. Los que siguen bajo 60: `55` y `45`.

# Cómo resolverlo

Este problema tiene tres etapas que van una después de la otra:

**Etapa 1:** Leer todas las calificaciones y calcular el promedio.

Necesitas leerlas todas primero porque el promedio depende de todos los datos. El promedio es `suma / N`, redondeado hacia abajo.

**Etapa 2:** Recorrer el arreglo y modificar los que estén bajo el promedio.

```cpp
for (int i = 0; i < N; i++) {
    if (arr[i] < prom) arr[i] += 5;
}
```

Esto actualiza los valores dentro del arreglo. Cuando el ciclo termina, el arreglo ya tiene los valores ajustados.

**Etapa 3:** Recorrer el arreglo (ya modificado) e imprimir los menores a 60.

```cpp
for (int i = 0; i < N; i++) {
    if (arr[i] < 60) cout << arr[i] << " ";
}
```

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
    int prom = suma / N;   // redondeado hacia abajo

    for (int i = 0; i < N; i++) {
        if (arr[i] < prom) arr[i] += 5;
    }

    for (int i = 0; i < N; i++) {
        if (arr[i] < 60) cout << arr[i] << " ";
    }

    return 0;
}
```
