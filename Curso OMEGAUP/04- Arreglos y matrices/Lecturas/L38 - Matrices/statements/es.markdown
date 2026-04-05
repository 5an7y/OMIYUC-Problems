# De una fila a una tabla

Los arreglos son perfectos para guardar una lista de datos — una dimensión. Pero muchos problemas tienen dos dimensiones: la pantalla de una computadora tiene filas y columnas de píxeles, un tablero de ajedrez tiene casillas en una cuadrícula, una tabla de calificaciones tiene alumnos y materias.

Para eso existen las **matrices** — arreglos de dos dimensiones.

# Declaración

```cpp
int mat[4][7];
```

Esto crea una cuadrícula de 4 filas y 7 columnas: en total $4 \times 7 = 28$ variables enteras.

Para acceder a una variable necesitas dos índices: la **fila** y la **columna**, ambas desde 0.

```cpp
mat[0][0] = 5;    // fila 0, columna 0
mat[2][6] = 10;   // fila 2, columna 6
cout << mat[1][3]; // leer fila 1, columna 3
```

Se lee siempre como `mat[fila][columna]`.

# Leyendo una matriz

Para leer todos los datos de una matriz de $N$ filas y $M$ columnas usas ciclos anidados:

```cpp
for (int i = 0; i < N; i++) {       // recorre filas
    for (int j = 0; j < M; j++) {   // recorre columnas de esa fila
        cin >> mat[i][j];
    }
}
```

La entrada típica de OmegaUp da la matriz fila por fila, y este ciclo la lee en ese mismo orden.

# Imprimiendo una matriz

Para imprimir la matriz igual que la leerías — fila por fila — solo cambias `cin` por `cout` y agregas un salto de línea al terminar cada fila:

```cpp
for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
        cout << mat[i][j] << " ";
    }
    cout << '\n';
}
```

# Código completo

```cpp
#include <bits/stdc++.h>
using namespace std;

int N, M;
int mat[100][100];

int main() {
    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> mat[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << mat[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}
```

# Límites

La regla del arreglo 1D aplica aquí también: el total de variables no debe pasarse de $10^6$. En una matriz eso significa que $N \times M \leq 10^6$. No puedes declarar `int mat[100000][100000]` — eso serían $10^{10}$ variables.

Para este módulo los problemas tienen $N, M \leq 100$, así que `int mat[100][100]` funciona perfecto.
