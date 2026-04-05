Podemos traducir el problema a verificar cuantos números de los que nos dan se encuentran en un rango $[a, b]$. Para esto basta verificar que `a <= xi && xi <= b`.

```cpp
#include <bits/stdc++.h>
using namespace std;

int N, a, b, xi, res;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> N >> a >> b;

    res = 0;
    for (int i = 0; i < N; i++) {
        cin >> xi;
        if (a <= xi && xi <= b) {
            res++;
        }
    }
    cout << res;
    return 0;
}
```
