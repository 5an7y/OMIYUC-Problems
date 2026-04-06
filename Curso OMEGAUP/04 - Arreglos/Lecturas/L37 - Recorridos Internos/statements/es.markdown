# Recorrer desde adentro

Ya usaste el arreglo para hacer dos pasadas en secuencia: leer todo en la primera, procesar en la segunda. Pero hay una técnica diferente: **recorrer el arreglo completo desde dentro de otro recorrido**.

Así se ve la estructura:

```cpp
for (int i = 0; i < N; i++) {       // recorrido externo: cada elemento
    for (int j = 0; j < N; j++) {   // recorrido interno: buscar algo en todo el arreglo
        ...
    }
}
```

El ciclo externo visita cada posición. Por cada posición, el ciclo interno recorre **todo** el arreglo. En total se hacen $N \times N = N^2$ operaciones — perfectamente rápido para $N \leq 100$.

# El número solitario

Un arreglo de $N$ números donde todos aparecen exactamente **dos** veces, excepto **uno** que aparece una sola vez. Encuéntralo.

Ejemplo: `[3 7 3 5 7]` → el 3 aparece dos veces, el 7 dos veces, el 5 una sola vez. Respuesta: `5`.

¿Cómo saber cuál es el solitario? Para cada elemento `arr[i]`, cuenta cuántas veces aparece en el arreglo. Si la cuenta es 1, ese es.

```cpp
for (int i = 0; i < N; i++) {
    int cuenta = 0;
    for (int j = 0; j < N; j++) {
        if (arr[j] == arr[i]) cuenta++;
    }
    if (cuenta == 1) {
        cout << arr[i];
    }
}
```

El ciclo interno hace el conteo. En cuanto encontramos al solitario (cuenta == 1), lo imprimimos y salimos con `break`.

# Código completo

```cpp
#include <bits/stdc++.h>
using namespace std;

int N, arr[100];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < N; i++) {
        int cuenta = 0;
        for (int j = 0; j < N; j++) {
            if (arr[j] == arr[i]) cuenta++;
        }
        if (cuenta == 1) {
            cout << arr[i];
        }
    }

    return 0;
}
```
