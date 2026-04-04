Esta es una **lectura** diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.

# Condiciones con Enteros

Ya sabes que `edad >= 18` verifica si alguien es mayor de edad. Pero ¿cómo verificas si dos valores son exactamente iguales? La primera idea que se te viene es escribir `a = 5`. Pruébalo — compila y corre. El código no da error, pero hace algo completamente diferente a lo que esperas.

El problema es que `=` es asignación: `a = 5` le dice al programa "guarda 5 en a". Para *comparar*, necesitas dos signos de igual: `==`.

```cpp
if (a = 5)  { ... }   // MAL: asigna 5 a 'a', siempre se cumple
if (a == 5) { ... }   // BIEN: pregunta si 'a' vale 5
```

Este es uno de los bugs más difíciles de detectar porque el código compila sin errores pero se comporta mal. Todos caen en él alguna vez.

## Los comparadores

Además de `==`, tienes otros operadores para comparar enteros:

| Operador | Descripción | Ejemplo |
| ---      | ---         | ---     |
|`>`  | Mayor que | `18 > 17` → verdadero |
|`<`  | Menor que | `18 < 17` → falso |
|`==` | Igual a | `17 == 17` → verdadero |
|`>=` | Mayor o igual que | `18 >= 18` → verdadero |
|`<=` | Menor o igual que | `18 <= 19` → verdadero |
|`!=` | Diferente de | `17 != 19` → verdadero |

Una condición se forma con `expresion1 operador expresion2`. Las expresiones pueden ser variables, constantes u operaciones:

- `a < b`
- `a != 0`
- `a % 10 == 0`
- `a + b <= c + d * 2`

Nota que **solo se comparan dos expresiones** — no es válido `a == b == c`.

## Ejemplo completo

Código que lee una edad e imprime mensajes según la condición:

```cpp
#include <bits/stdc++.h>
using namespace std;

int a;

int main() {
    cin >> a;

    if (a > 17) {
        cout << "compra realizada!\n";
    }

    cout << "gracias!";
    return 0;
}
```

||input
10
||output
gracias!
||input
17
||output
gracias!
||input
18
||output
compra realizada!
gracias!
||end

Con `17` no aparece `compra realizada!` porque `17 > 17` es falso. Con `18` sí, porque `18 > 17` es verdadero.
