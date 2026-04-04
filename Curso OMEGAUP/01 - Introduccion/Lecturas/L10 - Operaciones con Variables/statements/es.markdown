Esta es una **lectura** diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.

# Operaciones con Variables

Ya sabes declarar variables. Ahora aprenderás a guardar valores en ellas, imprimirlas y operar entre ellas.

## Asignación

Para guardar un valor en una variable usas el signo `=`. Esto se llama **asignar** un valor:

```cpp
#include <bits/stdc++.h>
using namespace std;

int a;

int main() {
    a = 10;
    cout << a;
    return 0;
}
```

||input
||output
10
||end

El `=` en programación no significa "es igual que" — significa "guarda este valor aquí". El valor de la derecha se almacena en la variable de la izquierda.

## Operaciones aritméticas

Las variables se vuelven útiles cuando operas con ellas. Las cuatro operaciones básicas son:

| Operación | Símbolo | Ejemplo |
|---|---|---|
| Suma | `+` | `a + b` |
| Resta | `-` | `a - b` |
| Multiplicación | `*` | `a * b` |
| División | `/` | `a / b` |

```cpp
#include <bits/stdc++.h>
using namespace std;

int a, b, suma, resta, mult, div_;

int main() {
    a = 6;
    b = 2;
    suma = a + b;
    resta = a - b;
    mult = a * b;
    div_ = a / b;
    cout << suma << " " << resta << " " << mult << " " << div_;
    return 0;
}
```

||input
||output
8 4 12 3
||end

## División entera

Como las variables son enteras, la división siempre da un resultado entero: **se descarta la parte decimal**.

```cpp
#include <bits/stdc++.h>
using namespace std;

int a, b, c;

int main() {
    a = 8;
    b = 3;
    c = a / b;
    cout << c;
    return 0;
}
```

||input
||output
2
||end

$8 \div 3 = 2.666\ldots$ pero como `c` es `int`, el resultado es `2`. No redondea al más cercano — siempre trunca hacia abajo.
