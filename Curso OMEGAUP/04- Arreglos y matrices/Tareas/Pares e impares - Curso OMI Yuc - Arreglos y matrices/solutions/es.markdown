Para solucionar este problema podemos recorrer el arreglo dos veces, en una sacamos los pares y en otro los impares.

```cpp
#include <bits/stdc++.h>
using namespace std;

int N, ar[100000];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> ar[i];
    }

    // Imprimimos los pares
    for (int i = 0; i < N; i++) {
        if (ar[i] % 2 == 0) {
            cout << ar[i] << " ";
        }
    }

    // Imprimimos los impares
    for (int i = 0; i < N; i++) {
        if (ar[i] % 2 == 1) {
            cout << ar[i] << " ";
        }
    }

    return 0;
}
```