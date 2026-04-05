Para obtener el valor absoluto de un numero basta con verificar si es negativo. Si es así podemos multiplicarlo por $-1$ y así le quitamos el signo.

```cpp
if (x < 0) {
    x *= -1; // Lo mismo que poner x = -x;
}
cout << x;
```

Podemos usar la misma lógica que nos dan para elevar al cuadrado, pero ahora cambiando *elevar al cuadrado* con *obtener el valor absoluto*. Y nos queda el siguiente código.

```cpp
#include <bits/stdc++.h>
using namespace std;

int N, x;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x;
        if (x < 0) {
            x *= -1;
        }
        cout << x << " ";
    }
    return 0;
}
```
