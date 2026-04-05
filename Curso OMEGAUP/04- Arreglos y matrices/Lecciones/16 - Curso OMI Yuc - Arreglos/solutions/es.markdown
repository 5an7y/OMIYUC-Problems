Para leer el arreglo no deberíamos tener problemas ya que se explica en el propio problema.

```cpp
#include <bits/stdc++.h>
using namespace std;

int N, ar[100];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> ar[i];
    }

    return 0;
}
```

Ahora para imprimir las posiciones pares tenemos dos opciones. Una es recorre el arreglo y hacer un chequeo en la posición de la siguiente forma.

```cpp
for (int i = 0; i < N; i++) {
    if (i % 2 == 0) {
        cout << ar[i] << " ";
    }
}
```

Recordemos que $i$ nos lleva la posición en la que estamos. De esta forma hemos impreso los que se encuentran en posición par. Podemos hacer algo similar para las posiciones impares y terminamos con un código como el siguiente.

```cpp
#include <bits/stdc++.h>
using namespace std;

int N, ar[100];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> ar[i];
    }

    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) { // Si la posicion es par
            cout << ar[i] << " ";
        }
    }

    cout << '\n';

    for (int i = 0; i < N; i++) {
        if (i % 2 == 1) { // Si la posicion es impar
            cout << ar[i] << " ";
        }
    }

    return 0;
}
```

Otra forma de solucionar este problema es evitando pasar por las posiciones impares. Para esto en lugar de que el iterador incremente uno a uno, podemos hacer que incremente de dos en dos.

```cpp
for (int i = 0; i < N; i += 2) {
    cout << ar[i] << " ";
}
```

Podemos hacer lo mismo para los impares empezando desde el 1.

```cpp
#include <bits/stdc++.h>
using namespace std;

int N, ar[100];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> ar[i];
    }

    for (int i = 0; i < N; i += 2) {
        cout << ar[i] << " ";
    }
    cout << '\n';
    for (int i = 1; i < N; i += 2) {
        cout << ar[i] << " ";
    }

    return 0;
}
```
