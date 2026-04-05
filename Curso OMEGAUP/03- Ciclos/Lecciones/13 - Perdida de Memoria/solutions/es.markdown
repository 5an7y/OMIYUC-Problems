En este caso leemos ambas variables tanto $N$ y $K$. Llevaremos una variable que nos diga cuantos números son menores a $K$, al inicio esa variable es 0. Luego cada que leamos un número y este sea menor a $K$ aumentamos en $1$ la variable. Por lo tanto, el código queda como el siguiente.

```cpp
#include <bits/stdc++.h>
using namespace std;

int N, K, menores_k, x;

int main() {
    cin >> N >> K;

    menores_k = 0;
    for (int i = 0; i < N; i++) {
        cin >> x;
        if (x < K)
            menores_k++;
    }

    cout << menores_k;

    return 0;
}
```
