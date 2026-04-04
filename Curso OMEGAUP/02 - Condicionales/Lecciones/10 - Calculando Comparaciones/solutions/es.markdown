# Solución

Usamos un `switch` para identificar la opción y el operador ternario para calcular el mayor o menor según corresponda.

```cpp
#include <bits/stdc++.h>
using namespace std;

int opcion, a, b, respuesta, suma, resta;

int main() {
    cin >> opcion >> a >> b;

    suma = a + b;
    resta = a - b;

    switch (opcion) {
        case 1:
            respuesta = a > b ? a : b;
            break;
        case 2:
            respuesta = a < b ? a : b;
            break;
        case 3:
            respuesta = suma < resta ? suma : resta;
            break;
        case 4:
            respuesta = suma > resta ? suma : resta;
            break;
    }

    cout << respuesta;
    return 0;
}
```
