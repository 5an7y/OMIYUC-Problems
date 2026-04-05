En este caso solo debemos hacer un ciclo que se ejecute las $N$ veces y podemos justamente usar la variable $i$ para mostrar los valores que necesitamos.

```cpp
#include <bits/stdc++.h>
using namespace std;

int N;

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cout << i << " ";
    }

    return 0;
}
```