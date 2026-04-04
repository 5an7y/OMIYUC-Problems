Esta es una **lectura** diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.
# Condiciones Anidadas

Muchas veces no basta con verificar una única condición. Dependiendo del resultado de la primera, quizás tenemos que verificar otra. A eso le llamamos **condiciones anidadas**: un `if` dentro de otro `if`.

## Motivación

Imagina un videojuego con dos tipos de personaje: **guerrero** y **mago**. Cada uno tiene una habilidad especial que se activa según su nivel:

| Tipo | Nivel | Habilidad |
|------|-------|-----------|
| Guerrero (1) | <= 5 | Golpe básico |
| Guerrero (1) | > 5  | Golpe devastador |
| Mago (2)     | <= 5 | Bola de fuego pequeña |
| Mago (2)     | > 5  | Lluvia de meteoros |

Para saber qué habilidad usar, primero revisas el tipo y **luego** el nivel. No puedes saberlo con un solo `if`.

## Sintaxis

Simplemente pones un `if` dentro de las llaves de otro `if`:

```cpp
if (condicion1) {
    if (condicion2) {
        // se cumplieron ambas
    } else {
        // se cumplió 1 pero no 2
    }
} else {
    if (condicion3) {
        // no se cumplió 1, pero sí 3
    } else {
        // no se cumplió ninguna
    }
}
```

Recuerda siempre mantener la **indentación** correcta — cada nivel de llave agrega un tab. Si no indentás, el código se vuelve imposible de leer.

## Ejemplo completo

```cpp
#include <bits/stdc++.h>
using namespace std;

int tipo, nivel;

int main() {
    cin >> tipo >> nivel;

    if (tipo == 1) {
        if (nivel <= 5) {
            cout << "Golpe basico";
        } else {
            cout << "Golpe devastador";
        }
    } else {
        if (nivel <= 5) {
            cout << "Bola de fuego pequena";
        } else {
            cout << "Lluvia de meteoros";
        }
    }

    return 0;
}
```

||input
1 3
||output
Golpe basico
||input
1 8
||output
Golpe devastador
||input
2 3
||output
Bola de fuego pequena
||input
2 9
||output
Lluvia de meteoros
||end

Puedes anidar tantos niveles como necesites, pero más de 3 niveles suele ser señal de que hay una forma más clara de resolver el problema.
