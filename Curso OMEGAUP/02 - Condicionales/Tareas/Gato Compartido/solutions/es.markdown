# Midiendo distancias

Calculamos la distancia del gato a cada casa y comparamos. Dado que el enunciado garantiza $x \leq z \leq y$, las distancias siempre son no negativas. Si las distancias son iguales, el gato va con Santiago, lo que se logra con `<=`.

```cpp
#include <bits/stdc++.h>
using namespace std;

int casaS, casaP, gato, disS, disP;

int main() {
    cin >> casaS >> casaP >> gato;
    disS = gato - casaS;
    disP = casaP - gato;

    if (disS <= disP) {
        cout << "Santiago";
    } else {
        cout << "Paulina";
    }

    return 0;
}
```

# Punto medio

Otra forma es calcular el punto medio entre las dos casas. Si el gato está en el punto medio o antes, va con Santiago; si está después, va con Paulina.

La condición de equidistancia (ir con Santiago) equivale a `2 * gato <= casaS + casaP`. Usando división entera esto es lo mismo que `gato <= (casaS + casaP) / 2`.

```cpp
#include <bits/stdc++.h>
using namespace std;

int casaS, casaP, gato, puntoMedio;

int main() {
    cin >> casaS >> casaP >> gato;
    puntoMedio = (casaS + casaP) / 2;

    if (gato <= puntoMedio) {
        cout << "Santiago";
    } else {
        cout << "Paulina";
    }

    return 0;
}
```
