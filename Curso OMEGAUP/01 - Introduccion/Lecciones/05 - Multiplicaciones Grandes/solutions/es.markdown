El resultado de multiplicar dos números de hasta $100{,}000$ puede llegar a $10{,}000{,}000{,}000$ (diez mil millones). Ese valor supera el límite de `int` ($\approx 2 \times 10^9$), así que necesitamos declarar las variables como `long long`.

```cpp
#include <bits/stdc++.h>
using namespace std;

long long a, b;

int main() {
    cin >> a >> b;
    cout << a * b;
    return 0;
}
```

Un error común es declarar `a` y `b` como `int` y hacer la multiplicación — el resultado desborda y da un número incorrecto. La clave es que si las variables ya son `long long` desde el inicio, la multiplicación también se hace en `long long`.
