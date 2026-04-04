Esta es una **lectura** diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.
# Variables Booleanas

Ya conoces `int` para números enteros. Ahora conocerás un tipo de variable diseñada para responder una sola pregunta: ¿sí o no?

Las variables de tipo `bool` solo pueden tener dos valores: `true` (verdadero) o `false` (falso). Se declaran igual que cualquier variable:

```cpp
bool encontrado;  // empieza en false si es global
```

Puedes asignarles `true` o `false` directamente, y usarlas en un `if` sin necesidad de compararlas con nada:

```cpp
encontrado = true;

if (encontrado) {          // equivalente a encontrado == true
    cout << "Lo encontré";
}
if (!encontrado) {         // equivalente a encontrado == false
    cout << "No lo encontré";
}
```

## ¿Para qué sirven?

Su utilidad principal es **recordar si algo ocurrió** durante la ejecución del programa. Piensa en situaciones donde tienes varios `if`s independientes (no encadenados con `else`) y al final quieres saber si alguno se cumplió.

Por ejemplo, un sistema de alarma que verifica tres sensores por separado y activa la alarma si alguno detectó movimiento:

```cpp
#include <bits/stdc++.h>
using namespace std;

int sensor1, sensor2, sensor3;
bool alarma;

int main() {
    cin >> sensor1 >> sensor2 >> sensor3;

    if (sensor1 > 0) {
        alarma = true;
    }
    if (sensor2 > 0) {
        alarma = true;
    }
    if (sensor3 > 0) {
        alarma = true;
    }

    if (alarma) {
        cout << "Intruso detectado";
    } else {
        cout << "Todo tranquilo";
    }

    return 0;
}
```

||input
0 0 0
||output
Todo tranquilo
||input
0 5 0
||output
Intruso detectado
||input
3 0 2
||output
Intruso detectado
||end

No podrías resolver esto con un solo `if (sensor1 > 0 || sensor2 > 0 || sensor3 > 0)` si los sensores también tuvieran efectos secundarios individuales al activarse. El `bool` te permite separar la detección de la acción final.
