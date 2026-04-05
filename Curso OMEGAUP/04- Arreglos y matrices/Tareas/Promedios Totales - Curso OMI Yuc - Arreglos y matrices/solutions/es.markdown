Recordemos que el promedio es la suma de las calificaciones entre el número total. Entonces, para cada columna basta primero calcular la suma de los elementos y luego dividirlo entre el total de materias $N$. Además como el promedio se redondea hacia abajo, nos basta usar la división entera para esto.

```cpp
#include <bits/stdc++.h>
using namespace std;

int N, M, mat[1000][1000], suma, promedio;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> mat[i][j];
        }
    }

    
    for (int j = 0; j < M; j++) {
        suma = 0;
        for (int i = 0; i < N; i++) {
            suma += mat[i][j];
        }

        promedio = suma / N;
        cout << promedio << " ";
    }

    return 0;
}
```