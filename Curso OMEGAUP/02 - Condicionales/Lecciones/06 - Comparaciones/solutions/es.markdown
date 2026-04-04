# Solución directa

Los `if`s seguidos se ejecutan uno tras otro sin importar si el anterior se cumplió o no. Entonces, revisamos cada comparación por separado y, si se cumple, imprimimos el mensaje correspondiente. Lo único que hay que cuidar es mantener el orden de la lista.

```cpp
#include <bits/stdc++.h>
using namespace std;

int a, b;

int main() {
    cin >> a >> b;

    if (a > b) {
        cout << "a es mayor que b\n";
    }
    if (a < b) {
        cout << "a es menor que b\n";
    }
    if (a >= b) {
        cout << "a es mayor o igual que b\n";
    }
    if (a <= b) {
        cout << "a es menor o igual que b\n";
    }
    if (a == b) {
        cout << "a es igual que b\n";
    }
    if (a != b) {
        cout << "a es diferente que b\n";
    }

    return 0;
}
```

# Solución corta

En realidad solo hay 3 casos posibles: $a > b$, $a < b$ o $a = b$. Para cada caso sabemos exactamente qué mensajes aplican, así que podemos imprimirlos directamente sin revisar condición por condición.

```cpp
#include <bits/stdc++.h>
using namespace std;

int a, b;

int main() {
    cin >> a >> b;

    if (a > b) {
        cout << "a es mayor que b\n";
        cout << "a es mayor o igual que b\n";
        cout << "a es diferente que b\n";
    } else if (a < b) {
        cout << "a es menor que b\n";
        cout << "a es menor o igual que b\n";
        cout << "a es diferente que b\n";
    } else {
        cout << "a es mayor o igual que b\n";
        cout << "a es menor o igual que b\n";
        cout << "a es igual que b\n";
    }

    return 0;
}
```
