Esta es una **lectura** diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.

# Variables: guardar información

Hasta ahora tus programas solo imprimen texto fijo. Pero para resolver problemas de verdad necesitas **recordar información**: guardar un número para usarlo más tarde, calcular algo con él, compararlo. Para eso existen las **variables**.

Una variable es un espacio con nombre donde guardas un valor. Piénsala como una caja etiquetada: la etiqueta es el nombre, y dentro va el número.

## Variables enteras (`int`)

El tipo de dato más común en programación competitiva son los **números enteros** (sin punto decimal: $-5, 0, 1, 42, 1000$). En C++ se declaran con `int`:

```cpp
int edad;
int manzanas;
int a;
```

**Declarar** una variable significa decirle a la computadora que la vas a usar. Hay que hacerlo antes del `main`. Si intentas usar una variable sin declararla, el programa no compilará.

> En programación competitiva se acostumbra declarar las variables **fuera del `main`** — así se inicializan en cero automáticamente y estarán disponibles si más adelante usamos funciones. En otros contextos verás variables declaradas dentro del `main`, lo cual también es válido.

El programa completo se ve así:

```cpp
#include <bits/stdc++.h>
using namespace std;

int edad;
int manzanas;

int main() {
    return 0;
}
```

En competencias es común usar nombres cortos como `a`, `b`, `n`. En código que vas a revisar después, un nombre descriptivo como `edad` o `total` te ayuda a entender qué hace cada cosa.

## Reglas para nombrar variables

| Ejemplo | ¿Válido? | Razón |
|---|---|---|
| `edad` | Sí | |
| `edad_santy` | Sí | El guion bajo está permitido |
| `manzanas2` | Sí | Números permitidos después del primer carácter |
| `2hola` | No | No puede empezar con número |
| `edad santy` | No | No se permiten espacios |
| `int` | No | Palabra reservada de C++ |

En resumen: empieza con letra o guion bajo, sin espacios, sin palabras que ya usa C++ (`int`, `return`, `main`, etc.).
