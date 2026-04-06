Lo que queremos lograr en este problema es rotar un arreglo. Igual se le suele decir de forma más correcta *shiftearlo*. El orden relativo del arreglo no cambia, es decir, siempre "el que va después" de cada elemento permanece igual. Lo único que cambia al realizar el giro es desde donde iniciamos. Cuando hacemos un giro de $k$ elementos, el elemento con el que iniciaremos ahora será el $k$. Luego, el arreglo sigue normal solo que "da una vuelta" y una vez imprimimos el último elemento, debemos volver con el primero.

Podemos realizar esto llevando una variable `pos_real` que vamos moviendo como se debe para imprimir la respuesta y cuando esa variable sea $N-1$ el siguiente lo hacemos $0$. Otra forma un poco más sencilla de hacer es con dos ciclos, uno para imprimir la primera parte y otro la segunda.

```cpp
#include <bits/stdc++.h>
using namespace std;

int N, K, nums[100000];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> N >> K;

    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }

    for (int i = K; i < N; i++) {
        cout << nums[i] << " ";
    }

    for (int i = 0; i < K; i++) {
        cout << nums[i] << " ";
    }
    
    return 0;
}
```