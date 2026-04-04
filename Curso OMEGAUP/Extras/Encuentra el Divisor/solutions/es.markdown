# Solución

Recordemos que para verificar si `b` divide a `a` podemos usar `a % b == 0`. Combinando esto con `&&`, podemos verificar si un número divide a los otros dos. Usamos `else if` para probar cada candidato y el `else` final para el caso en que ninguno divide a los otros dos.

```cpp
#include <bits/stdc++.h>
using namespace std;

int a, b, c;

int main() {
    cin >> a >> b >> c;

    if (b % a == 0 && c % a == 0) {
        cout << a;
    } else if (a % b == 0 && c % b == 0) {
        cout << b;
    } else if (a % c == 0 && b % c == 0) {
        cout << c;
    } else {
        cout << -1;
    }

    return 0;
}
```
