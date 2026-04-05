# Solución

Patrón de multi entrada/salida: leer cada número, imprimirlo procesado, y pasar al siguiente. El valor absoluto de $x$ es $-x$ cuando $x$ es negativo, y $x$ en caso contrario.

```cpp
#include <bits/stdc++.h>
using namespace std;

int N, x;

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> x;
        if (x < 0) {
            x = -x;
        }
        cout << x << '\n';
    }
    return 0;
}
```
