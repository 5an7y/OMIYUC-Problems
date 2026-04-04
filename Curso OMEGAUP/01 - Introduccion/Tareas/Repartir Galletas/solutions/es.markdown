En este caso sabemos que la division entera nos da la cantidad de galletas que recibe cada amigo y el modulo nos da cuanto nos sobra. Entonces, el mejor amigo se lleva la suma de esas operaciones.

```cpp
#include <bits/stdc++.h>
using namespace std;

int a, b;

int main() {
    cin >> a >> b;
    cout << a / b + a % b;
    return 0;
}
```