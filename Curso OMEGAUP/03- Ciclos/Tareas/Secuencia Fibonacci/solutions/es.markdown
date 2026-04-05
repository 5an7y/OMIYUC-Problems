Podemos obtener los primeros dos números y luego ir generando los siguientes con esos y siempre ir reemplazando los dos últimos hasta obtener el elemento que deseamos.

Ojo los números pueden ser muy grandes. Por esta razón necesitaremos usar `long long`.

```cpp
#include <bits/stdc++.h>
using namespace std;

int N;
long long ant1, ant2, act;

int main() {
    // El optimizador aqui es precindible ya que solo leemos e imprimimos un numero.
    ios_base::sync_with_stdio(0); cin.tie(0); 
    cin >> N;

    if (N == 1) {
        cout << 0;
        return 0;
    }
    if (N == 2) {
        cout << 1;
        return 0;
    }

    ant1 = 0;
    ant2 = 1;

    for (int i = 0; i < N - 2; i++) {
        act = ant1 + ant2;
        ant1 = ant2;
        ant2 = act;
    }

    cout << act;
    return 0;
}
```
