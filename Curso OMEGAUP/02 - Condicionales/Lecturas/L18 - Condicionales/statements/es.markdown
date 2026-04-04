Esta es una **lectura** diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.

# Condicionales

Todos tus programas hasta ahora hacen exactamente lo mismo sin importar la entrada. Eso está a punto de cambiar.

Muchas veces queremos que el programa haga cosas *distintas dependiendo de la situación*.

Por ejemplo: si un menor de edad intenta comprar un boleto para una película $18+$, no debería poder pasar. Si es adulto, sí. El programa tiene que **tomar una decisión** según la edad.

En programación, eso se llama una **condicional**: *si algo pasa, entonces hacer tal cosa*.

# El if

La condicional más básica en C++ es el `if`. Se escribe así:

```cpp
if (condicion) {
    // esto se ejecuta SOLO si la condición se cumple
}
// esto se ejecuta SIEMPRE
```

Si la condición se cumple, entra al bloque `{}` y ejecuta el código. Si no se cumple, se lo salta y sigue.

Ejemplo concreto: leer una edad e imprimir un mensaje si la persona es mayor de edad.

```cpp
#include <bits/stdc++.h>
using namespace std;

int edad;

int main() {
    cin >> edad;

    if (edad >= 18) {
        cout << "Puedes pasar.\n";
    }

    cout << "Gracias por visitarnos.\n";
    return 0;
}
```

Si entras `21`, imprime:
```
Puedes pasar.
Gracias por visitarnos.
```

Si entras `15`, imprime solo:
```
Gracias por visitarnos.
```

El `"Gracias por visitarnos."` siempre aparece porque está **fuera** del `if`.
