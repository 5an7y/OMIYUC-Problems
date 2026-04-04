El sistema que manejas de numero es decimal. Esto quiere decir que cada digito representa una potencia de $10$. Por ejemplo, $423 = 4 \times 10^2 + 2 \times 10^1 + 3 \times 10^0$. Entonces las operaciones con $10$ tienen propiedades interesantes. 

- La multiplicamos por $10$ se añade un cero al final.
- La division entera entre $10$ le queda el ultimo digito al numero.
- El modulo con $10$ te da el ultimo digito del numero.

Entonces, solo basta dividir entre $10$ para quitar el ultimo digito y modulo $10$ para imprimir el ultimo digito.

```cpp
#include <bits/stdc++.h>
using namespace std;

int a, b;

int main() {
    cin >> a;
    cout << a / 10 << " " << a % 10;
    return 0;
}
```