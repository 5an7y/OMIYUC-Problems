Esta es una **lectura** diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.

# Atajos de C++

Ya sabes escribir programas que leen datos, operan con variables y producen resultados. En esta lectura verás unos atajos que C++ ofrece para escribir código más corto. No cambian lo que el programa hace — solo hacen el código más rápido de escribir y más fácil de leer.

Los vas a ver en muchos ejemplos y soluciones del curso, así que conviene conocerlos.

## Operadores de asignación compuesta

Es muy común querer modificar una variable usando su propio valor. Por ejemplo, sumarle 5 a `a`:

```cpp
a = a + 5;
```

C++ tiene una forma corta para eso:

```cpp
a += 5;  // equivale a: a = a + 5
```

Funciona igual para todas las operaciones aritméticas:

| Forma larga | Atajo | Qué hace |
|---|---|---|
| `a = a + 5` | `a += 5` | Suma 5 a `a` |
| `a = a - 3` | `a -= 3` | Resta 3 de `a` |
| `a = a * 2` | `a *= 2` | Multiplica `a` por 2 |
| `a = a / 4` | `a /= 4` | Divide `a` entre 4 (entera) |
| `a = a % 10` | `a %= 10` | Queda el residuo de `a` entre 10 |

Ejemplo completo:

```cpp
#include <bits/stdc++.h>
using namespace std;

int a;

int main() {
    a = 10;
    a += 5;   // a ahora vale 15
    a *= 2;   // a ahora vale 30
    a -= 8;   // a ahora vale 22
    cout << a;
    return 0;
}
```

||input
||output
22
||end

## Incremento y decremento

Sumar 1 o restar 1 a una variable es tan frecuente que C++ tiene operadores especiales para eso:

```cpp
a++;   // equivale a: a = a + 1
a--;   // equivale a: a = a - 1
```

Ejemplo:

```cpp
#include <bits/stdc++.h>
using namespace std;

int a;

int main() {
    a = 7;
    a++;
    cout << a;   // imprime 8
    a--;
    a--;
    cout << " " << a;   // imprime 6
    return 0;
}
```

||input
||output
8 6
||end

Los verás mucho dentro de ciclos — por ahora solo familiarízate con la sintaxis.

## Declarar múltiples variables en una línea

En lugar de escribir una línea por variable, puedes declararlas todas juntas separadas por comas:

```cpp
// Forma larga
int a;
int b;
int c;

// Forma corta — equivalente
int a, b, c;
```

Ambas formas hacen exactamente lo mismo. La forma corta es la más común en programación competitiva cuando tienes varias variables del mismo tipo.
