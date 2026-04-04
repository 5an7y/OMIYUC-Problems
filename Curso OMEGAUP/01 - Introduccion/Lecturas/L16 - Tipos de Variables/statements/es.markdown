Esta es una **lectura** diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.

# Tipos de Variables

Prueba esto: suma $1{,}512{,}345{,}678$ y $2{,}012{,}345{,}678$ con el programa de sumar que ya sabes escribir.

```cpp
#include <bits/stdc++.h>
using namespace std;

int a, b, c;

int main() {
    cin >> a >> b;
    c = a + b;
    cout << c;
    return 0;
}
```

||input
1512345678 2012345678
||output
-770276940
||end

El resultado es un número negativo. Algo salió mal — y no es tu código.

El problema es que un `int` solo puede guardar números hasta $2{,}147{,}483{,}647$ ($\approx 2 \times 10^9$). La suma de esos dos números es $3{,}524{,}691{,}356$, que se sale del rango y produce un resultado incorrecto. A esto se le llama **desbordamiento** (*overflow*).

## Los tipos de datos en C++

| Identificador | Qué guarda | Máximo aproximado |
|---|---|---|
| `short int` | Entero pequeño | $\approx 3 \times 10^4$ |
| `int` | Entero | $\approx 2 \times 10^9$ |
| `long long` | Entero grande | $\approx 9 \times 10^{18}$ |
| `bool` | Verdadero o falso | 1 |
| `char` | Un carácter (letra, símbolo) | — |
| `double` | Número decimal (doble precisión) | — |

## Notas prácticas

- **En competencias casi siempre usarás `int` o `long long`.** Los demás tipos los irás conociendo gradualmente.
- **Para recordar el límite de `int`**: tiene 10 dígitos, empieza con 2. Para `long long`: tiene 19 dígitos, empieza con 9.
- **Cuando los números sean grandes, usa `long long`** directamente. No pasa nada si sobra capacidad.
- **Nunca uses `float` — usa `double`** para decimales. `float` tiene menos precisión y causa errores raros.

## Corrigiendo el ejemplo

Cambiar `int` por `long long` resuelve el problema:

```cpp
#include <bits/stdc++.h>
using namespace std;

long long a, b, c;

int main() {
    cin >> a >> b;
    c = a + b;
    cout << c;
    return 0;
}
```

||input
1512345678 2012345678
||output
3524691356
||end
