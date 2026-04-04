Esta es una **lectura** diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.
# El else

Ya sabes usar `if` para hacer algo cuando se cumple una condición. ¿Pero qué pasa cuando quieres hacer algo *diferente* cuando **no** se cumple?

La solución obvia es poner dos `if` con condiciones opuestas:

```cpp
if (edad >= 18) {
    cout << "Puedes pasar.\n";
}
if (edad < 18) {
    cout << "No puedes pasar.\n";
}
```

Esto funciona... casi siempre. Pero tiene una trampa que puede costarte puntos en una competencia.

## ¿Cuál es la trampa?

Los dos `if` se evalúan **uno tras otro, de forma independiente**. Si dentro del primero modificas la variable que estás comparando, el segundo puede comportarse de forma inesperada.

Ejemplo: después de dejar pasar al usuario, le asignas un nivel de acceso restado:

```cpp
if (edad >= 18) {
    cout << "Puedes pasar.\n";
    edad -= 2;              // modificamos la variable por algún cálculo
}
if (edad < 18) {            // ← ¡ahora esto puede cumplirse aunque no queríamos!
    cout << "No puedes pasar.\n";
}
```

Si la persona tenía 19 años: entra al primer `if`, imprime "Puedes pasar", y la edad queda en 17. Luego el segundo `if` evalúa `17 < 18`... verdadero. Imprime los dos mensajes. Bug.

## La solución: else

El `else` es exactamente para esto. Garantiza que **solo uno** de los dos bloques se ejecute, sin importar lo que pase con las variables en el camino:

```cpp
if (condicion) {
    // esto se ejecuta si la condición ES verdadera
} else {
    // esto se ejecuta si la condición NO es verdadera
}
```

El `else` **siempre va pegado a un `if`** — no puede existir solo. Y nunca lleva condición propia: simplemente es "en todos los demás casos".

Aplicado al ejemplo:

```cpp
#include <bits/stdc++.h>
using namespace std;

int edad;

int main() {
    cin >> edad;

    if (edad >= 18) {
        cout << "Puedes pasar.\n";
        edad -= 2;
    } else {
        cout << "No puedes pasar.\n";
    }

    cout << "Gracias!";
    return 0;
}
```

Ahora, aunque `edad` se modifique dentro del `if`, el `else` ya no se evalúa. C++ sabe que si el `if` se ejecutó, el `else` no va, y viceversa.

> **Regla:** siempre que tengas dos casos opuestos, usa `if`/`else` en lugar de dos `if` separados.
