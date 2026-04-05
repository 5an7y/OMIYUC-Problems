Tenemos $N$ matrices de $M \times M$, entonces podemos guardar esta información en una matriz de $N \times M \times M$. Podemos ver los límites del problema y declarar

```cpp
int matrices[10][20][20];
```

Entonces, podemos leer las matrices con el siguiente ciclo.

```cpp
cin >> N >> M;
for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
        for (int k = 0; k < M; k++) {
            cin >> matrices[i][j][k];
        }
    }
}
```

Nota que el primer ciclo sirve para iterar sobre las $N$ matrices y los otros dos ciclos para leer cada matriz.

Finalmente, primero hacemos un ciclo que imprima las que tiene la primera entrada par.

```cpp
for (int i = 0; i < N; i++) {
    if (matrices[i][0][0] % 2 == 0) { // Si el primer elemento es par
        for (int j = 0; j < M; j++) {
            for (int k = 0; k < M; k++) {
                cout << matrices[i][j][k] << " ";
            }
            cout << "\n";
        }
        cout << "\n";
    }
}
```

Podemos hacer lo mismo para los impares y obtenemos el código completo.

```cpp
#include <bits/stdc++.h>
using namespace std;

int N, M;
int matrices[10][20][20];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            for (int k = 0; k < M; k++) {
                cin >> matrices[i][j][k];
            }
        }
    }

    for (int i = 0; i < N; i++) {
        if (matrices[i][0][0] % 2 == 0) { // Si el primer elemento es par
            for (int j = 0; j < M; j++) {
                for (int k = 0; k < M; k++) {
                    cout << matrices[i][j][k] << " ";
                }
                cout << "\n";
            }
            cout << "\n";
        }
    }

    for (int i = 0; i < N; i++) {
        if (matrices[i][0][0] % 2 == 1) { // Si el primer elemento es impar
            for (int j = 0; j < M; j++) {
                for (int k = 0; k < M; k++) {
                    cout << matrices[i][j][k] << " ";
                }
                cout << "\n";
            }
            cout << "\n";
        }
    }
    return 0;
}
```
