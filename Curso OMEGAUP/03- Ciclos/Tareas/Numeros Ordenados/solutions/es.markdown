Este problema si es de perdida memoria ya que solo necesitamos un par de números junto con una variable que nos diga si la secuencia esta ordenada o no. Si en algún punto encontramos que $x_{i} > x_{i + 1}$ podemos saber que esta ordenada. Por otro lado, si eso no pasa podemos saber que si se encuentra ordenada.

```cpp
#include <bits/stdc++.h>
using namespace std;

int N, ant, act;
bool ordenado;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> N;
    // Suponemos que la sencuencia esta ordenada.
    ordenado = true; 
    // Leemos el primer numero y lo guardamos como anterior.
    cin >> ant;
    for (int i = 1; i < N; i++) {
        cin >> act;
        // Si el anterior es mas grande que el actual
        // sabemos que la secuencia no esta ordenada.
        if (ant > act) {
            ordenado = false;
        }
        // Actualizamos el anterior
        ant = act;
    }

    if (ordenado) {
        cout << "Si";
    } else {
        cout << "No";
    }
    return 0;
}
```
