Esta es una **lectura** diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.

# Jerarquía de Operaciones

¿Qué resultado crees que da este código?

```cpp
c = 6 + 2 * 2 - 6;
```

Si respondiste `4`, es correcto. Si respondiste `2` (sumando de izquierda a derecha), aquí está la explicación.

## El orden importa

Las operaciones no se hacen de izquierda a derecha. Igual que en matemáticas, hay un orden de prioridad:

| Prioridad | Operación |
|---|---|
| 1 (primero) | Paréntesis `( )` |
| 2 | Multiplicación `*`, División `/` |
| 3 (último) | Suma `+`, Resta `-` |

Cuando dos operaciones tienen la misma prioridad, se evalúan de izquierda a derecha.

Entonces en `6 + 2 * 2 - 6`:
1. Primero la multiplicación: $2 \times 2 = 4$
2. Luego suma y resta de izquierda a derecha: $6 + 4 - 6 = 4$

## El error que atrapa a todos

Hay un error que comete casi todo el mundo en algún momento — y lo peligroso es que **el código compila y corre sin ningún error**, pero da el resultado incorrecto.

Imagina que quieres calcular el promedio de dos números:

```cpp
// Intención: calcular el promedio de a y b
c = a + b / 2;   // ¡MAL! Divide solo b entre 2, no la suma
```

Si `a = 6` y `b = 4`, esperas `5`. Pero el código calcula `6 + (4/2) = 6 + 2 = 8`. Tu programa parece funcionar — hasta que lo pruebas con un caso donde el error importa.

La solución son los paréntesis:

```cpp
c = (a + b) / 2; // BIEN — suma primero, luego divide
```

## Usando paréntesis para cambiar el orden

Cuando necesites que una operación de menor prioridad se haga primero, agrupa con paréntesis:

```cpp
#include <bits/stdc++.h>
using namespace std;

int a, b, c;

int main() {
    a = 6;
    b = 2;

    c = (a + b) * (a - b);
    cout << c;
    return 0;
}
```

||input
||output
32
||end

$(6 + 2) \times (6 - 2) = 8 \times 4 = 32$. Sin paréntesis, `a + b * a - b` daría $6 + 12 - 2 = 16$.

**Cuando tengas dudas sobre el orden, pon paréntesis.** No cuestan nada, no cambian el rendimiento del programa, y eliminan toda ambigüedad.
