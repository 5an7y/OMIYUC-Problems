El problema lo podemos resolver con un ciclo que vaya duplicando la vida. Donde la condicion es que mientras tu vida es menor o igual a la de tu contricante.

```cpp
#include <bits/stdc++.h>
using namespace std;

int miVida, contVida;

int main() {
    cin >> miVida >> contVida;

    while (miVida <= contVida) {
        miVida *= 2;
    }

    cout << miVida;

    return 0;
}
```