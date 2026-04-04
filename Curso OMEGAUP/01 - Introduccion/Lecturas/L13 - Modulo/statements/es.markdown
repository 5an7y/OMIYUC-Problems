Esta es una **lectura** diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.

# El Operador Módulo

Imagina que tienes 14 manzanas y las quieres repartir entre 4 amigos de forma equitativa. A cada uno le tocan 3 manzanas ($4 \times 3 = 12$) y te **sobran 2**. Ese sobrante es lo que calcula el operador módulo.

El módulo (`%`) devuelve el **residuo** de dividir dos números enteros. Si recuerdas cómo dividías antes de aprender decimales — con cociente y residuo — es exactamente eso.

$$127 \div 5 = 25 \text{ con residuo } 2 \quad \Rightarrow \quad 127 \% 5 = 2$$

```cpp
#include <bits/stdc++.h>
using namespace std;

int a, b, c;

int main() {
    a = 127;
    b = 5;
    c = a % b;
    cout << c;
    return 0;
}
```

||input
||output
2
||end

## Propiedades importantes

**El resultado siempre está entre 0 y b−1.** El residuo nunca puede ser mayor o igual al divisor: si lo fuera, significaría que cabía una división más.

**El resultado es 0 cuando `a` es múltiplo de `b`.** Verificar si un número es múltiplo de otro es uno de los usos más frecuentes del módulo en competencias:

```cpp
if (a % 2 == 0) { /* a es par */ }
if (a % 5 == 0) { /* a es múltiplo de 5 */ }
```

**El módulo tiene la misma prioridad que `*` y `/`.** Se evalúa antes que `+` y `-`.