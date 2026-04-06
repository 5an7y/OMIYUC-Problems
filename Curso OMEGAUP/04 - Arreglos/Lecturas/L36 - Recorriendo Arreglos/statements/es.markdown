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

# Resolviendo el problema de antes

¿Recuerdas el problema anterior? Había que imprimir primero todos los negativos y luego todos los no-negativos, en el orden en que aparecieron.

Con el arreglo lleno puedes hacerlo con dos recorridos:

```cpp
// Pasada 1: imprimir los negativos
for (int i = 0; i < N; i++) {
    if (arr[i] < 0) cout << arr[i] << " ";
}
cout << '\n';

// Pasada 2: imprimir los no-negativos
for (int i = 0; i < N; i++) {
    if (arr[i] >= 0) cout << arr[i] << " ";
}
```

La clave: el arreglo guarda todos los datos, así puedes recorrerlo cuantas veces necesites.

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

    for (int i = 0; i < N; i++) {
        if (arr[i] < 0) cout << arr[i] << " ";
    }
    cout << '\n';

    for (int i = 0; i < N; i++) {
        if (arr[i] >= 0) cout << arr[i] << " ";
    }

    return 0;
}
```

# Error común

Escribir `i <= N` en vez de `i < N`:

```cpp
for (int i = 0; i <= N; i++) {  // ¡mal!
    cin >> arr[i];
}
```

Cuando `i == N`, estás accediendo a `arr[N]` — una posición que no existe. Esto puede causar errores de ejecución o respuestas incorrectas silenciosas. Usa siempre `i < N`.
