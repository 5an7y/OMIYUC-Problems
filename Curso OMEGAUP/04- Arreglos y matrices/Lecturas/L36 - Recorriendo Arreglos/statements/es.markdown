# El patrón clave

Ya sabes declarar arreglos y acceder a sus posiciones. El truco que los hace realmente útiles es combinarlos con un ciclo `for`. La posición del arreglo es justo la variable que el `for` incrementa en cada vuelta.

Para leer $N$ números en un arreglo:

```cpp
for (int i = 0; i < N; i++) {
    cin >> arr[i];
}
```

En la primera vuelta `i = 0`, lee en `arr[0]`. En la segunda `i = 1`, lee en `arr[1]`. Y así hasta `arr[N-1]`. Un ciclo reemplaza las 100 líneas que veíamos antes.

Para imprimirlos en el mismo orden:

```cpp
for (int i = 0; i < N; i++) {
    cout << arr[i] << " ";
}
```

# La gran revelación

¿Recuerdas el problema de L34? "Imprime los N números en el orden inverso." Ahora lo puedes resolver: lee todo en el arreglo y luego recórrelo de atrás hacia adelante.

```cpp
for (int i = N - 1; i >= 0; i--) {
    cout << arr[i] << " ";
}
```

El ciclo empieza en `N-1` (la última posición), y en cada vuelta reduce `i` en uno hasta llegar a `0`.

# Código completo

```cpp
#include <bits/stdc++.h>
using namespace std;

int N, arr[100];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    for (int i = N - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    return 0;
}
```

Con 5 líneas de lógica resolvemos lo que antes requería 200.

# Error común

Escribir `i <= N` en vez de `i < N`:

```cpp
for (int i = 0; i <= N; i++) {  // ¡mal!
    cin >> arr[i];
}
```

Cuando `i == N`, estás accediendo a `arr[N]` — una posición que no existe. Esto puede causar errores de ejecución o respuestas incorrectas silenciosas. Usa siempre `i < N`.
