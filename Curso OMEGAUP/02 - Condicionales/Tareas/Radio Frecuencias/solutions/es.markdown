# Solución

En lugar de pensar cuándo se traslapan, es más fácil pensar cuándo **no** se traslapan. Dos intervalos no se traslapan solo cuando uno termina antes de que el otro empiece. Eso ocurre cuando `b < c` (MCU termina antes de que DC empiece) o `d < a` (DC termina antes de que MCU empiece).

Si ninguna de esas dos condiciones se cumple, los intervalos sí se traslapan.

```cpp
#include <bits/stdc++.h>
using namespace std;

int a, b, c, d;

int main() {
    cin >> a >> b >> c >> d;

    if (b < c || d < a) {
        cout << "No";
    } else {
        cout << "Si";
    }

    return 0;
}
```
