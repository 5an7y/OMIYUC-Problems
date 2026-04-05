# Solución

Leer $N$, luego recorrer las alturas con un `for` llevando la mayor vista hasta ahora.

```cpp
#include <bits/stdc++.h>
using namespace std;

int N, h, mayor;

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> h;
        if (h > mayor || i == 0) {
            mayor = h;
        }
    }
    cout << mayor;
    return 0;
}
```
