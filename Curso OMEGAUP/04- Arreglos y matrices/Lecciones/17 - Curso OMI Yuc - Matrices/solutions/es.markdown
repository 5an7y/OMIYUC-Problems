Es una solución bastante similar a la de invertir de forma horizontal pero el ciclo que toca invertir es el que recorre la matriz de forma vertical.

```cpp
#include <bits/stdc++.h>
using namespace std;

int N, M;
int mat[100][100];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> mat[i][j];
        }
    }

    // Este es ciclo que invertimos
    for (int i = N - 1; i >= 0; i--) {
        for (int j = 0; j < M; j++) {
            cout << mat[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}
```
