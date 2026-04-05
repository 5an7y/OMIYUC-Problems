# Solución

Un contador que empieza en 0. Se leen los 10 números en un `for` fijo y se incrementa el contador si el número es menor a $K$.

```cpp
#include <bits/stdc++.h>
using namespace std;

int K, x, cuenta;

int main() {
    cin >> K;
    cuenta = 0;
    for (int i = 0; i < 10; i++) {
        cin >> x;
        if (x < K) {
            cuenta++;
        }
    }
    cout << cuenta;
    return 0;
}
```
