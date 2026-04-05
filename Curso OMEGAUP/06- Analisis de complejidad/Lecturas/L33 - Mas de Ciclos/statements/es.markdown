*Esta es una* ***lectura*** *diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.*

# El optimizador de entrada/salida

Hasta ahora nuestra plantilla base es:

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

    return 0;
}
```

En los problemas que involucran ciclos, muchas veces vamos a leer y escribir **muchos** datos. Hay una línea que debes agregar a tu plantilla para que esa lectura y escritura sea más rápida:

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    return 0;
}
```

Esto se llama el **optimizador de entrada/salida**. Sin él, algunos problemas con N grande pueden darte "Tiempo Límite Excedido" aunque tu algoritmo sea correcto.

# ¿Qué hace exactamente?

Por defecto, cada vez que haces `cin` (leer), C++ primero imprime todo lo que tiene pendiente en pantalla (el *buffer* de salida). Esto permite programas interactivos donde el usuario ve un mensaje antes de escribir. Pero en programación competitiva no nos importa ese comportamiento — queremos que entrada y salida sean lo más rápido posible.

`ios_base::sync_with_stdio(0)` desvincula los streams de C++ de los de C (más rápido).
`cin.tie(0)` elimina la sincronización entre `cin` y `cout`.

El efecto práctico: todo lo que imprimes se acumula en el buffer y se vuelca al final, en lugar de hacerlo en cada `cin`. El programa corre más rápido.

# Cuándo usarlo

Siempre. A partir de ahora esta línea va en todas tus soluciones. Con N pequeño no marca diferencia, pero con N grande puede ser la diferencia entre AC y TLE.

Tu plantilla definitiva:

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    // tu código aquí

    return 0;
}
```
