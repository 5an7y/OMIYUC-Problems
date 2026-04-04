Esta es una **lectura** diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.

Fecha de creación: 29 de marzo de 2025.

# Switch y Operador Ternario

A veces el código con `if/else` funciona perfectamente pero ocupa más líneas de las necesarias. Esta lectura presenta dos herramientas que reemplazan patrones comunes con versiones más compactas.

## Switch

Cuando necesitas hacer cosas distintas según el **valor exacto** de una variable entera, el `switch` es más limpio que una cadena larga de `else if`.

Imagina una calculadora básica donde el usuario elige la operación con un número:

```cpp
// Con else if — funciona pero se repite mucho
if (opcion == 1) { cout << a + b; }
else if (opcion == 2) { cout << a - b; }
else if (opcion == 3) { cout << a * b; }
else if (opcion == 4) { cout << a / b; }
else { cout << "Invalido"; }
```

Con `switch`:

```cpp
#include <bits/stdc++.h>
using namespace std;

int opcion, a, b;

int main() {
    cin >> opcion >> a >> b;

    switch (opcion) {
        case 1:
            cout << a + b;
            break;
        case 2:
            cout << a - b;
            break;
        case 3:
            cout << a * b;
            break;
        case 4:
            cout << a / b;
            break;
        default:
            cout << "Opcion invalida";
    }

    return 0;
}
```

||input
1 10 3
||output
13
||input
3 4 5
||output
20
||end

Dos reglas importantes del `switch`:

- El `break` al final de cada `case` es obligatorio. Sin él, el código "cae" al siguiente `case` y lo ejecuta también, aunque no coincida.
- Solo puedes comparar por **valor exacto**. No puedes poner rangos ni condiciones complejas dentro de un `case`.

## Operador ternario

El operador ternario permite asignar un valor dependiendo de una condición, todo en una sola línea. Su sintaxis es:

```
condicion ? valor_si_verdadero : valor_si_falso
```

Por ejemplo, obtener el mayor de dos números:

```cpp
// Con if/else
if (a > b) {
    mayor = a;
} else {
    mayor = b;
}

// Con operador ternario — exactamente lo mismo
mayor = a > b ? a : b;
```

Ejemplo completo:

```cpp
#include <bits/stdc++.h>
using namespace std;

int a, b, mayor, menor;

int main() {
    cin >> a >> b;

    mayor = a > b ? a : b;
    menor = a < b ? a : b;

    cout << "Mayor: " << mayor << "\n";
    cout << "Menor: " << menor;

    return 0;
}
```

||input
8 3
||output
Mayor: 8
Menor: 3
||end

Úsalo cuando la lógica es sencilla y la intención queda clara de un vistazo. Si la condición o los valores son complicados, `if/else` es más legible.
