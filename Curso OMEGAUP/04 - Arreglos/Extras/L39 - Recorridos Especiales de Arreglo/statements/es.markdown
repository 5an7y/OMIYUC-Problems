# Más allá del i++

Hasta ahora el `for` siempre avanzaba de uno en uno: `i++`. Pero no hay ninguna regla que lo obligue. El `for` puede avanzar de 2 en 2, o de 3 en 3, o con cualquier paso que necesites.

```cpp
for (int i = 0; i < N; i += 2) {
    cout << arr[i] << " ";   // visita solo posiciones 0, 2, 4, 6...
}
```

Esto es útil cuando los datos vienen agrupados — por ejemplo, en **parejas consecutivas**.

# Problema de motivación

Tienes un arreglo de $N$ elementos (con $N$ par). Los elementos van en parejas: el par 0 es `arr[0]` y `arr[1]`, el par 1 es `arr[2]` y `arr[3]`, y así. Quieres imprimir la suma de cada par.

Entrada: `6` → `1 5 4 3 2 9`
Salida: `6 7 11` (porque $1+5=6$, $4+3=7$, $2+9=11$)

# Solución 1: índice con salto

Avanza `i` de 2 en 2. En cada posición, suma `arr[i]` con `arr[i+1]`:

```cpp
for (int i = 0; i < N; i += 2) {
    cout << arr[i] + arr[i + 1] << " ";
}
```

Limpio y directo. No necesitas un segundo arreglo.

# Solución 2: mapeo matemático

A veces es útil pensar en el **índice del par** `j` (0, 1, 2...) y mapear qué posiciones del arreglo le corresponden:

- Par 0 → posiciones `0` y `1` → `arr[2*0]` y `arr[2*0+1]`
- Par 1 → posiciones `2` y `3` → `arr[2*1]` y `arr[2*1+1]`
- Par `j` → posiciones `2j` y `2j+1`

```cpp
for (int j = 0; j < N / 2; j++) {
    cout << arr[2 * j] + arr[2 * j + 1] << " ";
}
```

Ambas soluciones producen el mismo resultado. La segunda es útil cuando también necesitas el índice del par (por ejemplo, para guardarlo en otro arreglo).

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

    for (int i = 0; i < N; i += 2) {
        cout << arr[i] + arr[i + 1] << " ";
    }

    return 0;
}
```
