Solo debemos hacer las operaciones que se nos indica e imprimirlas en ese orden. El unico detalle que debemos notar es que a lo mas las variables son $10^6$ y al sacar la multiplicacion se sale de los limites de un `int` por eso debemos usar un `long long`.

```cpp
#include <bits/stdc++.h>
using namespace std;

long long a, b;

int main() {
    cin >> a >> b;
    cout << a + b << "\n";
    cout << a - b << "\n";
    cout << a * b << "\n";
    cout << a / b << "\n";
    cout << a % b << "\n";
    return 0;
}
```