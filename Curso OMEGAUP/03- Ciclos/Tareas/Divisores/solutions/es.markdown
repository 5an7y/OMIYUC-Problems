Solo debemos recorrer todos los números desde el $1$ hasta $N$ y preguntar cuáles son divisores. Porque, no puede haber divisor después de $N$.

```cpp
#include <bits/stdc++.h>
using namespace std;

int N;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> N;
    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            cout << i << " ";
        }
    }
    return 0;
}
```