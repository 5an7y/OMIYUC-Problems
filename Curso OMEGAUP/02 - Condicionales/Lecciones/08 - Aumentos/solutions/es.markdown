# Solución

Verificamos primero los años trabajados y, dentro de cada caso, la calificación. Como el salario siempre es múltiplo de 10, la división entera no genera errores de redondeo.

```cpp
#include <bits/stdc++.h>
using namespace std;

int salario, tiempo, calificacion;
int ganancia;

int main() {
    cin >> salario >> tiempo >> calificacion;

    if (tiempo < 5) {
        if (calificacion < 70) {
            ganancia = 0;
        } else {
            ganancia = salario / 10;
        }
    } else {
        if (calificacion < 60) {
            ganancia = salario / 10 * 2;
        } else {
            ganancia = salario / 10 * 3;
        }
    }

    salario += ganancia;

    cout << salario;
    return 0;
}
```
