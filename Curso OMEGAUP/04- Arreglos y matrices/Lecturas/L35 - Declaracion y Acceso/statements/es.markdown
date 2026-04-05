# Arreglos: un nombre para muchas variables

Un **arreglo** es una colección de variables del mismo tipo, todas bajo un solo nombre. En vez de declarar `a1, a2, a3, ... a100`, declaras un arreglo de tamaño 100:

```cpp
int arr[100];
```

Eso crea 100 variables enteras de un solo golpe. Puedes imaginarlas como una fila de cajitas numeradas:

```
arr[0]  arr[1]  arr[2]  arr[3]  ...  arr[99]
  ?       ?       ?       ?              ?
```

# Accediendo a cada posición

Para usar una variable del arreglo, pones el nombre del arreglo seguido de la posición entre corchetes:

```cpp
arr[0] = 5;       // guarda 5 en la posición 0
arr[1] = arr[0] + 3;  // guarda 8 en la posición 1
cout << arr[1];   // imprime 8
cin >> arr[2];    // lee un número y lo guarda en la posición 2
```

Cada `arr[i]` se comporta exactamente como una variable entera normal.

# Importante: el índice va de 0 a N-1

Un arreglo de tamaño $N$ tiene posiciones válidas desde $0$ hasta $N-1$.

Si declaras `int arr[5]`, las posiciones válidas son `arr[0]`, `arr[1]`, `arr[2]`, `arr[3]` y `arr[4]`. **No existe `arr[5]`** — si lo usas, el programa dará un error de ejecución (o un resultado incorrecto muy difícil de detectar). Lo mismo aplica para índices negativos como `arr[-1]`.

Asegúrate siempre de que el índice sea un número entre $0$ y el tamaño menos uno.

# Ejemplo: A+B con arreglo

Para que veas que es lo mismo que una variable normal, aquí está el clásico problema A+B resuelto con un arreglo:

```cpp
#include <bits/stdc++.h>
using namespace std;

int arr[3];

int main() {
    cin >> arr[0] >> arr[1];
    arr[2] = arr[0] + arr[1];
    cout << arr[2];
    return 0;
}
```

`arr[0]` hace el papel de `a`, `arr[1]` de `b`, y `arr[2]` de `c`. La lógica es idéntica.

# ¿De qué tamaño declararlo?

Siempre declara el arreglo con el **tamaño máximo posible** según los límites del problema, no con una variable. Esto:

```cpp
int N;
cin >> N;
int arr[N];  // ¡evitar! puede dar problemas
```

Es mejor evitarlo. Usa en su lugar:

```cpp
int N, arr[100];  // si N ≤ 100
```

Declarar el arreglo de forma global (fuera del `main`) también funciona bien y evita problemas de memoria en casos grandes.
