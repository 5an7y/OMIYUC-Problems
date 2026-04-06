Nos damos cuenta de que las filas pares basta recorrerlas de forma normal, únicamente las impares las recorremos de forma inversa.

```cpp
#include <bits/stdc++.h>
using namespace std;

int N, M, mat[1000][1000];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> mat[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < M; j++) {
                cout << mat[i][j] << " ";
            }
        } else {
            for (int j = M - 1; j >= 0; j--) {
                cout << mat[i][j] << " ";
            }
        }
    }
    
    return 0;
}
```