# Condiciones anidadas

Seguimos exactamente las reglas del enunciado en orden. Recuerda que para verificar si un número es múltiplo de otro usamos `a % b == 0`.

```cpp
#include <bits/stdc++.h>
using namespace std;

int a;

int main() {
    cin >> a;

    if (a % 4 == 0) {
        if (a % 100 == 0) {
            if (a % 400 == 0) {
                cout << "Si";
            } else {
                cout << "No";
            }
        } else {
            cout << "Si";
        }
    } else {
        cout << "No";
    }

    return 0;
}
```

# Propiedades numéricas

Una solución más elegante aprovecha que los múltiplos de 400 ya son múltiplos de 100 y de 4, y los múltiplos de 100 ya son múltiplos de 4. Entonces podemos verificar de mayor a menor directamente con `else if`.

```cpp
#include <bits/stdc++.h>
using namespace std;

int a;

int main() {
    cin >> a;

    if (a % 400 == 0) {
        cout << "Si";
    } else if (a % 100 == 0) {
        cout << "No";
    } else if (a % 4 == 0) {
        cout << "Si";
    } else {
        cout << "No";
    }

    return 0;
}
```
