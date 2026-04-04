# Checando configuraciones

Una opción es verificar las 6 posibles ordenaciones. Para saber si el orden es $a$, $b$, $c$ basta verificar `a <= b && b <= c` (no hace falta comparar `a` con `c` por transitividad).

```cpp
#include <bits/stdc++.h>
using namespace std;

int a, b, c;

int main() {
    cin >> a >> b >> c;

    if (a <= b && b <= c) {
        cout << a << " " << b << " " << c;
    } else if (a <= c && c <= b) {
        cout << a << " " << c << " " << b;
    } else if (b <= a && a <= c) {
        cout << b << " " << a << " " << c;
    } else if (b <= c && c <= a) {
        cout << b << " " << c << " " << a;
    } else if (c <= a && a <= b) {
        cout << c << " " << a << " " << b;
    } else {
        cout << c << " " << b << " " << a;
    }

    return 0;
}
```

# Ordenando con intercambios

Otra estrategia es intercambiar variables hasta dejarlas ordenadas. Para intercambiar `a` y `b` se usa una variable auxiliar:

```cpp
aux = a;
a = b;
b = aux;
```

Primero dejamos el menor valor en `a` comparándolo con `b` y luego con `c`. Al final, `b` y `c` pueden aún estar desordenados, así que hacemos un último intercambio si es necesario.

```cpp
#include <bits/stdc++.h>
using namespace std;

int a, b, c, aux;

int main() {
    cin >> a >> b >> c;

    if (a > b) {
        aux = a;
        a = b;
        b = aux;
    }
    if (a > c) {
        aux = a;
        a = c;
        c = aux;
    }
    // En este punto a tiene el menor valor.
    // Falta ordenar b y c entre sí.
    if (b > c) {
        aux = b;
        b = c;
        c = aux;
    }

    cout << a << " " << b << " " << c;

    return 0;
}
```
