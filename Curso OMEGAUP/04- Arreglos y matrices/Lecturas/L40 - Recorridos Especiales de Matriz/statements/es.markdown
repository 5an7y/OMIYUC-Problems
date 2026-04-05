# Más formas de recorrer una matriz

El recorrido estándar de una matriz — fila por fila, de izquierda a derecha — no siempre es el que necesitas. Hay dos variaciones que aparecen muy seguido en los problemas.

# Recorrido por columnas

El recorrido estándar tiene el ciclo de **filas afuera** y el de **columnas adentro**. Para recorrer por columnas, simplemente inviertes los roles:

```cpp
// Recorrido estándar (fila por fila)
for (int i = 0; i < N; i++)
    for (int j = 0; j < M; j++)
        cout << mat[i][j] << " ";

// Recorrido por columnas
for (int j = 0; j < M; j++)
    for (int i = 0; i < N; i++)
        cout << mat[i][j] << " ";
```

En el segundo, primero visitas toda la columna 0 (de fila 0 a N-1), luego toda la columna 1, y así.

# Recorrido serpentina

El recorrido serpentina va fila por fila, pero **alternando la dirección**: la fila 0 va de izquierda a derecha, la fila 1 de derecha a izquierda, la fila 2 de izquierda a derecha, etc.

La clave es revisar si la fila es par o impar:

```cpp
for (int i = 0; i < N; i++) {
    if (i % 2 == 0) {
        // Fila par: de izquierda a derecha
        for (int j = 0; j < M; j++) {
            cout << mat[i][j] << " ";
        }
    } else {
        // Fila impar: de derecha a izquierda
        for (int j = M - 1; j >= 0; j--) {
            cout << mat[i][j] << " ";
        }
    }
}
```

Para una matriz de 3×4:

```
1  2  3  4      →  fila 0, izq→der
8  7  6  5      →  fila 1, der→izq
9  10 11 12     →  fila 2, izq→der
```

Salida: `1 2 3 4 8 7 6 5 9 10 11 12`

# Código completo (serpentina)

```cpp
#include <bits/stdc++.h>
using namespace std;

int N, M;
int mat[100][100];

int main() {
    cin >> N >> M;

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> mat[i][j];

    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < M; j++)
                cout << mat[i][j] << " ";
        } else {
            for (int j = M - 1; j >= 0; j--)
                cout << mat[i][j] << " ";
        }
    }

    return 0;
}
```
